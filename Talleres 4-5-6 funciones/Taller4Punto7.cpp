//Santiago Hernandez Diaz 20252578001
//7. Realice un programa que determine cuáles son los múltiplos de 5 entre 1 y N.

#include <stdio.h>
#include <conio.h>

//3 Funciones
void introduccion(){
	printf("Este programa determina cuales son los multiplos de 5 entre 1 y N\n");
	printf("Ingrese N: ");
}
int scanfear(){
	int n;
	scanf("%d", &n);
	return n;
}
void multiplos(int n){
	int i=1;
	while(i<=n){
		if(i%5==0){
			printf("\n%d es un multiplo de 5 ",i);
		}
		i++;
	}
}

main(){
	introduccion();
	multiplos(scanfear());
}
