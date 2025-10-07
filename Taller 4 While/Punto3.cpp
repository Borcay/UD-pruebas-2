//Santiago Hernandez Diaz 20252578001
/*
3. Elabore un algoritmo que lea dos enteros positivos y que imprima todos los
números impares entre el menor y el mayor de los números leídos.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int a,b;
	int menor=0;
	int mayor=0;
	
	printf("Ingrese el primer numero entero positivo: ");
	scanf("%d",&a);
	printf("Ingrese el segundo numero entero positivo: ");
	scanf("%d",&b);
	
	
	
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
		return 0;
	}
	
	if(mayor==(menor+2) && mayor%2 != 0 && mayor%2 != 0){
		printf("No hay numeros impares entre estos numeros");
		return 0;
		
	}
	
	for(int i=menor+1; i<mayor; i++){
		
		if (i%2 != 0){
			printf("%d ",i);
		}
	}
	getch();
}
