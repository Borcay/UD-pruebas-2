//Santiago Hernandez Diaz 20252578001
/* 1. Escribir un programa que lea dos matrices de enteros 
y calcule la suma de los elementos correspondientes, Cij = Aij + Bij */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
int tomar_medidas(const char* palabra){
	int x;
	printf("Ingrese el tamano de las %s de las matrices: ", palabra);
	scanf("%d", &x);
	return x;
}
void ingresar_matriz(int filas, int columnas, int **m, char letra, int c){
	printf("\n");
	color(c);
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Digite el dato %c[%d][%d]: ", letra, i, j);
			scanf("%d", &m[i][j]);
		}
	}
}
void sumar_matrices(int filas, int columnas, int **mA, int **mB, int **mC, int c){
	printf("\n");
	color(c);
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			mC[i][j] = mA[i][j] + mB[i][j];
		}
	}
}
main(){
	color(15);
	int filas=tomar_medidas("filas"); 
	int columnas=tomar_medidas("columnas");
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	int **mB = (int**) malloc(filas * sizeof(int*));
	int **mC = (int**) malloc(filas * sizeof(int*));

	for(int i=0; i<filas; i++){
		mA[i] = (int*) malloc(columnas * sizeof(int));
		mB[i] = (int*) malloc(columnas * sizeof(int));
		mC[i] = (int*) malloc(columnas * sizeof(int));
	}

	ingresar_matriz(filas, columnas, mA, 'A', 11);
	ingresar_matriz(filas, columnas, mB, 'B', 12);
	sumar_matrices(filas, columnas, mA, mB, mC, 13);

	printf("Matriz C (Resultado de A+B)\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("%2d ", mC[i][j]);
		}
		printf("\n");
	}
	color(15);
}

