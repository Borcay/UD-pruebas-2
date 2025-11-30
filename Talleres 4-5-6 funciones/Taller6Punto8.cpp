//Santiago Hernandez Diaz 20252578001
/*8. Escriba un algoritmo que llene 
todas las filas pares con los números 1,2,3,...N, 
y las filas impares con los números N, N-1, N-2,...1 */
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
void mostrar_filas(int filas, int columnas, int **m){
	color(11);
	printf("Filas pares: 1,2,3...N\n");
	color(12);
	printf("Filas impares: N,N-1,N-2...1\n\n");
	for(int i=0; i<filas; i++){
		color(15);
		printf("Fila %d: ",i+1);
		for(int j=0; j<columnas; j++){
			if((i+1)%2==0){
				color(11);
			} else{
				color(12);
			}
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	color(15);
}
void poner_numeros(int filas, int columnas, int **m){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if((i+1)%2==0){ //par
				m[i][j]=j+1;
			} else{ //impar
					m[i][j]=filas-j;
				}
		}
	}
}
main(){ 
	int filas=tomar_dimensiones("filas");
	int columnas=tomar_dimensiones("columnas");
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++)
		mA[i] = (int*) malloc(columnas * sizeof(int));
	
	poner_numeros(filas,columnas,mA);
	mostrar_filas(filas,columnas,mA);
}
