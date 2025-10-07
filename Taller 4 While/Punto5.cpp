//Santiago Hernandez Diaz 20252578001
/*
5. hacer un programa que muestre los 10 primeros números pares
*/

#include <stdio.h>
#include <conio.h>

main(){
	
	int i=1;
	
	while(i<=10){
		printf("(%d) %d \n",i,i*2);
		i++;
	}
	getch();
}
