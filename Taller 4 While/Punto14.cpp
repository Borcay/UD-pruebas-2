//Santiago Hernandez Diaz 20252578001
/*
14. Elaborar un algoritmo que permita ingresar 20 n�meros y muestre todos los
n�meros menores e iguales a 25.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int num;
	int i=1;
	while(i<=20){
		printf("Digite el numero #%d: ",i);
		scanf("%d",&num);
		
		if(num<=25){
			printf("%d es menor o igual a 25\n\n",num);
		}
		i++;
	}
	getch();
}
