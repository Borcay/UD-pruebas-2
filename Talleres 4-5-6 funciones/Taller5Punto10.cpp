//Santiago Hernandez Diaz 20252578001
/*
Dado dos vectores A y B de 15(n) elementos cada uno, 
obtener un vector C donde la posición i se almacene la suma de A[i]+B[i].
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;

	printf("Ingrese el tamamo n de los vectores: ");
	scanf("%d",&n);
	
	int vA[n];
	int vB[n];
	int vC[n];
	
//Ingresar vector A
	for(int i=0; i<=n-1; i++){
		printf("Digite el dato #%d del vector A: ", i+1);
		scanf("%d",&vA[i]);
	}
	printf("\n");

//Ingresar vector B
	for(int i=0; i<=n-1; i++){
		printf("Digite el dato #%d del vector B: ", i+1);
		scanf("%d",&vB[i]);
	}
	
//Sumar A y B para crear C
	for(int i=0; i<=n-1; i++){
		vC[i]=vA[i]+vB[i];
	}
	
	printf("\nEl vector C es:\n");
	for(int i=0; i<=n-1; i++){
		printf("%d ", vC[i]);
	}
}
