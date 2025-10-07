//Santiago Hernandez Diaz 20252578001
//2. Desarrollar un algoritmo que sume los números comprendidos entre 85 y 115.

#include <stdio.h>
#include <conio.h>

main(){
	int suma = 0;
	
	for(int i=85; i<=115; i++){
		suma = suma+i;
		printf("%d. El resultado de la suma hasta ahora es: %d \n",i,suma);
	}
	
	printf("\nLa suma de los numeros comprendidos entre 85 y 115 es: %d",suma);
	
	getch();
}
