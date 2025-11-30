//Santiago Hernandez Diaz 20252578001 
/* 3. Diseñe una algoritmo que calcule dentro de un arreglo(vector):
La suma de números pares
La suma de números impares
La suma total de los elementos del arreglo */
#include <stdio.h>
#include <conio.h>
//3 Funciones
int tamano(){
	int n;
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	return n;
}
void analizar_vector(int *v, int n, int *sumapares, int *sumaimpares){
	for(int i=0; i<=n-1; i++){
		if(v[i]%2 == 0)
			(*sumapares)+=v[i];
		if(v[i]%2 != 0)
			(*sumaimpares)+=v[i];
	}
}
int suma_total(int sumapares, int sumaimpares){
	return sumapares+sumaimpares;
}
main(){
	int sumapares=0;
	int sumaimpares=0;
	int n=tamano();
	int v[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);	
	}
	
	analizar_vector(v,n,&sumapares,&sumaimpares);
	printf("\nLa suma de los numeros pares en el vector es: %d", sumapares);
	printf("\nLa suma de los numeros impares en el vector es: %d", sumaimpares);
	printf("\nLa suma de todos los numeros en el vector es: %d", suma_total(sumapares, sumaimpares));
}
