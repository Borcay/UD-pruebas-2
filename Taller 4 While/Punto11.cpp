//Santiago Hernandez Diaz 20252578001
/*
11. Calcular todos los pagos hechos de un restaurant que lea 130 consumos y que si el
consumo ingresado excede los $130 el descuento será del 15%.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int consumo;
	float descontado;
	
	int i=1;
	
	while(i<=130){
		printf("Ingrese el consumo: ");
		scanf("%d", &consumo);
		
		if(consumo>=130){
			descontado=(float(consumo))*0.85;
			printf("El pago %d con 15%% de descuento es de %g$ \n",i,descontado);
		} else {
				printf("El pago %d es de %d$ \n",i,consumo);
			}
			
		i++;
	}
	
	getch();
}
