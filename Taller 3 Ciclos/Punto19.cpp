//Santiago Hernandez Diaz 20252578001
/*
19.Se ingresan las temperaturas correspondiente a los d�as de la semana comenzando por el
d�a domingo, se pide informar el promedio semanal de temperaturas, y el d�a m�s frio y la
temperatura del mismo.
*/

#include <stdio.h>
#include <conio.h>

main(){
	float temp;
	float promedio=0;
	float frio=100000000000;
	int dia_frio;
	
	for(int i=7; i>=1; i--){
		printf("Ingrese la temperatura del dia %d: ",i);
		scanf("%f",&temp);
		promedio=promedio+temp;
		
		if(temp<=frio){
			frio=temp;
			dia_frio=i;
		}
	}
	
	promedio=promedio/7;
	
	printf("La temperatura promedio de la semana es de: %g \n", promedio);
	printf("El dia mas frio fue el dia #%d, con una temperatura de: %g",dia_frio, frio);
	
	getch();
}


