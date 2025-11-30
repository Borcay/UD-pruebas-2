//Santiago Hernandez Diaz 20252578001
/*7. Escriba un algoritmo que llene la diagonal principal de la matriz con los números 1,2,3,...N. La
diagonal principal de una matriz está formada por las casillas en las
cuales el índice de fila y de columna son iguales */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
int obtener_dimension(){
	color(15);
	int dim;
	printf("Ingrese el tamano de la matriz cuadrada: ");
	scanf("%d",&dim);
	return dim;
}
void numerar_diagonal(int **m, int dim){
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			m[i][j]=0;
			//Diagonal principal
			if(i==j){ 
				m[i][j]=i+1;
			}
		}
	}
}
void colorear_diagonal(int **m, int dim){
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			color(12);
			if(i==j){
				color(10); 
			}
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	color(15);
}
main(){
	int dim=obtener_dimension();
	
	int **mA = (int**) malloc(dim * sizeof(int*));
	for(int i=0; i<dim; i++)
		mA[i] = (int*) malloc(dim * sizeof(int));
		
	numerar_diagonal(mA,dim);
	colorear_diagonal(mA,dim);
}
