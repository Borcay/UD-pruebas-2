//Santiago Hernandez Diaz 20252578001
/*
7. Realice un programa que determine cuáles son los múltiplos de 5 entre 1 y N.

*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int multiplo_5=0;
	
	printf("Este programa determina cuales son los multiplos de 5 entre 1 y N\n");
	printf("Ingrese N: ");
	scanf("%d", &n);
	
	int i=1;
	while(i<=n){
		if(i%5==0){
			printf("%d es un multiplo de 5 \n",i);
		}
		i++;
	}
	
	
	getch();
}
