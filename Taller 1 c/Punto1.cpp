//Santiago Hernandez Diaz 20252578001
//1. Desarrolle un algoritmo que permita leer un valor entero cualquiera N y escriba si dicho número es par o impar

#include <stdio.h>
#include <conio.h>

main(){

	int n;
	printf("Digite un valor entero: ");
	scanf("%d",&n);
	
	//Operador de modulo %
	if(n % 2 == 0){
		printf("El numero %d es par",n);
	} else {
		printf("El numero %d es impar",n);
	}
	getch();
}
