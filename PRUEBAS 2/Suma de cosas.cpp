//Llenar Matriz
//Mostrar elementos diagonal principal
//Mostrar elementos diagonal secundaria
//Mostrar elementos que estan por encima de la diagonal principal
//Mostrar elementos que estan por debajo de la diagonal principal
//Mostrar elementos de la matriz
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


main(){
	int i,j,n;
	printf("Ingrese el tamano de filas y columnas de la matriz: ");
	scanf("%d",&n);
	int M[n][n]; //Filas | Columnas
	int traza[n];
	int vertical[n];
	int horizontal[n];
	int suma_vertical=0;
	int suma_horizontal=0;
	int trazado=0;
	
//Llenar matriz
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			color(i+2);
			printf("Fila %d, Columna %d: ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
	
//Vector "vertical"
	color(13);
	for(int i=0; i<n; i++){
		suma_vertical=0;
		for(int j=0; j<n; j++){
				suma_vertical=suma_vertical+M[i][j];
		}
		vertical[i]=suma_vertical;
	}

	
//Vector "horizontal"
	for(int i=0; i<n; i++){
		suma_horizontal=0;
		for(int j=0; j<n; j++){
				suma_horizontal=suma_horizontal+M[j][i];
		}
		horizontal[i]=suma_horizontal;
	}
	
//Diagonal principal
	color(11);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j){
				traza[i]=M[i][j];
			}
		}
	}
	
	for(int i=0; i<n; i++){
		trazado=trazado+traza[i];
	}
	
//Mostrar matriz
	color(15);
	printf("\nMatriz: ");
	printf("\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			color(i+2);
			printf("%d  ",M[i][j]);
		}
		color(14);
		printf("%d", vertical[i]);
		printf("\n");
	}
	color(11);
	for(int i=0; i<n; i++){
		printf("%d ",horizontal[i]);
	}
	color(12);
	printf("%d", trazado);
	
	color(15);
}
