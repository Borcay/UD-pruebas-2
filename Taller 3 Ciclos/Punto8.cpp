//Santiago Hernandez Diaz 20252578001
/*
8. Desarrollar un algoritmo que lea 5 n�meros por teclado, cada vez que lea un n�mero,
suma los n�meros comprendidos entre 1 y el n�mero le�do.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	
	for(int i=1; i<=5; i++){
		int suma = 0;
		int j = 1;
		
		printf("(%d)Digite un numero: ",i);
		scanf("%d", &n);
		
		while(j<=n){
			suma = suma + j;
			j++;
		}
		
		printf("La suma es: %d\n\n",suma);
	}
	
	getch();
}


