//Santiago Hernandez Diaz 20252578001
/*
13. Escribir un programa que calcule, independientemente, la suma y la media de los números
pares e impares comprendidos entre 1 y 200
*/

#include <stdio.h>
#include <conio.h>

main(){
	//Impares
	float suma_impar = 0;
	float media_impar = 0;
	int impares = 0;
	
	for(int i=1; i<=200; i=i+2){
		suma_impar = suma_impar + i;
		impares++;
	}
	media_impar = suma_impar/impares;
	
	printf("La suma de los numeros IMPARES comprendidos entre 1 y 200 es: %g",suma_impar);
	printf("\nLa media de los numeros IMPARES comprendidos entre 1 y 200 es: %g",media_impar);
	
	printf("\n");
	printf("\n");
	
	//Pares
	float suma_par = 0;
	float media_par = 0;
	int pares = 0;
	
	for(int j=2; j<=200; j=j+2){
		suma_par = suma_par + j;
		pares++;
	}
	media_par = suma_par/pares;
	
	printf("La suma de los numeros PARES comprendidos entre 1 y 200 es: %g",suma_par);
	printf("\nLa media de los numeros PARES comprendidos entre 1 y 200 es: %g",media_par);
	

	getch();
}


