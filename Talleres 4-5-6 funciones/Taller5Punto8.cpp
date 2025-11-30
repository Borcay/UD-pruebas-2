//Santiago Hernandez Diaz 20252578001
/* 8.Realice un algoritmo que cargue un vector con 20 (n) elementos, 
luego ordene los elementos leídos de forma ascendente.
En otro vector, ordene los mismos elementos de forma descendente y por último, 
tome los dos vectores anteriores y multiplique su contenido y cargue su resultado en un tercer vector. 
Imprima los tres vectores resultantes. */
#include <stdio.h>
#include <conio.h>
//3 Funciones
void ordenar_ascendente(int *vasc, int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(vasc[j]>vasc[j+1]){
				aux=vasc[j];
				vasc[j]=vasc[j+1];
				vasc[j+1]=aux;
			}
		}
	}
}
void ordenar_descendente(int *vdes, int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(vdes[j]<vdes[j+1]){
				aux=vdes[j];
				vdes[j]=vdes[j+1];
				vdes[j+1]=aux;
			}
		}
	}
}
void resultados(int *vasc, int *vdes, int *vmult, int n){
	printf("\nEl vector ordenado de forma ascendente es:\n");
	for(int i=0; i<n; i++)
		printf("%d ",vasc[i]);
	printf("\nEl vector ordenado de forma descendente es:\n");
	for(int i=0; i<n; i++)
		printf("%d ",vdes[i]);
	printf("\nEl vector resultante de la multiplicacion de los anteriores es:\n");
	for(int i=0; i<n; i++)
		printf("%d ",vmult[i]);
}
main(){
	int n;
	printf("Ingrese el tamamo n del vector: ");
	scanf("%d",&n);
	int v[n];
	int vasc[n];
	int vdes[n];
	int vmult[n];
	
	for(int i=0; i<=n-1; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
	//Clonar el vector 2 veces
	for(int i=0; i<n; i++){
		vasc[i]=v[i];
	}
	for(int i=0; i<n; i++){
		vdes[i]=v[i];
	}
	
	ordenar_ascendente(vasc,n);
	ordenar_descendente(vdes,n);
	
	for (int i=0; i<n; i++)
		vmult[i]=vasc[i]*vdes[i];
	resultados(vasc,vdes,vmult,n);
}
