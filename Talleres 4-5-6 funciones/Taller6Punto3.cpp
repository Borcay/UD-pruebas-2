//Santiago Hernandez Diaz 20252578001
//3. Escribir un programa que me de el máximo y el mínimo número de una matriz introducido por el usuario por teclado. 
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
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&x);
	return x;
}
void ingresar_matriz(int filas, int columnas, int **mA){
	printf("\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Digite el dato A[%d][%d]: ", i,j);
			scanf("%d", &mA[i][j]);
		}
	}
}
void encontrar_maximo_minimo(int filas, int columnas, int **mA, int *minimo, int *maximo){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(mA[i][j]<(*minimo)){
				(*minimo)=mA[i][j];
			}
			if(mA[i][j]>(*maximo)){
				(*maximo)=mA[i][j];
			}
		}
	}
}
main(){
	color(15);
	int maximo, minimo;
	int filas=tomar_medidas("filas"); 
	int columnas=tomar_medidas("columnas"); 

	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++)
		mA[i] = (int*) malloc(columnas * sizeof(int));
		
	ingresar_matriz(filas, columnas, mA);
	//Encontrar minimo y maximo
	minimo=mA[0][0];
	maximo=mA[0][0];
	encontrar_maximo_minimo(filas, columnas, mA, &minimo, &maximo);

	color(12);
	printf("\nEl valor minimo de la matriz es: %d", minimo);
	color(10);
	printf("\nEl valor maximo de la matriz es: %d", maximo);
	color(15);
}
