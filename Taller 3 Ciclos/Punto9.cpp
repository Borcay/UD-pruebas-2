//Santiago Hernandez Diaz 20252578001
//9. Escriba un algoritmo que calcule el factorial de un Número.

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int factorial = 1;
	int i = 1;

	printf("Digite un numero: ");
	scanf("%d", &n);

	while(i<=n){
		factorial = factorial * i;
		i++;
		}
		
	printf("El factorial de %d es: %d\n\n",n,factorial);

	getch();
}


