//Santiago Hernandez Diaz 20252578001
/*
13. dada N notas, calcular el promedio de las notas aprobadas y el promedio de las
notas desaprobadas.
*/

#include <stdio.h>
#include <conio.h>


//ASUMIENDO QUE DESAPROBADO ES <=3
main(){
	int n;
	int nota=0;
	int aprobadas=0;
	int desaprobadas=0;
	float promedio_a=0;
	float promedio_d=0;
	
	printf("Ingrese el numero N de notas: ");
	scanf("%d", &n);
	
	printf("Nota para aprobar>=3  \n\n");
	
	int i=1;
	while(i<=n){
		printf("Ingrese la nota #%d: ",i);
		scanf("%d", &nota);
		
		if(nota>=3){
			aprobadas++;
			promedio_a=promedio_a+nota;
		} else{
			desaprobadas++;
			promedio_d=promedio_d+nota;
			}
		i++;
	}
	
	if(promedio_a>0){
		promedio_a=promedio_a/aprobadas;
	}
	if(promedio_d>0){
		promedio_d=promedio_d/desaprobadas;	
	}
	
	
	printf("El promedio de notas aprobadas fue de %g \n",promedio_a);
	printf("El promedio de notas desaprobadas fue de %g",promedio_d);
	getch();
}
