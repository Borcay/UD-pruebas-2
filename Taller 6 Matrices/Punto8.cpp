//Santiago Hernandez Diaz 20252578001
/*
8. Escriba un algoritmo que llene 
todas las filas pares con los números 1,2,3,...N, 
y las filas impares con los números N, N-1, N-2,...1

*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	color(15);
	int n_filas, n_columnas;
	
	printf("Ingrese el tamano de las filas: ");
	scanf("%d",&n_filas);
	printf("Ingrese el tamano de las columnas: ");
	scanf("%d",&n_columnas);
	int A[n_filas][n_columnas];
	
	color(11);
	printf("\nFilas pares: 1,2,3...N");
	color(12);
	printf("\nFilas impares: N,N-1,N-2...1");
	
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			
			if((i+1)%2==0){ //par
				A[i][j]=j+1;
			} else{ //impar
					A[i][j]=n_filas-j;
				}
		}
	}
	
	printf("\n\n");
	for(int i=0; i<n_filas; i++){
		color(15);
		printf("Fila %d: ",i+1);
		for(int j=0; j<n_columnas; j++){
			if((i+1)%2==0){
				color(11);
			} else{
					color(12);
				}
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
