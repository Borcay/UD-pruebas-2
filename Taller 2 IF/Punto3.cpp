//Santiago Hernandez Diaz 20252578001
//1. Dado un monto calcular el descuento considerando que por encima de 100 el descuento
//es el 10% y por debajo de 100 el descuento es el 2%

#include <stdio.h>
#include <conio.h>

main(){
	float monto, descuento;
	
	printf("Digite el monto: ");
	scanf("%f",&monto);
	
	if(monto>=100){
		descuento = monto*0.1;
		printf("Su descuento es del 10%%, lo que resulta en: %g",descuento);
		
	}	else {
			descuento = monto*0.02;
			printf("Su descuento es del 2%%, lo que resulta en: %g",descuento);
		}
	
	getch();
}
