//Santiago Hernandez Diaz 20252578001
/*
10. Calcular la media de un conjunto de notas de un alumno. Si una de las notas es
negativa, el programa inmediatamente termina y calcula el promedio.
*/
#include <stdio.h>
#include <conio.h>
//3 Funciones
int ingresar_nota(){
	float nota;
	printf("Ingrese una nota: ");
	scanf("%f", &nota);
	return nota;
}
float sumar_nota(float promedio_suma, float nota){
	promedio_suma+=nota;
	return promedio_suma;
}
float calcular_promedio(float promedio_final, int contador_notas){
	promedio_final/=float(contador_notas);
	return promedio_final;
}
main(){
	int contador_notas=0;
	float promedio=0;
	float nota;
	while(1){
		nota=ingresar_nota();
		if(nota>=0){
			contador_notas++;
			promedio=sumar_nota(promedio, nota);
		} else {
			break;
			}	
	}
	printf("El promedio de notas del estudiante es %g",calcular_promedio(promedio, contador_notas));
}
