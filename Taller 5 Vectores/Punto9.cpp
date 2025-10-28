//Santiago Hernandez Diaz 20252578001
/*
9.Leer una secuencia de 20(n) números almacenarlos en un vector y
mostrar la posición donde se encuentra el mayor valor leído.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int mas_grande;
	int posicion=0;

	printf("Ingrese el tamamo n de los vectores: ");
	scanf("%d",&n);
	
	int v[n];
	
//Ingresar vector 
	for(int i=0; i<=n-1; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
	
	mas_grande=v[0]; //El primer dato del vector será el mas grande inicialmente para la primera comparacion
	for(int i=0; i<=n-1; i++){
		if(mas_grande<v[i]){
			mas_grande=v[i];
			posicion=i;
		}
	}

	printf("\nEl numero mas grande es %d, el cual esta en la posicion %d del vector (dato #%d)", mas_grande, posicion, posicion+1);
}
