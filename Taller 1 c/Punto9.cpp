//Santiago Hernandez Diaz 20252578001
//9. Desarrolle un algoritmo que lea la velocidad en metros por segundo y la convierta a kilómetros por hora.

#include <stdio.h>
#include <conio.h>

main(){
	float ms,kmh;
	
	printf("Digite la velocidad en metros por segundo: ");
	scanf("%f",&ms);
	
	//1km = 1000 metros
	//1hora = 3600 segundos
	//1m/s = 3.6km/h
	
	kmh = ms * 3.6;
	
	printf("La velocidad en kilometros por hora es de: %.2fkm/h",kmh);
	getch();
	
}
