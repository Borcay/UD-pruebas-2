//Santiago Hernandez Diaz 20252578001

//15.Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int suma=0;
	int i=1;
	
	while(i<=10){
		printf("(%d)Digite un numero negativo: ",i);
		scanf("%d",&n);
		
		if(n<0){
			i++;
			suma=suma+n;
		} else{
			printf("ERROR: Ese no es un numero negativo \n");
		}
	}
	
	printf("La suma es: %d",suma);
	getch();
}


