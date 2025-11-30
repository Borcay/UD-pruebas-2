//Santiago Hernandez Diaz 20252578001
//8. Realizar el algoritmo para obtener la suma de los números pares hasta 1000 inclusive S= 2+4+6....+100.
#include <stdio.h>
#include <conio.h>
//3 Funciones
int limite(){
	return 1000;
}

int calculo(){
	int suma=0;
	int i=2;
	while(i<=limite()){
		suma+=i;
		i+=2;
	}
	return suma;
}
void print(){
	printf("La suma de los numeros pares hasta 1000 es: %d", calculo());
}
main(){
	print();
}
