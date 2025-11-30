//Santiago Hernandez Diaz 20252578001
/*
6. Escriba un algoritmo que ponga cero 
en la primera y la última fila, 
y en la primera y la última columna de la matriz. 
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
	int n_filas, n_columnas;
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&n_filas);
	
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&n_columnas);
	
	int A[n_filas][n_columnas];
	
//Llenar la matriz de 1's
	color(12);
	printf("\nMatriz %d*%d:\n",n_filas,n_columnas);
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("1 ");
			A[i][j]=1;
		}
		printf("\n");
	}
	
//0's
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			if(i==0 || i==n_filas-1 || j==0 || j==n_columnas-1){
				A[i][j]=0;
			}
		}
	}
	
	color(10);
	printf("\nMatriz modificada:\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	color(15);
}
