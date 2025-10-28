//Santiago Hernandez Diaz 20252578001
/*
2. Determinar la cantidad de elementos negativos, positivos y cero de un vector dado.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int negativos=0;
	int positivos=0;
	int ceros=0;
	
	printf("Ingrese el tamano n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d: ",i+1);
		scanf("%d",&v[i]);	
	}

//Analizar el vector
	for(int i=0; i<=n-1; i++){
		if(v[i]>0){
			positivos++;
		}
		if(v[i]<0){
			negativos++;
		}
		if(v[i]==0){
			ceros++;
		}
	}
	
	printf("\nLa cantidad de numeros positivos es: %d", positivos);
	printf("\nLa cantidad de numeros negativos es: %d", negativos);
	printf("\nLa cantidad de ceros es: %d", ceros);

}
