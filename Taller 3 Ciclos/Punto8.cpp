//Santiago Hernandez Diaz 20252578001
/*
8. Desarrollar un algoritmo que lea 5 números por teclado, cada vez que lea un número,
suma los números comprendidos entre 1 y el número leído.
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


