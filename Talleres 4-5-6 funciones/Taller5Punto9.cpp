//Santiago Hernandez Diaz 20252578001
/* 9.Leer una secuencia de 20(n) números almacenarlos en un vector y
mostrar la posición donde se encuentra el mayor valor leído. */
#include <stdio.h>
#include <conio.h>
//3 Funciones
int tamano(){
	int n;
	printf("Ingrese el tamamo n de los vectores: ");
	scanf("%d",&n);
	return n;
}
int ingresar_vector(int *v, int n){
	for(int i=0; i<n; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
}
int analizar_vector(int *v, int n, int mas_grande, int *posicion){
	mas_grande=v[0];
	for(int i=0; i<n; i++){
		if(mas_grande<v[i]){
			mas_grande=v[i];
			(*posicion)=i;
		}
	}
	return mas_grande;
}
main(){
	int mas_grande;
	int posicion=0;
	int n=tamano();
	int v[n];
	ingresar_vector(v,n);
	mas_grande=analizar_vector(v,n,mas_grande,&posicion);
	printf("\nEl numero mas grande es %d, el cual esta en la posicion %d del vector (dato #%d)", mas_grande, posicion, posicion+1);
}
