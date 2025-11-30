//Santiago Hernandez Diaz 20252578001
/*
3. Elabore un algoritmo que lea dos enteros positivos y que imprima todos los
números impares entre el menor y el mayor de los números leídos.
*/

#include <stdio.h>
#include <conio.h>

//3 Funciones
int scanfear(){
	int n;
	scanf("%d",&n);
	return n;
}
void printf_final(int menor, int mayor){
	for(int i=menor+1; i<mayor; i++){
		if (i%2 != 0){
			printf("%d ",i);
		}
	}
}

void programa(){
	int a,b;
	int menor;
	int mayor;
	
	printf("Ingrese el primer numero entero positivo: ");
	a=scanfear();
	printf("Ingrese el segundo numero entero positivo: ");
	b=scanfear();
	
	if(a>b){
		mayor=a;
		menor=b;
	} else if(b>a){
			mayor=b;
			menor=a;
		} else if(b==a){
			printf("Los numeros son iguales");
			}
	
	if(mayor==(menor+1)){
		printf("No hay numeros impares entre estos numeros");
	}
	
	if(mayor==(menor+2) && mayor%2 != 0){
		printf("No hay numeros impares entre estos numeros");
	}
	
	printf_final(menor,mayor);
}

main(){
	programa();
}


