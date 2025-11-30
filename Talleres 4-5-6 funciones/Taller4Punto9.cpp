//Santiago Hernandez Diaz 20252578001
//9.hacer un programa que muestre la tabla de sumar de un numero dado.
#include <stdio.h>
#include <conio.h>
//3 Funciones
int pregunta_inicial(){
	int n;
	printf("Ingrese el numero del que desea ver la tabla de sumar: ");
	scanf("%d", &n);
	return n;
}
void print_linea(int n, int i){
	printf("%d + %d = %d \n",n,i,n+i);
}
void ciclo(int n){
	int i=1;
	while(i<=10){
		print_linea(n,i);
		i++;
	}
}
main(){
	ciclo(pregunta_inicial());
}
