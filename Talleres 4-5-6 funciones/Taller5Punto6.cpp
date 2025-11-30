//Santiago Hernandez Diaz 20252578001
/*
6. Realice un algoritmo que cargue un vector con 10 elementos y determine 
la suma y el producto de todos los elementos del vector. 
Además, calcule el promedio de los elementos del vector y
determine cuantos de los elementos del vector están por debajo del promedio.
Imprima la suma, el producto, el promedio y la cantidad de elementos que están por debajo del promedio.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int suma=0;
	int mult=1;
	int bajopromedio=0;
	float promedio=0;
	
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d del vector: ",i+1);
		scanf("%d",&v[i]);
	}
		
//Analizar el vector
	for(int i=0; i<=n-1; i++){
		suma= suma+v[i];
		mult=mult*v[i];
		promedio=promedio+v[i];
	}
	
	promedio=promedio/n; //Calcular promedio
	
//Analizar el vector para encontrar los menores al promedio
	for(int i=0; i<=n-1; i++){
		if(promedio>v[i]){
			bajopromedio++;
		}
	}
	
	printf("\nLa suma de todos los elementos del vector es: %d", suma);
	printf("\nEl producto de todos los elementos del vector es: %d", mult);
	printf("\nEl promedio de todos los elementos del vector es: %g", promedio);
	printf("\nLa cantidad de elementos que estan bajo el promedio del vector es: %d",bajopromedio);
}
