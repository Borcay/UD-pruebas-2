#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	FILE *sumas;
	FILE *temp;
	
	color(11);
	
	while(1){
		color(15);
		sumas = fopen("sumas.txt", "r");
		temp = fopen("temp.txt", "w+");
		
		int b, c, opcion, scan_result, linea_a_borrar;
		int i=1;
		char a[2];
		
		printf("Digite la opcion deseada ");
		printf("\n1.Anadir");
		printf("\n2.Modificar");
		printf("\n3.Eliminar");
		printf("\n4.Buscar");
		printf("\n5.Ver lista");
		printf("\n6.Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1: //Anadir
				color(6);
				printf("WIP anadir");
				printf("\n");
			break;
			
			case 2: //Modificar
				color(6);
				printf("WIP modificar");
				printf("\n");
			break;
			
			case 3: //Eliminar
				printf("\nDigite la linea que desea borrar: ");
				scanf("%d",&linea_a_borrar);
				rewind(sumas); //volver al inicio 
				//Clonar el documento filename a temp EXCEPTO la linea a borrar
				i=1;
				char ch;
				while(1){
					ch = getc(sumas);
					if(ch==EOF){
						break;
					}
					if(i!=linea_a_borrar){
						putc(ch,temp);
					}
					if(ch =='\n'){
						i++;
					}
				}
				fclose(temp); //guardar cambios
				fclose(sumas); //guardar cambios
				remove("sumas.txt");
				rename("temp.txt","sumas.txt"); //temp -> sumas
			break;
			
			case 4: //Buscar
				color(6);
				printf("WIP buscar");
				printf("\n");
			break;
			
			case 5: //Ver lista
				while(1){
					scan_result = fscanf(sumas, "%s + %d = %d", &a, &b, &c);
					if(scan_result==EOF){ //EOF = End Of File
						break;
					}
					printf("Linea %d: %s + %d = %d\n", i, a, b, c);
					i++;
				}
				printf("\n");
			break;
			
			case 6: //Salir
				color(8);
				printf("\nSaliendo");
				for(int s=0; s<3; s++){
					Sleep(500);
					printf(" .");
				}
				return 0;
			break;
			
			default:
				color(12);
				printf("ERROR: Digite una opcion valida\n");
			break;
		}
	
	}
	return 0;
}

