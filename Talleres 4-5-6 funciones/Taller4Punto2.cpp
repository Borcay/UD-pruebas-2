//Santiago Hernandez Diaz 20252578001
//2. Obtener el promedio de calificaciones de un grupo de n alumnos.

#include <stdio.h>
#include <conio.h>
//3 Funciones
int cantidad_alumnos(){
	int n_alumnos;
	printf("Digite el numero de alumnos: ");
	scanf("%d",&n_alumnos);
	return n_alumnos;
}

float calcular_promedio(int n_alumnos, float promedio){
	return promedio/n_alumnos;
}

void printf_final(int n_alumnos, float promedio_final){
	printf("El promedio de las calificaciones del grupo de %d alumnos es: %g",n_alumnos,calcular_promedio(n_alumnos, promedio_final));
}

main(){
	int n_alumnos=cantidad_alumnos();
	int i=1;
	float nota;
	float promedio=0;

	while(i<=n_alumnos){
		printf("Ingrese la calificacion del alumno #%d: ", i);
		scanf("%f",&nota);
		promedio+=nota;
		i++;
	}
	printf_final(n_alumnos, promedio);
}
