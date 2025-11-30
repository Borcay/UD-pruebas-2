//Santiago Hernandez Diaz 20252578001
/*
11. Diseñe un algoritmo que multiplique una matriz con un vector. 
Se debe saber las reglas para realizarlo.
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
	int n_vector=0;
	int sobra;
	
	color(11);
	printf("Ingrese el tamano de las filas: ");
	scanf("%d",&n_filas);
	printf("Ingrese el tamano de las columnas: ");
	scanf("%d",&n_columnas);
	int A[n_filas][n_columnas];
	
	
	//Para multiplicar una matriz por un vector, la cantidad de columnas de la matriz y el tamaño del vector deben ser iguales
	while(n_vector!=n_columnas){
		color(12);
		printf("Ingrese el tamano del vector: ");
		scanf("%d",&n_vector);
		if(n_vector!=n_columnas){
			color(4);
			printf("ERROR: El vector tiene que ser del mismo tamaño que la cantidad de columnas de la matriz\n");
		}
	}
	int v[n_vector];
	
	
	//Ingresar la matriz A
	printf("\n");
	color(0);
	printf("Ingrese el dato de la matriz A");
	color(11);
	printf(" i  j\n");
	for(int i=0; i<n_filas; i++){
		for(int j=0; j<n_columnas; j++){
			printf("Ingrese el dato de la matriz A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	//Ingresar el vector
	color(12);
	for(int i=0; i<n_columnas; i++){
		printf("Ingrese el dato %d del vector: ",i);
		scanf("%d",&v[i]);
	}
	
	//Mostrar texto de matriz y vector
	printf("\n");
	color(11);
	printf(" Matriz");
	color(13);
	printf(" * ");
	color(12);
	printf("Vector\n");
	
	//Mostrar matriz y vector
	for(int i=0; i<n_filas; i++){
		//matriz
		color(11);
		printf("|");
		for(int j=0; j<n_columnas; j++){
			printf(" %d ",A[i][j]);
		}
		printf("|");	

		//vector
		color(12);
		printf(" | %d |",v[i]);
		printf("\n");
		
		sobra=i+1;
	}
	//Filas sobrantes del vector
	if(n_vector>n_filas){
		while(sobra<n_vector){
			char espacio[] = " a ";
			printf(" "); //1 espacio
			for(int x=0; x<n_columnas; x++){
				color(0);
				printf("%s",espacio);
			}
			color(12);
			printf("  | %d |\n",v[sobra]); //2 espacios al inicio
			sobra++;
		} 	
	}
	//Multiplicacion
	int M[n_vector];
	int temp[n_vector]; //Vector para almacenar los resultados de fila * columna
	
	for(int i=0; i<n_filas; i++){
		for(int k=0; k<n_vector; k++){
			M[i]=0; //"Inicializando" el vector para luego poder sumar en esa posicion
			
			//Ciclo para cada fila * columna
			for(int j=0; j<n_vector; j++){
				temp[j]=A[i][j]*v[j];
			}
			
			for(int m=0; m<n_vector; m++){
				M[i]=M[i]+temp[m];
			}	
		}
		sobra=i;
	}
	
	color(13);
	printf("\nVector producto resultante: \n");
	for(int i=0; i<n_filas; i++){
		printf("| %d |",M[i]);
		printf("\n");
	}
	
	color(15);
}
