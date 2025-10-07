//Santiago Hernandez Diaz 20252578001
//13. En la universidad el costo de la matrícula se calcula tomando las horas totales que el 
//estudiante toma en el semestre y cada hora se multplica por $11500. 
//Se desea construir un programa en el que el usuario ingrese las horas de clase y el sistema le 
//imprima el costo de la matrícula para el semestre.

#include <stdio.h>
#include <conio.h>

main(){
	int horas, matricula;
	
	printf("Digite la cantidad de horas de clase que toma este semestre: ");
	scanf("%d",&horas);
	
	matricula = horas*11500;
	
	printf("El costo de su matricula para este semestre es de: %d$",matricula);
	getch();
}
