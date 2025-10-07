//Santiago Hernandez Diaz 20252578001
//6. Un estacionamiento de autos requiere determinar el cobro que debe aplicar a las personas que lo utilizan.
//Considere que el cobro es con base en las horas que utilizan el estacionamiento
//y las fracciones de horas se toman como completas.

#include <stdio.h>
#include <conio.h>

main(){
	float Horas, Precio,Pago;
	int Hora_entera;
	
	printf("Digite el precio por hora que se cobra en este estacionamiento: ");
	scanf("%f",&Precio);
	printf("Digite las horas que se uso el estacionamiento: ");
	scanf("%f",&Horas);
	
	if ((int)Horas == Horas)//Esto verifica si es entero
	{
		Pago = Precio*Horas;
		printf("El precio a pagar es: %.2f$",Pago);
		
	} else //Cuando no es entero
		{
			Hora_entera = (int)Horas; //Agarra solo la parte entera
			Hora_entera = Hora_entera+1;
			Pago = Hora_entera*Precio;
			
			printf("El precio a pagar es: %.2f$",Pago);
		}
		
	getch();
}
