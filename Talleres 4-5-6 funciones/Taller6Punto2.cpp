//Santiago Hernandez Diaz 20252578001
/*
2. Escribir un programa que haga el producto de dos matrices 3x3
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	int dim = 3; //dimension
	int i=0;
	int j=0;
	int k=0;
	
	int A[dim][dim];
	int B[dim][dim];
	int C[dim][dim]; //Resultado de A*B
	
	//Ingresar matriz A
	color(11);
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			printf("Digite el dato de la matriz A[%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	//Ingresar matriz B
	printf("\n");
	color(12);
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			printf("Digite el dato de la matriz B[%d][%d]: ", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	//Mostrar A Y B
	color(11);
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	color(12);
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	int temp[dim]; //Vector para almacenar los resultados de fila * columna
	//Multiplicarla
	for(int i=0; i<dim; i++){
		for(int k=0; k<dim; k++){
			C[i][k]=0; //"Inicializando" la matriz para luego poder sumar en esa posicion
			
			//Ciclo para cada fila * columna
			for(int j=0; j<dim; j++){
				temp[j]=A[i][j]*B[j][k];
			}
			
			for(int m=0; m<dim; m++){
				C[i][k]=C[i][k]+temp[m];
			}	
		}
	}
	color(13);
	
	//Mostrar la matriz producto
	printf("Matriz producto de las matrices A y B:\n");
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			printf("%3d ",C[i][j]);
		}
		printf("\n");
	}
	
	color(15);
}
