//Santiago Hernandez Diaz 20252578001
/*
8. Realizar el algoritmo para obtener la suma de los números pare hasta 1000
inclusive S= 2+4+6....+100.

*/

#include <stdio.h>
#include <conio.h>

main(){
	int suma=0;
	int i=2;
	while(i<=1000){
		suma=suma+i;
		i=i+2;
	}
	
	printf("La suma de los numeros pares hasta 1000 es: %d", suma);
	getch();
}
