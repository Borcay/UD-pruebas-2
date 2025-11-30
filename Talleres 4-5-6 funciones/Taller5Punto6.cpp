//Santiago Hernandez Diaz 20252578001
/* 6. Realice un algoritmo que cargue un vector con 10 elementos y determine 
la suma y el producto de todos los elementos del vector. 
Además, calcule el promedio de los elementos del vector y
determine cuantos de los elementos del vector están por debajo del promedio.
Imprima la suma, el producto, el promedio y la cantidad de elementos que están por debajo del promedio. */
#include <stdio.h>
#include <conio.h>
//3 Funciones
void ingresar_vector(int *v, int n){
	for(int i=0; i<n; i++){
		printf("Ingrese el dato #%d del vector: ",i+1);
		scanf("%d",&v[i]);
	}
}
void analizar_vector(int *v, int n, int *suma, int *mult){
	for(int i=0; i<n; i++){
		(*suma)+=v[i];
		(*mult)*=v[i];
	}
}
int menores_promedio(int *v, int n, float promedio){
	int bajo_promedio=0;
	for(int i=0; i<n; i++){
		if(promedio>v[i]){
			bajo_promedio++;
		}
	}
	return bajo_promedio;
}
main(){
	float promedio=0;
	int suma=0;
	int mult=1;
	int n;
	
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	int v[n];
	
	ingresar_vector(v,n);
	analizar_vector(v,n,&suma,&mult);
	promedio=(float)suma/n; 

	printf("\nLa suma de todos los elementos del vector es: %d", suma);
	printf("\nEl producto de todos los elementos del vector es: %d", mult);
	printf("\nEl promedio de todos los elementos del vector es: %g", promedio);
	printf("\nLa cantidad de elementos que estan bajo el promedio del vector es: %d",menores_promedio(v,n,promedio));
}
