//Santiago Hernandez Diaz 20252578001
//10. Desarrolle un algoritmo que permita determinar a partir de un n�mero de d�as, ingresado por pantalla,
//�Cu�ntos a�os, meses, semanas y d�as; constituyen el n�mero de d�as proporcionado?

#include <stdio.h>
#include <conio.h>

main(){
	float years, meses, semanas;
	int n_dias;
	years = 0;
	meses = 0;
	semanas = 0;
	
	printf("Digite el numero de dias: ");
	scanf("%d",&n_dias);
	
	years = (float)n_dias/365;
	meses = (float)n_dias/30; //Mas o menos los dias que tiene un mes en general
	semanas = (float)n_dias/7;
	
	printf("%d dias son aproximadamente %.2f a�os \n",n_dias, years);
	printf("%d dias son aproximadamente %.2f meses \n",n_dias, meses);
	printf("%d dias son aproximadamente %.2f semanas \n",n_dias, semanas);
	printf("%d dias son %d dias",n_dias, n_dias);
	getch();
}
