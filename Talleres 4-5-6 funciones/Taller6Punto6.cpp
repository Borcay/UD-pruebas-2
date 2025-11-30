//Santiago Hernandez Diaz 20252578001
/*6. Escriba un algoritmo que ponga cero 
en la primera y la última fila, 
y en la primera y la última columna de la matriz. */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void llenar_de_unos(int filas, int columnas, int **m){
	color(12);
	printf("\nMatriz %d*%d:\n",filas,columnas);
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("1 ");
			m[i][j]=1;
		}
		printf("\n");
	}
}
void poner_ceros(int filas, int columnas, int **m){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(i==0 || i==filas-1 || j==0 || j==columnas-1){
				m[i][j]=0;
			}
		}
	}
}
void mostrar_matriz_modificada(int filas, int columnas, int **m){
	color(10);
	printf("\nMatriz modificada:\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	color(15);
}
main(){
	color(15);
	int filas, columnas;
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&filas);
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&columnas);
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++){
		mA[i] = (int*) malloc(columnas * sizeof(int));
	}
	
	llenar_de_unos(filas,columnas,mA);
	poner_ceros(filas,columnas,mA);
	mostrar_matriz_modificada(filas,columnas,mA);
}
