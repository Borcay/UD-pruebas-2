//Santiago Hernandez Diaz 20252578001
// 11. Calcular todos los pagos hechos de un restaurant que lea 13 consumos y que si el
// consumo ingresado excede los $130 el descuento será del 15%. 
#include <stdio.h>
#include <conio.h>
//3 Funciones
int scanfear(){
	int consumo;
	printf("Ingrese el consumo: ");
	scanf("%d", &consumo);
	return consumo;
}
float calc_descuento(int consumo){
	float descontado=(float(consumo))*0.85;
	return descontado;
}
	
void descuento(int i, int consumo){
	printf("El pago %d con 15%% de descuento es de %g$ \n",i,calc_descuento(consumo));
}
main(){
	int consumo;
	int i=1;
	while(i<=13){
		consumo=scanfear();
		if(consumo>=130){
			descuento(i, consumo);
		} else {
				printf("El pago %d es de %d$ \n",i,consumo);
			}
		i++;
	}
}
