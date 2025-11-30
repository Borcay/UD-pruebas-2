//Santiago Hernandez Diaz 20252578001
/*
7. Escriba un algoritmo que llene la diagonal principal de la matriz con los números 1,2,3,...N. La
diagonal principal de una matriz está formada por las casillas en las
cuales el índice de fila y de columna son iguales
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
	int dim;
	
	printf("Ingrese el tamano de la matriz cuadrada: ");
	scanf("%d",&dim);
	
	int A[dim][dim];
	
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			A[i][j]=0;
			
			//Diagonal principal
			if(i==j){ 
				A[i][j]=i+1;
			}
		}
	}
	
	for(int i=0; i<dim; i++){
		
		for(int j=0; j<dim; j++){
			
			color(12); //Rojo
			if(i==j){
				color(10); //Verde
			}
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	color(15);
}
