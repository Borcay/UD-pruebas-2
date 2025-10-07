//Santiago Hernandez Diaz 20252578001
//1. Realizar un programa que muestre los números comprendidos entre 1 y 10 con el ciclopara y mientras que.

#include <stdio.h>
#include <conio.h>

main(){
	
	//For
	printf("Ciclo para / FOR \n");
	
	for(int i=1; i<=10; i++){
		printf("%d \n",i);
	}
	
	
	//While
	printf("Ciclo mientras que / WHILE \n");
	
	int j=1;
	while(j<=10){
		printf("%d \n",j);
		j++;
	}
	
	getch();
}
