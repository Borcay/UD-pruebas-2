//Santiago Hernandez Diaz 20252578001 CONDOR proyecto final
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores Colores
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs Structs
struct Materia {
    char nombre[30];
    float notas[5];
};
struct Estudiante {
    char codigo[20];
    char nombre[30];
    char apellido[30];
    char sexo[20];
    char carrera[30];
    int semestre;
    char facultad[30];
    struct Materia materias[7];
    int cantidad_materias;
};
struct Profesor {
    char codigo[20];
    char nombre[30];
    char apellido[30];
    char sexo[20];
};

//FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES FUNCIONES 
void mostrar_estudiante(const struct Estudiante *e) {
	color(11);
    printf("Codigo   : %s\n", e->codigo);
    printf("Nombre   : %s %s\n", e->nombre, e->apellido);
    printf("Sexo     : %s\n", e->sexo);
    printf("Carrera  : %s\n", e->carrera);
    printf("Semestre : %d\n", e->semestre);
    printf("Facultad : %s\n", e->facultad);
    printf("Materias (cantidad: %d):\n", e->cantidad_materias);
    float promedio_general=0;
    for (int m=0; m<e->cantidad_materias; ++m){
        float suma=0;
        for (int n=0; n<5; ++n) 
			suma+=e->materias[m].notas[n];
			
        float promedio=suma/5;
        promedio_general+=promedio;
        printf("  %d) %s ->", m+1, e->materias[m].nombre);
        
        for (int n=0; n<5; ++n) 
			printf(" %.2f", e->materias[m].notas[n]);
        printf("  | Prom: %.2f\n", promedio);
    }
    
    if (e->cantidad_materias>0) {
        promedio_general/=(float)e->cantidad_materias;
        color(3); printf("Promedio general: %.2f\n", promedio_general); color(15);
    } else {
        color(3); printf("Sin materias.\n"); color(15);
    }
    
    getch();
}
int buscar_estudiante_por_codigo(const char *codigo, struct Estudiante *salida) {
    FILE *f = fopen("estudiantes.bin", "rb");
    struct Estudiante e;
    while (fread(&e, sizeof(struct Estudiante), 1, f)==1) {
        if (strcmp(e.codigo, codigo)==0) {
            if (salida){
            	*salida = e;
			} 
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}
int buscar_profesor_por_codigo(const char *codigo, struct Profesor *salida) {
    FILE *f = fopen("profesores.bin", "rb");
    struct Profesor p;
    while (fread(&p, sizeof(struct Profesor), 1, f)==1) {
        if (strcmp(p.codigo, codigo) == 0) {
            if (salida){
            	*salida=p;
			} 
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

//Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes Estudiantes 
void anadir_estudiante() {
    struct Estudiante e;

    color(11); printf("\n--- Datos de estudiante ---\n");
    printf("Ingrese codigo estudiantil: "); fflush(stdin); gets(e.codigo);
    if(buscar_estudiante_por_codigo(e.codigo, NULL)==1){
		color(12); printf("Ya existe un estudiante con ese codigo.\n"); color(15); 
		return; 
	}
	
    printf("Nombre: "); fflush(stdin); gets(e.nombre);
    printf("Apellido: "); fflush(stdin); gets(e.apellido);
    printf("Sexo: "); fflush(stdin); gets(e.sexo);
    printf("Carrera: "); fflush(stdin); gets(e.carrera);
    printf("Semestre (numero): "); scanf("%d", &e.semestre);
    printf("Facultad: "); fflush(stdin); gets(e.facultad);

    int cantidad=-1;
    while(cantidad<0 || cantidad>7){
        printf("Cuantas materias (0-7): "); scanf("%d", &cantidad); 
    } 
    e.cantidad_materias = cantidad;

    for (int m=0; m<e.cantidad_materias; ++m) {
        printf("Nombre materia #%d: ", m+1); fflush(stdin); gets(e.materias[m].nombre);
        for (int n=0; n<5; ++n){
            printf("  Nota %d: ", n+1); scanf("%f", &e.materias[m].notas[n]);
        }
    }

    FILE *f = fopen("estudiantes.bin", "ab");
    if (!f){ 
		color(12); printf("Error abriendo archivo de estudiantes.\n"); color(15);
		return; 
	}
	
    fwrite(&e, sizeof(struct Estudiante), 1, f);
    fclose(f);
    color(10); printf("Estudiante agregado correctamente.\n"); color(15);
}
void listar_estudiantes() {
    FILE *f = fopen("estudiantes.bin", "rb");
    if (!f){
		color(14); printf("No hay estudiantes registrados.\n"); color(15); 
		return; 
	}
    struct Estudiante e;
    int i=0;
    while (fread(&e, sizeof(struct Estudiante), 1, f)==1){
        color(11); printf("\n----- Estudiante #%d -----\n", ++i); color(15);
        mostrar_estudiante(&e);
    }
    fclose(f);
    if (i==0){ 
		color(14); printf("No hay estudiantes registrados.\n"); color(15); 
	}
}
void editar_estudiante_admin() {
    char codigo[20];
    printf("Codigo del estudiante a editar: "); fflush(stdin); gets(codigo);

    FILE *fentrada = fopen("estudiantes.bin", "rb");
    if (!fentrada){ 
		color(12); printf("Archivo de estudiantes no existe.\n"); color(15); return; 
	}
    FILE *fsalida = fopen("temp_estudiantes.bin", "wb");
    if (!fsalida){
		fclose(fentrada); color(12); printf("Error creando archivo temporal.\n"); color(15); return; 
	}

    struct Estudiante e;
    int encontrado=0;
    while (fread(&e, sizeof(struct Estudiante), 1, fentrada)==1){
        if (strcmp(e.codigo, codigo)==0) {
            encontrado=1;
            color(2); printf("\n-- Editando estudiante %s --\n", codigo); 
            printf("Nuevo nombre: "); fflush(stdin); gets(e.nombre);
            printf("Nuevo apellido: "); fflush(stdin); gets(e.apellido);
            printf("Nuevo sexo: "); fflush(stdin); gets(e.sexo);
            printf("Nueva carrera: "); fflush(stdin); gets(e.carrera);
            printf("Nuevo semestre: "); scanf("%d", &e.semestre); fflush(stdin);
            printf("Nueva facultad: "); fflush(stdin); gets(e.facultad);

            int cantidad;
            while(cantidad<0 || cantidad>7){
                printf("Cuantas materias ahora (0-7): "); scanf("%d",&cantidad); 
            }
            e.cantidad_materias = cantidad;
            for (int m=0; m<e.cantidad_materias; ++m) {
                printf("Nombre materia #%d: ", m+1); fflush(stdin); gets(e.materias[m].nombre);
                for (int n=0; n<5; ++n){ 
					printf("  Nota %d: ", n+1); scanf("%f", &e.materias[m].notas[n]);
				}
            }
        }
        fwrite(&e, sizeof(struct Estudiante), 1, fsalida);
    }
    fclose(fentrada);
    fclose(fsalida);

    if (encontrado!=1) {
        remove("temp_estudiantes.bin");
        color(12); printf("Estudiante no encontrado.\n"); color(15);
        return;
    }

    remove("estudiantes.bin");
    rename("temp_estudiantes.bin", "estudiantes.bin");
    color(10); printf("Estudiante editado correctamente.\n"); color(15);
}
void eliminar_estudiante_admin() {
    char codigo[20];
    printf("Codigo del estudiante a eliminar: "); fflush(stdin); gets(codigo);

    FILE *fentrada = fopen("estudiantes.bin", "rb");
    if (!fentrada){ 
		color(12); printf("Archivo de estudiantes no existe.\n"); color(15); 
		return; 
	}
		
    FILE *fsalida = fopen("temp_estudiantes.bin", "wb");
    if (!fsalida){ 
		fclose(fentrada); 
		color(12); printf("Error creando archivo temporal.\n"); color(15); 
		return; 
	}

    struct Estudiante e;
    int encontrado = 0;
    while (fread(&e, sizeof(struct Estudiante), 1, fentrada)==1){
        if (strcmp(e.codigo, codigo)==0){ 
			encontrado=1; 
			continue; 
		}
        fwrite(&e, sizeof(struct Estudiante), 1, fsalida);
    }
    fclose(fentrada);
    fclose(fsalida);

    if(encontrado!=1){ 
		remove("temp_estudiantes.bin"); 
		color(12); printf("ERROR: Estudiante no encontrado.\n"); color(15); 
		return; 
	}

    remove("estudiantes.bin");
    rename("temp_estudiantes.bin", "estudiantes.bin");
    color(10); printf("Estudiante eliminado.\n"); color(15);
}

//Profesores Profesores Profesores Profesores Profesores Profesores Profesores Profesores Profesores Profesores Profesores 
void anadir_profesor() {
    struct Profesor p;
    color(6); printf("\n--- Datos de profesor ---\n"); 

    printf("Codigo profesor: "); fflush(stdin); gets(p.codigo);
    if(buscar_profesor_por_codigo(p.codigo, NULL)==1){
		color(12); printf("Ya existe un profesor con ese codigo.\n"); color(15); 
		return; 
	}
	printf("Nombre: "); fflush(stdin); gets(p.nombre);
    printf("Apellido: "); fflush(stdin); gets(p.apellido);
    printf("Sexo: "); fflush(stdin); gets(p.sexo);

    FILE *f = fopen("profesores.bin", "ab");
    if(!f){ 
		color(12); printf("Error abriendo archivo de profesores.\n"); color(15); return; 
	}
	
    fwrite(&p, sizeof(struct Profesor), 1, f);
    fclose(f);
    color(10); printf("Profesor agregado correctamente.\n"); color(15);
    getch();
}
void listar_profesores() {
    FILE *f = fopen("profesores.bin", "rb");
    if(!f){
		color(14); printf("No hay profesores registrados.\n"); color(15); 
		return;
	}
    struct Profesor p;
    int i=0;
    while (fread(&p, sizeof(struct Profesor), 1, f)==1) {
        color(6); printf("\n--- Profesor #%d ---\n", ++i);
        printf("Codigo : %s\n", p.codigo);
        printf("Codigo : %s\n", p.nombre);
        printf("Apellido: %s\n", p.apellido);
        printf("Sexo: %s\n", p.sexo);
    }
    fclose(f);
}
void editar_profesor_admin() {
    char codigo[20];
    printf("Codigo del profesor a editar: "); fflush(stdin); gets(codigo);

    FILE *fentrada = fopen("profesores.bin", "rb");
    if (!fentrada){ 
		color(12); printf("Archivo de profesores no existe.\n"); color(15); 
		return; 
	}
    FILE *fsalida = fopen("temp_profesores.bin", "wb");
    if (!fsalida){
		fclose(fentrada); 
		color(12); printf("Error creando archivo temporal.\n"); color(15); 
		return;
	}

    struct Profesor p;
    int encontrado=0;
    while (fread(&p, sizeof(struct Profesor), 1, fentrada)==1) {
        if (strcmp(p.codigo, codigo) == 0) {
            encontrado=1;
            printf("Nuevo nombre: "); fflush(stdin); gets(p.nombre);
            printf("Nuevo apellido: "); fflush(stdin); gets(p.apellido);
            printf("Nuevo sexo: "); fflush(stdin); gets(p.sexo);
        }
        fwrite(&p, sizeof(struct Profesor), 1, fsalida);
    }
    fclose(fentrada);
    fclose(fsalida);

    if (encontrado!=1){ 
		remove("temp_profesores.bin"); 
		color(12); printf("Profesor no encontrado.\n"); color(15);
		return; 
	}
	
    remove("profesores.bin");
    rename("temp_profesores.bin", "profesores.bin");
    color(10); printf("Profesor editado correctamente.\n"); color(15);
}
void eliminar_profesor_admin() {
    char codigo[20];
    printf("Codigo del profesor a eliminar: "); fflush(stdin); gets(codigo);

    FILE *fentrada = fopen("profesores.bin", "rb");
    if (!fentrada){ 
		color(12); printf("Archivo de profesores no existe.\n"); color(15); 
		return; 
	}
    FILE *fsalida = fopen("temp_profesores.bin", "wb");
    if (!fsalida){ 
		fclose(fentrada); 
		color(12); printf("Error creando archivo temporal.\n"); color(15); 
		return; 
		}

    struct Profesor p;
    int encontrado=0;
    while (fread(&p, sizeof(struct Profesor), 1, fentrada) == 1) {
        if (strcmp(p.codigo, codigo) == 0){ 
			encontrado=1; 
			continue; 
		}
        fwrite(&p, sizeof(struct Profesor), 1, fsalida);
    }
    fclose(fentrada);
    fclose(fsalida);

    if (encontrado!=1){ 
		remove("temp_profesores.bin"); 
		color(12); printf("Profesor no encontrado.\n"); color(15); 
		return; 
	}
    remove("profesores.bin");
    rename("temp_profesores.bin", "profesores.bin");
    color(10); printf("Profesor eliminado.\n"); color(15);
}
void profesor_modificar_notas() {
    char codigo_estudiantil[20];
    printf("Ingrese codigo del estudiante a modificar: "); fflush(stdin); gets(codigo_estudiantil);

    FILE *fentrada = fopen("estudiantes.bin", "rb");
    if (!fentrada){ 
		color(12); printf("Archivo de estudiantes no existe.\n"); color(15); 
		return; 
	}
    FILE *fsalida = fopen("temp_estudiantes.bin", "wb");
    if (!fsalida) { 
		fclose(fentrada); 
		color(12); printf("Error creando archivo temporal.\n"); color(15); 
		return; 
	}

    struct Estudiante e;
    int encontrado = 0;
    while (fread(&e, sizeof(struct Estudiante), 1, fentrada) == 1) {
        if (strcmp(e.codigo, codigo_estudiantil)==0) {
            encontrado = 1;
            if (e.cantidad_materias == 0) {
                color(14); printf("El estudiante no tiene materias.\n"); color(15);
            } else {
                color(11); printf("Materias del estudiante:\n"); color(15);
                for (int m=0; m<e.cantidad_materias; ++m) 
					printf("%d) %s\n", m+1, e.materias[m].nombre);
					
                int seleccion;
                printf("Seleccione materia (1-%d): ", e.cantidad_materias); scanf("%d", &seleccion); 
                if (seleccion<1 || seleccion>e.cantidad_materias){ 
					color(12); printf("Seleccion invalida.\n"); color(15);
				}
                else{
                    int idx = seleccion - 1;
                    for (int n=0; n<5; ++n) {
                        printf("Nueva nota %d: ", n+1); scanf("%f", &e.materias[idx].notas[n]);
                    }
                    color(10); printf("Notas actualizadas para materia %s.\n", e.materias[idx].nombre); color(15);
                }
            }
        }
        fwrite(&e, sizeof(struct Estudiante), 1, fsalida);
    }

    fclose(fentrada);
    fclose(fsalida);

    if (encontrado!=1){
        remove("temp_estudiantes.bin");
        color(12); printf("Estudiante no encontrado.\n"); color(15);
        return;
    }

    remove("estudiantes.bin");
    rename("temp_estudiantes.bin", "estudiantes.bin");
}

//Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus Menus  
void menu_estudiante() {
    char codigo[20];
    color(11); printf("\n--- Acceso Estudiante ---\n"); color(15);
    printf("Ingrese su codigo estudiantil: "); fflush(stdin); gets(codigo);
    struct Estudiante e;
    if (buscar_estudiante_por_codigo(codigo, &e)==0){
        color(12); printf("Estudiante no encontrado.\n"); color(15);
        return;
    }
    mostrar_estudiante(&e);
}
void menu_profesor(const struct Profesor *p) {
    int opcion;
    while(1){
        color(6); printf("\n--- Menu Profesor (%s %s) ---\n", p->nombre, p->apellido); 
        printf("1. Ver estudiante por codigo\n");
        printf("2. Modificar notas de estudiante\n");
        color(8); printf("3. Volver\n"); color(15);
        printf("Opcion: "); scanf("%d", &opcion);
        
        switch(opcion){
        	case 1:
	           char codigo[20];
	            printf("Codigo estudiante a ver: "); fflush(stdin); gets(codigo);
	            struct Estudiante e;
	            if (!buscar_estudiante_por_codigo(codigo, &e)){ 
					color(12); printf("ERROR: Estudiante no encontrado.\n"); color(15);
				}
	            else{
	            	mostrar_estudiante(&e);
				}
        		break;
        		
        	case 2: profesor_modificar_notas();	break;
        	case 3: return;
        	
        	default: 
				color(12); printf("ERROR: Opcion invalida.\n"); color(15); 
				break;
		}
    } 
}
void menu_administrador() {
    int opcion;
    while(1){
        color(13); printf("\n--- Menu Administrador ---\n"); color(15);
        printf("1. Anadir estudiante\n");
        printf("2. Editar estudiante\n");
        printf("3. Eliminar estudiante\n");
        printf("4. Listar estudiantes\n");
        printf("5. Anadir profesor\n");
        printf("6. Editar profesor\n");
        printf("7. Eliminar profesor\n");
        printf("8. Listar profesores\n");
        color(8); printf("9. Volver\n"); color(15);
        printf("Opcion: "); scanf("%d", &opcion);
        switch(opcion){
            case 1: anadir_estudiante(); break;
            case 2: editar_estudiante_admin(); break;
            case 3: eliminar_estudiante_admin(); break;
            case 4: listar_estudiantes(); break;
            case 5: anadir_profesor(); break;
            case 6: editar_profesor_admin(); break;
            case 7: eliminar_profesor_admin(); break;
            case 8: listar_profesores(); break;
            case 9: return;
            default: color(12); printf("ERROR: Opcion invalida.\n"); color(15);
        }
    } 
}


main(){
    while(1){
	    int tipo_usuario;
	    char codigo[20];
	    char contrasena[30];
	    
	    color(13); printf("\n=========== CONDOR UD ==========");
	    color(11); printf("\n----- LOGIN -----\n"); color(15);
	    printf("1. Estudiante\n");
	    printf("2. Profesor\n");
	    printf("3. Administrador\n");
	    color(8); printf("4. Salir\n"); color(15);
	    printf("Opcion: "); scanf("%d", &tipo_usuario);
	    
	    switch(tipo_usuario){
	        case 1: menu_estudiante(); break;
	        case 2:
                color(6); printf("\n--- Acceso Profesor ---\n"); color(15);
                printf("Codigo profesor: "); fflush(stdin); gets(codigo);
                struct Profesor p;
                if (buscar_profesor_por_codigo(codigo, &p)==0){
                    color(12); printf("ERROR: Profesor no encontrado.\n"); color(15); continue;
                }
                menu_profesor(&p);
				break;
	
	        case 3:
                color(13); printf("\n--- Acceso Administrador ---\n"); color(15);
                printf("Contrasena administrador: "); fflush(stdin); gets(contrasena);

                if (strcmp(contrasena, "condor123") != 0){
                	color(12); printf("ERROR: Contrasena incorrecta.\n"); color(15); continue;
                }
                menu_administrador();
				break; 
	
	        case 4:
	            color(8); printf("Saliendo");
	            for(int i=0; i<5; i++){
	            	Sleep(300);
	            	printf(" .");
				}
	            exit(0); //salir del programa entero
	            break;
	
	        default: color(12); printf("ERROR: Opcion invalida.\n"); color(15);
	    }
    }
}

