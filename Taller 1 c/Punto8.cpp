//Santiago Hernandez Diaz 20252578001
//8. Una compa��a de autobuses municipales realiza viajes en horarios espec�ficos, la 
//cual requiere determinar el costo que tendr� un boleto de un viaje normal, esto 
//basado en los kil�metros por recorrer y el costo de cada kil�metro.

#include <stdio.h>
#include <conio.h>

main(){
	float km, costo_km, pago_boleto;
	pago_boleto = 0;
	
	printf("Digite el costo por kilometro: ");
	scanf("%f",&costo_km);
	printf("Digite los kilometros a recorrer: ");
	scanf("%f",&km);
	
	pago_boleto = km*costo_km;
	
	printf("El costo del boleto es de: %.2f$",pago_boleto);
	getch();
}
