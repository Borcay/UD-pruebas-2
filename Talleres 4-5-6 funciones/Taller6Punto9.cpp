//Santiago Hernandez Diaz 20252578001
/*
9. Diseñe un algoritmo que permita guardar en un arreglo las sumas de las filas de una matriz.
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	int n_filas;
	int n_columnas;
	
	color(15);
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&n_filas);
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&n_columnas);
	
	int A[n_filas][n_columnas];
	int v[n_filas];
	
	//Inicializar el vector con 0's para luego poder sumarle
	for(int i=0; i<n_filas; i++){
		v[i]=0;
	}
	
	//Ingresar la matriz
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" f  c\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
			
			//Suman en el arreglo
			v[i]=v[i]+A[i][j];	
		}
	}
	//Mostrar matriz
	printf("\n");
	for(int i=0; i<n_filas; i++){
		color(15);
		printf("Fila #%d: ",i+1);
		for(int j=0; j<n_columnas; j++){
			color(11);
			
			if(j<n_columnas-1){
				printf("%d+",A[i][j]);
			}	else{
					printf("%d",A[i][j]);
				}
			
		}
		color(12);
		
		//El arreglo:
		printf(" = | %2d |", v[i]);
		printf("\n");
	}
	
	color(15);
}
