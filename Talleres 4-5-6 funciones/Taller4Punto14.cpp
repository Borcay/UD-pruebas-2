//Santiago Hernandez Diaz 20252578001
//14. Elaborar un algoritmo que permita ingresar 20 números y muestre todos los números menores e iguales a 25.
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
int inicia_en_uno(){
	return 1;
}
bool verdad(int i){
	if(i<=20){
		return true;
	} else{
		return false;
	}
}
void dentro_ciclo(int i){
	int num;
	printf("Digite el numero #%d: ",i);
	scanf("%d",&num);
	if(num<=25){
		color(10);
		printf("%d es menor o igual a 25\n",num);
	}
}
main(){
	int i=inicia_en_uno();
	while(verdad(i)){
		color(15);
		dentro_ciclo(i);
		i++;
	}
}
