//Santiago Hernandez Diaz 20252578001
//12. Una persona por cada año de vida debe consumir 8 kilogramos de fruta. 
//Dada la edad de una persona, imprimir cuantos gramos de fruta ha consumido 
//y adicional si una manzana pesa en promedio 4 gramos, determinar cuentas manzanas ha consumido.

#include <stdio.h>
#include <conio.h>

main(){
	int edad, kg, g, manzanas;
	
	printf("Cuantos años tiene la persona?: ");
	scanf("%d",&edad);
	
	kg = edad*8;
	g = kg*1000;
	manzanas = g/4;
	
	printf("La persona ha consumido %d gramos de fruta, lo cual son %d manzanas",g,manzanas);
	getch();
	
}
