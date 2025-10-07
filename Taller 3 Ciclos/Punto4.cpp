//Santiago Hernandez Diaz 20252578001
//4. Desarrollar un algoritmo que realice la tabla de multiplicar de un número dado.

#include <stdio.h>
#include <conio.h>

main(){
	
	int tabla;
	int mult = 0;
	
	printf("Ingrese la tabla de multiplicar que desea: ");
	scanf("%d",&tabla);
	
	
	printf("La tabla del %d es: \n",tabla);
	
	for(int i=1; i<=10; i++){
		mult = tabla*i;
		printf("%d*%d: %d \n",tabla,i,mult);
	}
	
	getch();
}


