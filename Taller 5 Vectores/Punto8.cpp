//Santiago Hernandez Diaz 20252578001
/*
Realice un algoritmo que cargue un vector con 20 (n) elementos, 
luego ordene los elementos leídos de forma ascendente.
En otro vector, ordene los mismos elementos de forma descendente y por último, 
tome los dos vectores anteriores y multiplique su contenido y cargue su resultado en un tercer vector. 
Imprima los tres vectores resultantes.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int aux;
	
	printf("Ingrese el tamamo n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	int vasc[n];
	int vdes[n];
	int vmult[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
	
//Clonar el vector 2 veces
	//Clonar para Vector ascendente
	for(int i=0; i<=n-1; i++){
		vasc[i]=v[i];
	}
	//Clonar para Vector descendente
	for(int i=0; i<=n-1; i++){
		vdes[i]=v[i];
	}
	
//Ordenarlo de forma ascendente
	for(int i=0; i<=n-1; i++){
		for(int j=0; j<=n-2; j++){
			if(vasc[j]>vasc[j+1]){
				aux=vasc[j];
				vasc[j]=vasc[j+1];
				vasc[j+1]=aux;
			}
		}
	}
	
//Ordenarlo de forma descendente
	for(int i=0; i<=n-1; i++){
		for(int j=0; j<=n-1; j++){
			if(vdes[j]<vdes[j+1]){
				aux=vdes[j];
				vdes[j]=vdes[j+1];
				vdes[j+1]=aux;
			}
		}
	}
	
//Multiplicar ascendente y descendente
	for (int i=0; i<=n-1; i++){
		vmult[i]=vasc[i]*vdes[i];
	}
	
	
//Imprimirlos
	printf("\nEl vector ordenado de forma ascendente es:\n");
	for(int i=0; i<=n-1; i++){
		printf("%d ",vasc[i]);
	}
	
	printf("\nEl vector ordenado de forma descendente es:\n");
	for(int i=0; i<=n-1; i++){
		printf("%d ",vdes[i]);
	}
	
	printf("\nEl vector resultante de la multiplicacion de los anteriores es:\n");
	for(int i=0; i<=n-1; i++){
		printf("%d ",vmult[i]);
	}
}
