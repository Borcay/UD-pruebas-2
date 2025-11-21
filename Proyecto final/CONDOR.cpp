#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
//Proyecto final

//Funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

struct Materia{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
	float promedio_notas_materia;
};

struct Alumno{
	char codigo[30];
	char nombre [30];
	char apellido[30];
	char sexo[30];
	char carrera[30];
	char semestre[30];
	char facultad[30];
	struct Materia materia;
};

struct Profesor{
	char codigo_profesor[30];
	char nombre_profesor[30];
	char apellido_profesor[30];
	char sexo_profesor[30];
	char facultad_profesor[30];
};

main(){
	FILE *archivos;
	FILE *archivos_profesor;
	archivos_profesor=fopen("profesores_datos.bin","wb");
	archivos=fopen("alumnos_datos.bin","wb");
	int tipo_de_usuario;
	int clave_administrador=12345;
	int clave_administrador_ingresada;
	
	while(1){
		color(15);
		printf("-----------Proyecto final CONDOR v0.00.0-----------");
		printf("\nEntrar a CONDOR como: ");
		printf("\n1.Estudiante");
		printf("\n2.Profesor");
		printf("\n3.Administrador");
		printf("\n4.Salir\n");
		scanf("%d",&tipo_de_usuario);
		
		switch(tipo_de_usuario){
			case 1:
				printf("Digite su codigo estudiantil: ");
				printf("\n");
			break;
			
			case 2:
				printf("Digite su codigo de profesor: ");
				printf("\n");
			break;
			
			case 3:
				printf("Digite la clave de administrador: ");
				scanf("%d",&clave_administrador_ingresada);
				if(clave_administrador_ingresada==clave_administrador){
					color(10);
					printf("Clave correcta :D\n");
				} else{
					color(12);
					printf("CLAVE INCORRECTA\n");
				}
			break;
			
			case 4:
				color(8);
				printf("Saliendo del programa");
				for(int i=0; i<3; i++){
					Sleep(200);
					printf(" .");
				}
				return 0;
			break;
			
			default:
				color(12);
				printf("ERROR: La opcion seleccionada NO es valida.\n");
			break;
		}
	}
	

}
