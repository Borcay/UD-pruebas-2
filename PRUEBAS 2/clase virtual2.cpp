//Leo N numeros y de esos decir cuantos estan comprendidos entre 5 y 25

#include <stdio.h>
#include <conio.h>

int mostrar(){
	int n;
	printf("Ingrese la cantidad N de numeros: ");
	scanf("%d",&n);
	return n;
}

int rango(int n){
	int contador=0;
	int num;
	
	for(int i=0; i<n; i++){
		printf("(#%d)Digite el numero: ", i+1);
		scanf("%d",&num);
		if(num>=5 && num<=25){
		contador++;
		}
	}
	return contador;
}

main(){
	printf("La cantidad de numeros entre 5 y 25 es %d",rango(mostrar()));
}
