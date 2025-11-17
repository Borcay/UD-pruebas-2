//Archivos simples (probando todos los comandos)
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

//Funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	FILE *test;
	char codigo[30];
	int opcion;
	int cantidad_alumnos;
	
	label_opcion_erronea:
	color(15);
	printf("Seleccione la opcion que desea realizar: ");
	color(10);
	printf("\n1.Anadir alumno"); 
	color(6);
	printf("\n2.Modificar alumno");
	color(6);
	printf("\n3.Eliminar alumno ");
	color(6);
	printf("\n4.Buscar alumno");
	color(6);
	printf("\n5.Lista completa de alumnos");
	color(10);
	printf("\n6.Salir\n");
	color(15);
	scanf("%d",&opcion);
	
	
	switch(opcion){
		case 1: //Añadir
			test=fopen("Codigos.txt","a");
			printf("\nDigite el codigo a anadir: ");
			scanf("%s",&codigo);
			fprintf(test,codigo);
			fputs("\n",test);
			fclose(test);
			goto label_opcion_erronea;
		break;
		
		case 2: //Modificar
			test=fopen("Codigos.txt","w");
			fclose(test);
			
			color(14);
			printf("Esta opcion aun no ha sido programada...\n");
			goto label_opcion_erronea;
		break;
		
		case 3: //Eliminar
			color(14);
			printf("Esta opcion aun no ha sido programada...\n");
			goto label_opcion_erronea;
		break;
			
		case 4: //Buscar
			color(14);
			printf("Esta opcion aun no ha sido programada...\n");
			goto label_opcion_erronea;
		break;
			
		case 5: //Lista
			color(14);
			printf("Esta opcion aun no ha sido programada...\n");
			goto label_opcion_erronea;
		break;
		
		case 6: //Salir
			color(8);
			printf("\nSaliendo");
			for(int i=1; i<=3; i++){
				Sleep(200);
				printf(". ");
			}
			return 0;
		break;
			
		default:
			color(12);
			printf("\nERROR: Digite una opcion valida\n");
			goto label_opcion_erronea;
		break;
	}
}
