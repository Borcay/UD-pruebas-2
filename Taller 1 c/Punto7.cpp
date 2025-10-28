//Santiago Hernandez Diaz 20252578001
//7. Realizar un algoritmo que determine el pago a realizar por la entrada a un 
//espectáculo donde se pueden comprar sólo hasta cuatro entradas, donde al costo 
//de dos entradas se les descuenta el 10%, de tres entradas el 15% y por la compra de 
//cuatro tickets se le descuenta el 20 %.

#include <stdio.h>
#include <conio.h>

main(){
	float Costo,Pago;
	int N_entradas;
	
	printf("Digite el costo por entrada sin descuento: ");
	scanf("%f",&Costo);
	
	printf("Digite la cantidad de entradas que desea comprar (maximo 4): ");
	scanf("%d",&N_entradas);
	
	switch(N_entradas){
		case 1:
			Pago = Costo*N_entradas;
			printf("El costo de su entrada es de: %.2f$",Pago);
			break;
		case 2:
			Pago = (Costo*N_entradas)*0.9;
			printf("El costo de sus 2 entradas luego de aplicarsele el 10%% de descuento es de: %.2f$",Pago);
			break;
		case 3:
			Pago = (Costo*N_entradas)*0.85;
			printf("El costo de sus 3 entradas luego de aplicarsele el 15%% de descuento es de: %.2f$",Pago);
			break;
		case 4:
			Pago = (Costo*N_entradas)*0.8;
			printf("El costo de sus 4 entradas luego de aplicarsele el 20%% de descuento es de: %.2f$",Pago);
			break;
		default:
			printf("\n ERROR: Debe comprar al menos 1 entrada, y un maximo 4"); 
			break;
	}
	
	getch();
}
