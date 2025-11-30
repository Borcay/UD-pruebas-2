//Santiago Hernandez Diaz 20252578001
/*
1. Escribir un programa que lea dos matrices de enteros 
y calcule la suma de los elementos correspondientes, Cij = Aij + Bij
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
	
	printf("Ingrese el tamano de las filas de las matrices: ");
	scanf("%d",&n_filas);
	
	printf("Ingrese el tamano de las columnas de las matrices: ");
	scanf("%d",&n_columnas);
	
	int A[n_filas][n_columnas];
	int B[n_filas][n_columnas];
	int C[n_filas][n_columnas]; //Suma de matrices A y B
	
	//Matriz A
	printf("\n");
	color(11);
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Digite el dato A[%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	//Matriz B
	printf("\n");
	color(12);
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Digite el dato B[%d][%d]: ", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	//Matriz A + B = C
	printf("\n");
	color(13);
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	
	printf("Matriz C (Resultado de A+B) \n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("%2d ", C[i][j]);
		}
		printf("\n");
	}
	
	color(15);
}
