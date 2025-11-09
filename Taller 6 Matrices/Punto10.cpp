//Santiago Hernandez Diaz 20252578001
/*
10. Diseñe un algoritmo que me ordene los elementos de una matriz.
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	int n_filas, n_columnas;
	
	color(15);
	printf("Ingrese el tamano de las filas de la matriz: ");
	scanf("%d",&n_filas);
	printf("Ingrese el tamano de las columnas de la matriz: ");
	scanf("%d",&n_columnas);
	
	int A[n_filas][n_columnas];
	int vordenador[n_filas*n_columnas];
	int k=0;
	
	//Ingresar matriz desordenada
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" f  c\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	//Poner datos en el vector ordenador
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			vordenador[k]=A[i][j];
			k++;
		}
	}
	
	//Ordenar el vector ordenador
	int aux;
	for(int i=0; i<(n_filas*n_columnas); i++){
		for(int j=0; j<(n_filas*n_columnas)-1; j++){ //Por razones misteriosas hay que poner -1
			if(vordenador[j]>vordenador[j+1]){
			aux=vordenador[j];
			vordenador[j]=vordenador[j+1];
			vordenador[j+1]=aux;
			}	
		}
	}
	
	//Mostrar matriz desordenada (original)
	color(12);
	printf("\nMatriz\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}

	//Rearmar y mostrarla matriz
	color(10);
	printf("\nMatriz reorganizada\n");
	k=0;
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			A[i][j]=vordenador[k];
			k++;
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	color(15);
}

