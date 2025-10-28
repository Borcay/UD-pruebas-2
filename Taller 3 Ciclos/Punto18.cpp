//Santiago Hernandez Diaz 20252578001
/*
18. Dada una lista de 10 números enteros ingresados por teclado decir el mayor, el menor y la
sumatoria de los que se encuentran entre 50 y 200 inclusive.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int num;
	int mayor=0;
	int menor;
	int sumatoria=0;
	
	printf("Ingrese el numero entero #1: ");
		scanf("%d",&num);
		menor=num;
		mayor=num;
		
	for(int i=2; i<=10;i++){
		printf("Ingrese el numero entero #%d: ",i);
		scanf("%d",&num);
		
		if(num>=mayor){
			mayor=num;
		} 
		
		if(num<=menor){
			menor=num;
		}
		
		if(num>=50 && num<=200){
			sumatoria=sumatoria+num;
		}
	}
	
	printf("El numero mayor es: %d \n",mayor);
	printf("El numero menor es: %d \n",menor);
	printf("La sumatoria de los numero que se encuentran entre 50 y 200 es: %d",sumatoria);
	
	getch();
}


