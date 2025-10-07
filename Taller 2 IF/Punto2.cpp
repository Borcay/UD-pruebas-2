//Santiago Hernandez Diaz 20252578001
//2. A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000,
//por encima de 1000 y hasta 2000 el 5% del adicional, y por encima de 2000 el 3% del adicional. 
//Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo. 

#include <stdio.h>
#include <conio.h>

main(){
	float sueldo, sueldo_neto, descuento;
	descuento = 0;
	sueldo_neto = 0;
	
	printf("Ingrese el sueldo del trabajador: ");
	scanf("%f",&sueldo);
	
	if (sueldo<=1000){
		descuento = sueldo*0.1;
		sueldo_neto = sueldo-descuento;
		printf("El descuento es de: %g\n", descuento);
		printf("El sueldo neto es de: %g", sueldo_neto);
		
	} else if (sueldo >1000 && sueldo<=2000){
			descuento = (sueldo-1000)*0.05;
			sueldo_neto = sueldo-descuento;
			printf("El descuento es de: %g\n", descuento);
			printf("El sueldo neto es de: %g", sueldo_neto);
		
		} else if (sueldo>2000){
				descuento = (sueldo-1000)*0.03;
				sueldo_neto = sueldo-descuento;
				printf("El descuento es de: %g\n", descuento);
				printf("El sueldo neto es de: %g", sueldo_neto);
			}
	
	getch();
}
