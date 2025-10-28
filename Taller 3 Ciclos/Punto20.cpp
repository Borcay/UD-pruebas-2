//Santiago Hernandez Diaz 20252578001
/*
20.Una empresa tiene 2 empleados y trabajan un jornal, el empleado tiene un salario, el valor
de la hora extra diurna es 50% del valor de la hora, la hora extra nocturna 75% del valor
de la hora calcular el jornal de los empleados.
*/

#include <stdio.h>
#include <conio.h>


//Asumiendo que el jornal dura 8 horas
main(){
	float hora, hora_diurna, hora_nocturna, vhd, vhn, salario, salario1, salario2;
	
	printf("Ingrese el valor de la hora normal: " );
	scanf("%f",&hora);
	
	
	for(int i=1; i<=2; i++){
		printf("EMPLEADO %d: Ingrese las horas extra diurnas que trabaja: ",i);
		scanf("%f",&hora_diurna);
		printf("EMPLEADO %d: Ingrese las horas extra nocturnas que trabaja: ",i);
		scanf("%f",&hora_nocturna);
		
		
		vhd=hora_diurna*(hora*0.5);
		vhn=hora_nocturna*(hora*0.75);
		
		salario=vhn+vhd+(hora*8);
		
		if(i==1){
			salario1=salario;
		} else if(i==2){
			salario2=salario;
			}
	}

	printf("Asumiendo que trabaja 8 horas, el salario diario del empleado 1 seria de: %g$ \n", salario1);
	printf("Asumiendo que trabaja 8 horas, el salario diario del empleado 2 seria de: %g$", salario2);
	getch();
}


