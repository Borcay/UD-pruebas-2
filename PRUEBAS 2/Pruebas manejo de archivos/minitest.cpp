#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <errno.h>

void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	FILE *lista_estudiantes;
	FILE *copia;
	
	color(15);
	printf("------------------CONDOR v1.95.6------------------\n");
	
	while(1){
		color(15);
		int opcion;
		//1.Anadir
		char codigo[30];
		//2.Modificar
		char modificado[30];
		char linea[100];
		//4.Buscar
		char buscar[30];
		char buscar_comparar[30];
		int buscar_encontrado=1;
		int encontrado=0;
		//Varios
		int scan_result, linea_a_borrar, eliminacion_exitosa;
		char ch;
		int i=1;
		
		
		printf("Digite la opcion deseada ");
		printf("\n1.Anadir");
		printf("\n2.Modificar");
		printf("\n3.Eliminar");
		printf("\n4.Buscar");
		printf("\n5.Ver lista");
		printf("\n6.Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:{//Anadir
				color(3);
				lista_estudiantes = fopen("lista_codigos.txt", "a+"); //abrir en lectura y escritura añadible
				printf("Digite el codigo a anadir: ");
				scanf("%s",&codigo);
				
				rewind(lista_estudiantes); //ir al inicio para ver si esta vacio
				int primer_elemento;
				primer_elemento=fgetc(lista_estudiantes);
				
				if(primer_elemento!=EOF){ //no vacio
					fseek(lista_estudiantes, 0, SEEK_END); // volver al final para añadir al final
					fputs("\n",lista_estudiantes);
					fprintf(lista_estudiantes,codigo);
				} else{ //vacio, por lo que no hay salto de linea al inicio
					fprintf(lista_estudiantes,codigo);
				}
				fclose(lista_estudiantes);
			}
			break;
			
			case 2: // Modificar
			    color(14);
			
			    lista_estudiantes = fopen("lista_codigos.txt", "r");
			    copia = fopen("copia.txt", "w");
			
			    printf("\nDigite la linea del estudiante que desea modificar: ");
			    scanf("%d", &linea_a_borrar);
			    i=1;
			    while(fgets(linea, sizeof(linea), lista_estudiantes)){  // copiar línea completa
			        if (i == linea_a_borrar) {
			            printf("Digite el nuevo codigo: ");
			            scanf("%s", modificado);
			            fprintf(copia, "%s\n", modificado);   
			        } else {
			            fputs(linea, copia);                
			        }
			        i++;
			    }
			
			    fclose(lista_estudiantes);
			    fclose(copia);
			
			    remove("lista_codigos.txt");
			    rename("copia.txt", "lista_codigos.txt");
			
			    printf("Modificacion exitosa\n");
			break;

			
			case 3: //Eliminar
				color(12);
				lista_estudiantes = fopen("lista_codigos.txt", "r");
				copia = fopen("copia.txt", "w");
				printf("\nDigite el estudiante que desea eliminar: ");
				scanf("%d",&linea_a_borrar);
				
				//Clonar el documento EXCEPTO la linea a borrar
				rewind(lista_estudiantes); 
				i=1;
				while(1){
					ch = getc(lista_estudiantes);
					if(ch==EOF){
						break;
					}
					if(i!=linea_a_borrar){
						fputc(ch,copia);
					}
					if(ch =='\n'){
						i++;
					}
				}
				fclose(copia); //guardar cambios
				fclose(lista_estudiantes); //guardar cambios
				
				eliminacion_exitosa=remove("lista_codigos.txt");
				if(eliminacion_exitosa==0){
					printf("Eliminacion exitosa\n");
				} else{
					printf("ERROR:No se pudo eliminar el archivo (si cerraste todo bien no deberias ver esto)\n");
				}
				
				rename("copia.txt","lista_codigos.txt"); //copia -> lista_codigos
			break;
			
			case 4: //Buscar
				color(6);
				lista_estudiantes=fopen("lista_codigos.txt","r");
				rewind(lista_estudiantes);
				printf("Digite el codigo que desea buscar: ");
				scanf("%s",&buscar);
				while(1){
					scan_result = fscanf(lista_estudiantes,"%s",&buscar_comparar);
					buscar_encontrado=strcmp(buscar,buscar_comparar); // 0 si ==
					
					if(buscar_encontrado==0){
						printf("\nEl estudiante ha sido encontrado\n");
						encontrado=1;
						fclose(lista_estudiantes);
						break;
					} 
					
					//ver si ya se acabó la lista en caso de no haber encontrado al estudiante
					if(scan_result==EOF){ 
						if(encontrado==0){
							printf("\nEl estudiante NO ha sido encontrado\n");
						}
						fclose(lista_estudiantes);
						break;
					}
				}
			break;
			
			case 5: //Ver lista
				color(11);
				lista_estudiantes = fopen("lista_codigos.txt", "r");
				printf("LISTA DE ESTUDIANTES\n");
				while(1){
					scan_result = fscanf(lista_estudiantes, "%s", &codigo);
					if(scan_result==EOF){ //EOF = End Of File
						break;
					}
					printf("Linea %d: %s\n", i, codigo);
					i++;
				}
				fclose(lista_estudiantes);
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

