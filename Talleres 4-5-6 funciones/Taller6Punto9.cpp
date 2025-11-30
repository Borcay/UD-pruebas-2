//Santiago Hernandez Diaz 20252578001
//9. Diseñe un algoritmo que permita guardar en un arreglo las sumas de las filas de una matriz.
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
int tomar_dimensiones(const char *palabra){
	color(15);
	int dimension;
	printf("Ingrese el tamano de las %s: ",palabra);
	scanf("%d",&dimension);
	return dimension;
}
void ingresar_matriz(int filas, int columnas, int **m, int *v){
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" f  c\n");
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]: ",i+1,j+1);
			scanf("%d",&m[i][j]);
			
			v[i]+=m[i][j];	
		}
	}
	printf("\n");
}
void mostrar_matriz(int filas, int columnas, int **m, int *v){
	for(int i=0; i<filas; i++){
		color(15);
		printf("Fila #%d: ",i+1);
		for(int j=0; j<columnas; j++){
			color(11);
			if(j<columnas-1){
				printf("%d+",m[i][j]);
			}	else{
					printf("%d",m[i][j]);
				}
		}
		color(12);
		//El vector:
		printf(" = | %2d |", v[i]);
		printf("\n");
	}
	color(15);
}
main(){
	int filas=tomar_dimensiones("filas");
	int columnas=tomar_dimensiones("columnas");
	
	int v[filas];
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++)
		mA[i] = (int*) malloc(columnas * sizeof(int));
		
	for(int i=0; i<filas; i++)
		v[i]=0;
	
	ingresar_matriz(filas,columnas,mA,v);
	mostrar_matriz(filas,columnas,mA,v);
}
