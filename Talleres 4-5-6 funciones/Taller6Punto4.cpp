//Santiago Hernandez Diaz 20252578001
/*
4. Implementar un programa que me pregunte la dimensión de una matriz y la opción a escoger: 

1) todos 1, 
2) todos 0,
3) todos las diagonales(principal y secundaria) 

y me imprima la matriz seleccionada 
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	color(15);
	int n_filas, opcion;
	
	printf("Ingrese la dimension de la matriz: ");
	scanf("%d",&n_filas);
	
	int A[n_filas][n_filas];
	
	label_volver:
	color(3);
	printf("\nIngrese la opcion que desea visualizar\n");
	printf("\n1. Todos 1");
	printf("\n2. Todos 0");
	printf("\n3. Todas las diagonales (principal y secundaria)\n");
	
	scanf("%d",&opcion);

	switch(opcion){
		case 1:
			color(15);
			for(int i=0; i<n_filas; i++){
				for(int j=0; j<n_filas; j++){
					printf("1 ");
				}
				printf("\n");
			}
			goto label_volver;
		break;

		case 2:
			color(15);
			for(int i=0; i<n_filas; i++){
				for(int j=0; j<n_filas; j++){
					printf("0 ");
				}
				printf("\n");
			}
			goto label_volver;
		break;
		
		case 3:
			//Diagonal principal
			color(10);
			printf("Diagonal principal\n");
			for(int i=0; i<n_filas; i++){
				for(int j=0; j<n_filas; j++){
					color(15);
					if(i==j){
						color(10);
					}
					printf("a ");
				}
				printf("\n");
			}
			
			//Diagonal secundaria
			color(12);
			printf("Diagonal secundaria\n");
			for(int i=0; i<n_filas; i++){
				for(int j=0; j<n_filas; j++){
					color(15);
					if(i+j==n_filas-1){
						color(12);
					}
					printf("a ");
				}
				printf("\n");
			}
			goto label_volver;
		break;
		
		default:
			color(12);
			printf("La opcion ingresada no es valida, ingrese otra opcion");
			goto label_volver;
		break;
	}
	
	
	color(15);
}
