//Santiago Hernandez Diaz 20252578001
//13. dada N notas, calcular el promedio de las notas aprobadas y el promedio de las notas desaprobadas.
#include <stdio.h>
#include <conio.h>
//3 Funciones
int intro(){
	int n;
	printf("Ingrese el numero N de notas: ");
	scanf("%d", &n);
	printf("Nota para aprobar>=3  \n\n");
	return n;
}
int scanfear(int i){
	int nota;
	printf("Ingrese la nota #%d: ",i);
	scanf("%d", &nota);
	return nota;
}
void resultados(float promedio_a, int aprobadas, float promedio_d, int desaprobadas){
	promedio_a/=float(aprobadas);
	promedio_d/=float(desaprobadas);	
	printf("El promedio de notas aprobadas fue de %g \n",promedio_a);
	printf("El promedio de notas desaprobadas fue de %g",promedio_d);
}
//ASUMIENDO QUE DESAPROBADO ES < 3
main(){
	int nota=0;
	int aprobadas=0;
	int desaprobadas=0;
	float promedio_a=0;
	float promedio_d=0;
	int n=intro();

	int i=1;
	while(i<=n){
		nota=scanfear(i);
		if(nota>=3){
			aprobadas++;
			promedio_a+=nota;
		} else{
			desaprobadas++;
			promedio_d+=nota;
			}
		i++;
	}
	resultados(promedio_a, aprobadas, promedio_d, desaprobadas);
}
