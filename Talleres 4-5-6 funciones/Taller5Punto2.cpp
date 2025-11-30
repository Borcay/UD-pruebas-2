//Santiago Hernandez Diaz 20252578001
//2. Determinar la cantidad de elementos negativos, positivos y cero de un vector dado.
#include <stdio.h>
#include <conio.h>
//3 Funciones
int ingresar_vector(int *v, int n){
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d: ",i+1);
		scanf("%d",&v[i]);	
	}
}
void analizar_vector(int v[], int n, int *positivos, int *negativos, int *ceros){
	for(int i=0; i<=n-1; i++){
		if(v[i]>0){
			(*positivos)++;
		}
		if(v[i]<0){
			(*negativos)++;
		}
		if(v[i]==0){
			(*ceros)++;
		}
	}
}
void resultados(int positivos, int negativos, int ceros){
	printf("\nLa cantidad de numeros positivos es: %d", positivos);
	printf("\nLa cantidad de numeros negativos es: %d", negativos);
	printf("\nLa cantidad de ceros es: %d", ceros);
}
main(){
	int negativos=0;
	int positivos=0;
	int ceros=0;
	int n;
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	int v[n];
	
	ingresar_vector(v,n);
	analizar_vector(v,n,&positivos, &negativos, &ceros);
	resultados(positivos,negativos,ceros);
}
