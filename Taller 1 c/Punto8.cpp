//Santiago Hernandez Diaz 20252578001
//8. Una compañía de autobuses municipales realiza viajes en horarios específicos, la 
//cual requiere determinar el costo que tendrá un boleto de un viaje normal, esto 
//basado en los kilómetros por recorrer y el costo de cada kilómetro.

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
