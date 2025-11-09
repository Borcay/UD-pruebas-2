//Santiago Hernandez Diaz 20252578001
/*
3. Escribir un programa que me de el máximo y el mínimo número de una matriz introducido por el usuario por teclado. 
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
	int maximo;
	int minimo;
	
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&n_filas);
	
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&n_columnas);
	
	int A[n_filas][n_columnas];
	
	//Matriz A
	printf("\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Digite el dato A[%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	//Encontrar minimo y maximo
	minimo=A[0][0];
	maximo=A[0][0];
	
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			if(A[i][j]<minimo){
				minimo=A[i][j];
			}
			if(A[i][j]>maximo){
				maximo=A[i][j];
			}
		}
	}
	color(12);
	printf("\nEl valor minimo de la matriz es: %d", minimo);
	color(10);
	printf("\nEl valor maximo de la matriz es: %d", maximo);
	
	color(15);
}
