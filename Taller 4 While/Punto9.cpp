//Santiago Hernandez Diaz 20252578001
/*
9.hacer un programa que muestre la tabla de sumar de un numero dado.

*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	
	printf("Ingrese el numero del que desea ver la tabla de sumar: ");
	scanf("%d", &n);
	
	int i=1;
	while(i<=10){
		printf("%d + %d = %d \n",n,i,n+i);
		i++;
	}
	getch();
}
