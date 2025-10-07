//Santiago Hernandez Diaz 20252578001
/*
2. Obtener el promedio de calificaciones de un grupo de n alumnos.

*/

#include <stdio.h>
#include <conio.h>

main(){
	int n_notas, n_alumnos;
	float nota;
	float promedio=0;
	
	printf("Digite el numero de alumnos: ");
	scanf("%d",&n_alumnos);
	
	int i=1;
	while(i<=n_alumnos){
		printf("Ingrese la calificacion del alumno #%d: ", i);
		scanf("%f",&nota);
		promedio=promedio+nota;
		i++;
	}
	
	promedio=promedio/n_alumnos;
	
	if(n_alumnos==1){
	printf("El promedio de las calificaciones del alumno es: %g",promedio);
	} else {
		printf("El promedio de las calificaciones del grupo de %d alumnos es: %g",n_alumnos,promedio);
		}

	
	getch();
}
