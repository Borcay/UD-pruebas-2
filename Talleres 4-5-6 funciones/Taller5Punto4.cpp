//Santiago Hernandez Diaz 20252578001
/*
4. Escriba un algoritmo que permita invertir un arreglos de n elementos enteros
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	int vinv[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
		

//Invertir el vector
	//n-(k+1) hace que cuente "al revez" la posicion del vector original
	for(int k=0; k<=n-1; k++)
		vinv[k]=v[n-(k+1)];
		
//Mostrar el vector invertido	
	printf("\nVector invertido: \n");
	for(int k=0; k<=n-1; k++)
		printf("%d ", vinv[k]);
}
