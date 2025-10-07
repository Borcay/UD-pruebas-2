//Santiago Hernandez Diaz 20252578001
//14.El promedio de prácticas de un curso se calcula en base a cuatro prácticas calificadas de
//las cuales se elimina la nota menor y se promedian las tres notas más altas. Diseñe un
//algoritmo que determine la nota eliminada y el promedio de las prácticas de un estudiante.

#include <stdio.h>
#include <conio.h>

main(){
	float n1,n2,n3,n4;
	float promedio=0;
	
	printf("Ingrese la primera nota: ");
	scanf("%f",&n1);
	printf("Ingrese la segunda nota: ");
	scanf("%f",&n2);
	printf("Ingrese la tercera nota: ");
	scanf("%f",&n3);
	printf("Ingrese la cuarta nota: ");
	scanf("%f",&n4);
	
	if(n1<n2 && n1<n3 && n1<n4){
		promedio = (n2+n3+n4)/3;
		printf("La nota eliminada fue la primera (%g), y el promedio es: %g",n1,promedio);
	} else if(n2<n1 && n2<n3 && n2<n4){
			promedio = (n1+n3+n4)/3;
			printf("La nota eliminada fue la segunda (%g), y el promedio es: %g",n2,promedio);
		} else if(n3<n1 && n3<n2 && n3<n4){
				promedio = (n1+n2+n4)/3;
				printf("La nota eliminada fue la tercera (%g), y el promedio es: %g",n3,promedio);
			}	else{
				promedio = (n1+n2+n3)/3;
				printf("La nota eliminada fue la cuarta (%g), y el promedio es: %g",n4,promedio);
				}
			
	
	getch();
}
