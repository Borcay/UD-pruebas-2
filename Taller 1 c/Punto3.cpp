//Santiago Hernandez Diaz 20252578001
//3. Se requiere determinar el sueldo semanal de un mensajero con base al pago por hora que recibe y las horas trabajadas.

#include <stdio.h>
#include <conio.h>

main(){
	float PagoXHora,Sueldo;
	int Horas;
	
	printf("Cuanto es el pago por hora?: ");
	scanf("%f",&PagoXHora);
	
	printf("Cuantas horas ha trabajado?: ");
	scanf("%d",&Horas);
	
	Sueldo=PagoXHora*Horas;
	
	printf("El sueldo semanal del mensajero es de %.2f$",Sueldo);
	getch();
	
	getch();
}
