//Llenar Matriz
//Mostrar elementos diagonal principal
//Mostrar elementos diagonal secundaria
//Mostrar elementos que estan por encima de la diagonal principal
//Mostrar elementos que estan por debajo de la diagonal principal
//Mostrar elementos de la matriz
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


main(){
	int i,j;
	int M[3][3]; //Filas | Columnas
	int traza[3];
	int trazado=0;
	
//Llenar matriz
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			color(i+2);
			printf("Fila %d, Columna %d: ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
	
//Diagonal principal
	color(11);
	printf("\nDiagonal principal: ");
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			if(i == j){
				printf("%d ",M[i][j]);
				traza[i]=M[i][j];
			}
		}
	}
	
	printf("\n");
	for(int i=0; i<=2; i++){
		trazado=trazado+traza[i];
	}
	printf("Traza: %d", trazado );
	
//Diagonal secundaria
	color(12);
	printf("\nDiagonal secundaria: ");
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			if(i+j == 2){
				printf("%d ",M[i][j]);
			}
		}
	}

//Encima de la diagonal principal
	color(14);
	printf("\nEncima de la diagonal principal: ");
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			if(i<j){
				printf("%d ",M[i][j]);
			}
		}
	}
//Debajo de la diagonal principal
	color(13);
	printf("\nDebajo de la diagonal principal: ");
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			if(i>j){
				printf("%d ",M[i][j]);
			}
		}
	}

//Mostrar matriz
	color(15);
	printf("\n\nMatriz: ");
	printf("\n");
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			color(i+2);
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	
//Matriz colorida
	color(15);	
	printf("\nMatriz con colores: ");
	printf("\n");
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			if(i == j){ //Diag. principal
				color(11);
				printf("%d ",M[i][j]);
			}
			
			if(i<j){ //Encima
				color(14);
				printf("%d ",M[i][j]);
			}
			
			if(i>j){ //Debajo
				color(13);
				printf("%d ",M[i][j]);
			}
			
		}
		printf("\n");
	}
	
	color(15);
}
