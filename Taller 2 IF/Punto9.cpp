//Santiago Hernandez Diaz 20252578001
//9.Realizar un algoritmo que lea dos números y los imprima en forma ascendente
#include <stdio.h>
#include <conio.h>

main(){
	int a,b;
	
	printf("Digite el primer numero: ");
	scanf("%d",&a);
	printf("Digite el segundo numero: ");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d %d",b,a);
		
	} else if (a<b){
			printf("%d %d",a,b);
			
		} else {
				printf("%d y %d (Son iguales)",a,b);
			}	
	
	
	getch();
}
