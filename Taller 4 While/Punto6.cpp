//Santiago Hernandez Diaz 20252578001
/*
6. realizar un algoritmo que calcule la cantidad de números leídos por teclado, y
cuando se digite un número negativo termine el programa y el número negativo no
se tenga en cuenta en la suma
*/

#include <stdio.h>
#include <conio.h>

main(){
	int num;
	int positivo=0;
	
	int i=1;
	while (i==1){
		printf("Digite un numero: ");
		scanf("%d", &num);
		
		if(num>=0){
			positivo++;
		} else {
			i++;
			printf("Ha ingresado un numero negativo, fin del programa. \n");
			}
	}
	
	printf("El numero de numeros leidos por teclado fue %d",positivo);
	getch();
}
