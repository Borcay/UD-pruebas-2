//Santiago Hernandez Diaz 20252578001
/* 11. Diseñe un algoritmo que multiplique una matriz con un vector. 
Se debe saber las reglas para realizarlo.*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void mostrar_matriz_vector(int filas, int columnas, int **mA, int *v){
	int sobra;
	printf("\n");
	color(11);
	printf(" Matriz");
	color(13);
	printf(" * ");
	color(12);
	printf("Vector\n");
	
	for(int i=0; i<filas; i++){
		//matriz
		color(11);
		printf("|");
		for(int j=0; j<columnas; j++){
			printf(" %d ",mA[i][j]);
		}
		printf("|");	

		//vector
		color(12);
		printf(" | %d |",v[i]);
		printf("\n");
		sobra=i+1;
	}
	//Filas sobrantes del vector
	if(columnas>filas){
		while(sobra<columnas){
			char espacio[] = " a ";
			printf(" "); //1 espacio
			for(int x=0; x<columnas; x++){
				color(0);
				printf("%s",espacio);
			}
			color(12);
			printf("  | %d |\n",v[sobra]); //2 espacios al inicio
			sobra++;
		} 	
	}
}
void multiplicacion(int filas, int columnas, int **mA, int *v, int *M){
	int temp[columnas]; //Vector para almacenar los resultados de fila * columna
	int sobra;
	for(int i=0; i<filas; i++){
		for(int k=0; k<columnas; k++){
			M[i]=0; //"Inicializando" el vector para luego poder sumar en esa posicion
			
			//Ciclo para cada fila * columna
			for(int j=0; j<columnas; j++)
				temp[j]=mA[i][j]*v[j];
			
			for(int m=0; m<columnas; m++)
				M[i]+=temp[m];
		}
		sobra=i;
	}
}
main(){
	color(15);
	int filas, columnas;
	int n_vector=0;
	int sobra;
	
	color(11);
	printf("Ingrese el tamano de las filas: ");
	scanf("%d",&filas);
	printf("Ingrese el tamano de las columnas: ");
	scanf("%d",&columnas);
	
	int **mA = (int**) malloc(filas * sizeof(int*));
	for(int i=0; i<filas; i++)
		mA[i] = (int*) malloc(columnas * sizeof(int));
	
	//Para multiplicar una matriz por un vector, la cantidad de columnas de la matriz y el tamaño del vector deben ser iguales
	while(n_vector!=columnas){
		color(12);
		printf("Ingrese el tamano del vector: ");
		scanf("%d",&n_vector);
		if(n_vector!=columnas){
			color(4);
			printf("ERROR: El vector tiene que ser del mismo tamaño que la cantidad de columnas de la matriz\n");
		}
	}
	int v[columnas];
	
	//Ingresar la matriz A
	printf("\n");
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" i  j\n");
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]: ",i,j);
			scanf("%d",&mA[i][j]);
		}
	}
	
	//Ingresar el vector
	color(12);
	for(int i=0; i<columnas; i++){
		printf("Ingrese el dato %d del vector: ",i);
		scanf("%d",&v[i]);
	}
	
	mostrar_matriz_vector(filas,columnas,mA,v);

	int M[n_vector];
	multiplicacion(filas,columnas,mA,v,M);
	
	color(13);
	printf("\nVector producto resultante: \n");
	for(int i=0; i<filas; i++){
		printf("| %d |",M[i]);
		printf("\n");
	}
	
	color(15);
}
