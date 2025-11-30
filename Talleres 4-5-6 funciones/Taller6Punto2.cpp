//Santiago Hernandez Diaz 20252578001
//2. Escribir un programa que haga el producto de dos matrices 3x3
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void ingresar_matriz(int m[3][3], char letra, int c){
	color(0);
	printf("Digite el dato de la matriz   ");
	color(c);
	printf("i  j\n");
	
	color(c);
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Digite el dato de la matriz %c[%d][%d]: ", letra, i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("\n");
}
void mostrar_matriz(int m[3][3], int c){
	color(c);
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
void multiplicar_matriz(int mA[3][3], int mB[3][3], int mC[3][3]){
	printf("\n");
	int temp[3]; //Vector para almacenar los resultados de fila * columna
	for(int i=0; i<3; i++){
		for(int k=0; k<3; k++){
			mC[i][k]=0; //"Inicializando" la matriz para luego poder sumar en esa posicion
			//Ciclo para cada fila * columna
			for(int j=0; j<3; j++){
				temp[j]=mA[i][j]*mB[j][k];
			}
			for(int m=0; m<3; m++){
				mC[i][k]=mC[i][k]+temp[m];
			}	
		}
	}
}
main(){
	int mA[3][3];
	int mB[3][3];
	int mC[3][3]; //Resultado de A*B
	
	ingresar_matriz(mA,'A',11);
	ingresar_matriz(mB,'B',12);
	mostrar_matriz(mA,11);
	mostrar_matriz(mB,12);
	multiplicar_matriz(mA,mB,mC);
	
	//Mostrar la matriz producto
	color(13);
	printf("Matriz producto de las matrices A y B:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%3d ",mC[i][j]);
		}
		printf("\n");
	}
	color(15);
}
