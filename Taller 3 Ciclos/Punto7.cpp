//Santiago Hernandez Diaz 20252578001
//7. Realizar un algoritmo que sume 10 números comprendidos entre 25 y 95.

#include <stdio.h>
#include <conio.h>

main(){
	
	int i = 1;
	int n;
	int suma = 0;
	
	while(i<=10){
		
		printf("(%d)Ingrese un numero comprendido entre 25 y 95 para sumar: ",i);
		scanf("%d",&n);
		
		if(n>=25 && n<=95){
			suma=suma+n;
			i++;
		} else{
			printf("Ese numero no esta comprendido entre 25 y 95, ingrese otro.\n\n");
			}
	}
	
	printf("La suma de los 10 numeros es: %d",suma);
	
	getch();
}


