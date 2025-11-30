//Santiago Hernandez Diaz 20252578001
//12. Realizar un programa que digite una serie de números por teclado y diga cuál fue
//el mayor y el menor de los números leídos.
#include <stdio.h>
#include <conio.h>
//Variables globales
int mayor=0;
int menor=0;

//3 Funciones
int introduccion(){
	int n, num;
	printf("Digite la cantidad N de numeros que va a ingresar: ");
	scanf("%d", &n);
	
	printf("Digite el numero #1: ");
	scanf("%d", &num);
	menor=num;
	mayor=num;
	return n;
}
void n_mayor2(int n){
	int i=2;
	int num;
	while(i<=n){
		printf("Digite el numero #%d: ", i);
		scanf("%d", &num);
		
		if(num>=mayor){
			mayor=num;
		}
		if(num<=menor){
			menor=num;
		}
		i++;
	}	
}
void resultados(int menor, int mayor){
	printf("El menor de los numeros ingresados fue %d \n", menor);
	printf("El mayor de los numeros ingresados fue %d", mayor);
}

main(){
	n_mayor2(introduccion());
	resultados(menor,mayor);
}
