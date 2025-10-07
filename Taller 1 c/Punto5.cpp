//Santiago Hernandez Diaz 20252578001
//5.Realizar un algoritmo que dado cierta cantidad de dinero en pesos Colombianos, me representa en euros.

#include <stdio.h>
#include <conio.h>


//1 Euro = 4613.5 pesos Colombianos

main(){
	float Euro, Col;
	
	printf("Digite la cantidad de dinero en pesos Colombianos: ");
	scanf("%f",&Col);
	
	Euro = Col/4613.5;
	
	printf("La cantidad en euros es de : %.2f",Euro);
	getch();
}
