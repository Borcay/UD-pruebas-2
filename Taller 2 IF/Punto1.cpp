//Santiago Hernandez Diaz 20252578001
//1. Desarrolle un algoritmo que permita leer dos números y ordenarlos de menor a mayor, si es el caso.

#include <stdio.h>
#include <conio.h>

main(){
	
	float a,b;
	
	printf("Digite el primer numero: ");
	scanf("%f",&a);
	
	printf("Digite el segundo numero: ");
	scanf("%f",&b);
	
	if(a>b){
		printf("El primer numero (%g) es mayor que el segundo numero (%g)",a,b);
		
	} else if (b>a){
		printf("El segundo numero (%g) es mayor que el primer numero (%g)",b,a);
		
		} else {
			printf("%g es igual a %g",a,b);
			}
	
	getch();
}
