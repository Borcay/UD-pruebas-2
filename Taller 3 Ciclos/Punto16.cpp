//Santiago Hernandez Diaz 20252578001
//16. Realizar un programa que lea 5 números reales y solo muestre su parte entera

#include <stdio.h>
#include <conio.h>

main(){
	float n;
	int cortado;
	
	for(int i=1; i<=5; i++){
		printf("(%d)Ingrese un numero real: ",i);
		scanf("%f",&n);
		
		cortado= int(n);
		printf("Parte entera: %d \n",cortado);
	}
	
	getch();
}


