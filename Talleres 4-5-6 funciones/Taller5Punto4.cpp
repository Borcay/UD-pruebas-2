//Santiago Hernandez Diaz 20252578001
//4. Escriba un algoritmo que permita invertir un arreglos de n elementos enteros
#include <stdio.h>
#include <conio.h>
//3 Funciones
void ingresar_vector(int *v, int n){
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
}
void invertir_vector(int *v, int *vinv, int n){
	//n-(k+1) hace que cuente "al revez" la posicion del vector original
	for(int k=0; k<=n-1; k++)
		vinv[k]=v[n-(k+1)];
}
void mostrar_vector(int *vinv, int n){
	printf("\nVector invertido: \n");
	for(int k=0; k<=n-1; k++)
		printf("%d ", vinv[k]);
}
main(){
	int n;
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	int vinv[n];
	
	ingresar_vector(v,n);
	invertir_vector(v,vinv,n);
	mostrar_vector(vinv,n);	
}
