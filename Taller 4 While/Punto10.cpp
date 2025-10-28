//Santiago Hernandez Diaz 20252578001
/*
10. Calcular la media de un conjunto de notas de un alumno. Si una de las notas es
negativa, el programa inmediatamente termina y calcula el promedio.
*/

#include <stdio.h>
#include <conio.h>

main(){
	float promedio=0;
	float nota;
	int contador_notas=0;
	
	int i=1;
	while(i==1){
		printf("Ingrese una nota: ");
		scanf("%f", &nota);
		
		if(nota>=0){
			contador_notas++;
			promedio=promedio+nota;
		} else {
			i++;
			}	
	}
	
	promedio=promedio/float(contador_notas);
	printf("El promedio de notas del estudiante (%d notas) es %g",contador_notas ,promedio);
	
	getch();
}
