//Santiago Hernandez Diaz 20252578001
//12.Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo
//que los reste y si no que los sume.

#include <stdio.h>
#include <conio.h>

main(){
	int a,b;
	int mult=0;
	int resta=0;
	int suma=0;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&b);
	
	if(a == b){
		mult = a*b;
		printf("La multiplicación de %d y %d es: %d",a,b,mult);
	} else if(a>b){
			resta = a-b;
			printf("La resta entre %d y %d es: %d",a,b,resta);
		} else{
				suma = a+b;
				printf("La suma entre %d y %d es: %d",a,b,suma);
			}
	
	
	getch();
}
