//Santiago Hernandez Diaz 20252578001
/*
6. realizar un algoritmo que calcule la cantidad de números leídos por teclado, y
cuando se digite un número negativo termine el programa y el número negativo no
se tenga en cuenta en la suma
*/

#include <stdio.h>
#include <conio.h>

//3 Funciones
int scanfear(){
	int num;
	printf("Digite un numero: ");
	scanf("%d", &num);
	return num;
}
void fin_del_programa(){
	printf("Ha ingresado un numero negativo, fin del programa. \n");
}
void resultado(int cantidad_numeros){
	printf("El numero de numeros leidos por teclado fue %d",cantidad_numeros);
}

main(){
	int positivo=0;
	while(1){
		if(scanfear()>=0){
			positivo++;
		} else {
			fin_del_programa();
			break;
			}
	}
	resultado(positivo);
}
