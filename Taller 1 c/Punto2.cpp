//Santiago Hernandez Diaz 20252578001
//2. Un agricultor en su finca tiene un nacedero de agua y vende el agua en litros.
//Cuando la gente le paga la cantidad de agua que vendió se la paga en galones.
//¿Cuanto dinero recibirá el señor por la venta de los litros de aguas a sabiendas que un galon = 3.785 litros?

#include <stdio.h>
#include <conio.h>

main(){
	
	float Litros_Agua,Galones_Agua,Precio_Galon,Precio_A_Pagar;
	int Parte_entera;
	
	//Leer el precio del galon y los litros de agua
	printf("Digite el precio por galon de agua: ");
	scanf("%f",&Precio_Galon);
	printf("Cuantos litros de agua quiere comprar?: ");
	scanf("%f",&Litros_Agua);
	
	//Pasar los litros a galones (solo la parte entera)
	Galones_Agua = Litros_Agua/3.785;
	Parte_entera = (int)Galones_Agua;
	printf("Galones de agua que comprara: %d \n",Parte_entera);
	
	//Precio final solo con 2 decimales porque con más se veia feo
	Precio_A_Pagar = Parte_entera*Precio_Galon;
	printf("La cantidad de dinero que gana el agricultor es de: %.2f$",Precio_A_Pagar);
	getch();
}
