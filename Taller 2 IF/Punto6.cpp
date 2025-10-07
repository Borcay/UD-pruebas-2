//Santiago Hernandez Diaz 20252578001
//6. Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprueba si su
//promedio de tres calificaciones es mayor o igual a 3.5; reprueba en caso contrario

#include <stdio.h>
#include <conio.h>

main(){
	float nota1, nota2, nota3;
	float promedio = 0;
	
	printf("Digite la primera nota: ");
	scanf("%f",&nota1);
	printf("Digite la segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite la tercera nota: ");
	scanf("%f",&nota3);
	
	promedio = (nota1+nota2+nota3)/3;
	
	if (promedio >= 3.5){
		printf("El estudiante tiene un promedio de %.1f, por lo que APRUEBA",promedio);
	} else {
		printf("El estudiante tiene un promedio de %.1f, por lo que REPRUEBA",promedio);
		}

	getch();
}
