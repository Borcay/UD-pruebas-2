//Santiago Hernandez Diaz 20252578001
//11. Construir un programa que permita calcular el área de un triángulo. 
//El usuario ingresa la base y la altura en milímetros y el sistema mostrar:
//los resultados en milímetros, centimetros y metros cuadrados respectivamente..

#include <stdio.h>
#include <conio.h>

main(){
	float base, altura, area_mm, area_cm, area_m;

	printf("Ingrese la altura del triangulo en milimetros: ");
	scanf("%f",&altura);
	printf("Ingrese la base del triangulo en milimetros: ");
	scanf("%f",&base);
	
	area_mm = (base*altura)/2;
	area_cm = ((base*altura)/2)/10;
	area_m = ((base*altura)/2)/1000;
	
	//%g hace que el float no muestre 0's extra
	printf("El area del triangulo es de %g mm^2 \n",area_mm);
	printf("El area del triangulo es de %g cm^2 \n",area_cm);
	printf("El area del triangulo es de %g m^2",area_m);
	getch();
}
