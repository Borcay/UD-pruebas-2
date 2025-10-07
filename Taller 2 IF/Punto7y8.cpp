//Santiago Hernandez Diaz 20252578001
//7y8.  Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
//Si trabaja 40 horas o menos se le paga $16 por hora, 
//Si trabaja mas de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.

#include <stdio.h>
#include <conio.h>

main(){
	int salario, horas, horas_extra;
	
	printf("Digite la cantidad de horas que trabaja por semana el obrero: ");
	scanf("%d",&horas);
	
	if (horas <= 40){
		salario = horas*16;
		printf("El salario semanal del obrero es de: %d$",salario);
		
	} else if (horas > 40){
		horas_extra = horas-40;
		horas = horas - horas_extra;
		salario = (horas*16)+(horas_extra*20);
		printf("El salario semanal del obrero es de: %d$",salario);
		}
	
	getch();
}
