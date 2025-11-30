//Santiago Hernandez Diaz 20252578001
/*4. Implementar un programa que me pregunte la dimensión de una matriz y la opción a escoger: 
1) todos 1, 
2) todos 0,
3) todos las diagonales(principal y secundaria) 
y me imprima la matriz seleccionada */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void todas_uno(int filas){
	color(15);
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			printf("1 ");
		}
		printf("\n");
	}
}
void todas_cero(int filas){
	color(15);
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			printf("0 ");
		}
		printf("\n");
	}
}
void todas_diagonales(int filas){
	color(10);
	printf("Diagonal principal\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			color(15);
			if(i==j){
				color(10);
			}
			printf("a ");
		}
		printf("\n");
	}
	
	color(12);
	printf("Diagonal secundaria\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			color(15);
			if(i+j==filas-1){
				color(12);
			}
			printf("a ");
		}
		printf("\n");
	}
}
main(){
	color(15);
	int filas, opcion;
	
	printf("Ingrese la dimension de la matriz: ");
	scanf("%d",&filas);
	
	int A[filas][filas];
	
	while(1){
		color(3);
		printf("\nIngrese la opcion que desea visualizar");
		printf("\n1. Todos 1");
		printf("\n2. Todos 0");
		printf("\n3. Todas las diagonales (principal y secundaria)\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				todas_uno(filas);
			break;
			case 2:
				todas_cero(filas);
			break;
			case 3:
				todas_diagonales(filas);
			break;
			
			default:
				color(12);
				printf("La opcion ingresada no es valida, ingrese otra opcion");
			break;
		}
	}
	color(15);
}
