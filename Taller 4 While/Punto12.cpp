//Santiago Hernandez Diaz 20252578001
/*
12. Realizar un programa que digite una serie de números por teclado y diga cuál fue
el mayor y el menor de los números leídos.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int num;
	int menor;
	int mayor;
	
	printf("Digite la cantidad de numeros que va a ingresar: ");
	scanf("%d", &n);
	
	printf("Digite el numero #1: ");
	scanf("%d", &num);
	menor=num;
	mayor=num;
	
	int i=2;
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
	printf("El menor de los numeros ingresados fue %d \n", menor);
	printf("El mayor de los numeros ingresados fue %d", mayor);
	getch();
}
