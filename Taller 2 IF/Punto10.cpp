//Santiago Hernandez Diaz 20252578001
//10.En una Granja existen N conejos, N1 blancos y N2 negros. Se venden X negros y Y blancos. Hacer un algoritmo que:
//a) Imprima la cantidad de conejos vendida
//b) Si P1 es el precio de venta de los conejos blancos y P2 es el precio de venta de los conejos negros, 
//imprima el monto total de la venta.

//c) Imprima el color de los conejos que se vendieron mas.

#include <stdio.h>
#include <conio.h>

main(){
	int NB,NN,X,Y,P1,P2;
	int P3 = 0;
	int total_vendidos = 0;
	
	printf("Ingrese X: ");
	scanf("%d",&X);
	printf("Ingrese Y: ");
	scanf("%d",&Y);
	printf("Ingrese P1: ");
	scanf("%d",&P1);
	printf("Ingrese P2: ");
	scanf("%d",&P2);
	
	//a)
	total_vendidos = X+Y;
	printf("Un total de %d conejos fueron vendidos \n",total_vendidos);
	
	//b)
	P3 = (P1*Y)+(P1*X);
	printf("El monto total vendido fue de %d$ \n",P3);
	
	//c)
	if(X>Y){
		printf("El color de conejo mas vendido fue el negro, con %d unidades vendidas",X);
		
	} else if(Y>X){
			printf("El color de conejo mas vendido fue el blanco, con %d unidades vendidas",Y);
		} else{
				printf("La cantidad vendida de conejos blancos y conejos negros fue la misma: %d",X);
			}		
	
	getch();
}
