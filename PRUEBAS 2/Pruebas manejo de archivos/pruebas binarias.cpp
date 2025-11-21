#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

struct persona{
    int edad;
    float altura;
    char sexo[10];
};

void anadir_persona(FILE *f, struct persona *p){
	f=fopen("personas.bin","ab");
	fwrite(p, sizeof(struct persona),1,f);
	fclose(f);
}

int main() {
    FILE *f;
    int eleccion; //Del menu
    struct persona p;
    
    int cantidad_personas;
    
    struct persona leer[10];
    	
    //Menu
	while(1){
		color(15);
		printf("------------- Archivos binarios CRUD test v1.74.1 -------------\n");
		printf("\n1.Anadir persona");
		printf("\n2.Editar persona");
		printf("\n3.Eliminar persona");
		printf("\n4.Ver lista de personas");
		printf("\n5.Salir");
		printf("\nDigite la opcion deseada: ");
		scanf("%d",&eleccion);
		
		switch(eleccion){
			case 1:
		    	printf("Digite la edad de la persona: ");
		    	scanf("%d",&p.edad);
		    	printf("Digite la altura de la persona: ");
		    	scanf("%f",&p.altura);
		    	printf("Digite el sexo de la persona : ");
		    	scanf("%s",&p.sexo);
				anadir_persona(f,&p);
			break;
			
			case 2:
			break;
			
			case 3:
			break;
			
			case 4:
				//Pasar de archivo a la estructura
			
			    f = fopen("personas.bin", "rb");
				
				for(int i=0; i<10; i++){
					fseek(f,i*sizeof(persona),SEEK_SET); //Buscar posicion i en archivo
				    fread(&leer[i], sizeof(persona), 1, f); //Poner posicion i del archivo en posicion i del arreglo (persona #i)
				}
				fclose(f);
				
				//Ver todas las personas (sacadas del archivo)
				for(int i=0; i<10; i++){
					color(i+1);
					printf("Persona #%d\n",i+1);
			        printf("Edad leida: %d\n", leer[i].edad);
				    printf("Altura leida: %.2f\n", leer[i].altura);
				    printf("Sexo leido: %s", leer[i].sexo);
				    printf("\n");
				}
			break;
			
			case 5:
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
				printf("ERROR: Eleccion no valida.\n");
			break;
		}
	}   
	
	/*
    
	//Ingresar datos de todas las personas
    for(int i=0; i<cantidad_personas; i++){
    	color(i+10);
    	printf("Digite la edad de la persona %d: ",i+1);
    	scanf("%d",&p[i].edad);
    	printf("Digite la altura de la persona %d: ",i+1);
    	scanf("%f",&p[i].altura);
    	printf("Digite el sexo de la persona %d: ",i+1);
    	scanf("%s",&p[i].sexo);
	}	
	
	//Escribir en el archivo
    f = fopen("personas.bin", "wb");
    
	for(int i=0; i<cantidad_personas; i++)
    fwrite(&p[i], sizeof(persona), 1, f); 
    
    fclose(f);
	
	*/

	color(15);
    return 0;
}

