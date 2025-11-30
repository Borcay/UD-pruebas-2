//Santiago Hernandez Diaz 20252578001
//10. Diseñe un algoritmo que me ordene los elementos de una matriz.
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void ingresar_matriz_desordenada(int filas, int columnas, int **m){
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" f  c\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
}
void poner_datos_en_vector(int filas, int columnas, int **m, int *v_ordenador){
	int k=0;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			v_ordenador[k]=m[i][j];
			k++;
		}
	}
}
void ordenar_vector(int filas, int columnas, int *v_ordenador){
	int aux;
	for(int i=0; i<(filas*columnas); i++){
		for(int j=0; j<(filas*columnas)-1; j++){ 
			if(v_ordenador[j]>v_ordenador[j+1]){
			aux=v_ordenador[j];
			v_ordenador[j]=v_ordenador[j+1];
			v_ordenador[j+1]=aux;
			}	
		}
	}
}
void mostrar_matriz_desordenada(int filas, int columnas, int **m){
	color(12);
	printf("\nMatriz\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
void matriz_reorganizada(int filas, int columnas, int **m, int *v_ordenador){
	color(10);
	printf("\nMatriz reorganizada\n");
	int k=0;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			m[i][j]=v_ordenador[k];
			k++;
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	color(15);
}
main(){
	int filas, columnas;
	color(15);
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&filas);
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&columnas);
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++)
		mA[i] = (int*) malloc(columnas * sizeof(int));
		
	int v_ordenador[filas*columnas];
	
	ingresar_matriz_desordenada(filas,columnas,mA);
	poner_datos_en_vector(filas,columnas,mA,v_ordenador);
	ordenar_vector(filas,columnas,v_ordenador);
	mostrar_matriz_desordenada(filas,columnas,mA);
	matriz_reorganizada(filas,columnas,mA,v_ordenador);
}

