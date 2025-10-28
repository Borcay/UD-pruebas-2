//Santiago Hernandez Diaz 20252578001
//15.Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor o
//igual a 150 cm envíe el mensaje: “Persona de altura baja”; si la altura está entre 151 y 170
//escriba el mensaje: “Persona de altura media” y si la altura es mayor al 171 escriba el
//mensaje: “Persona alta”. Exprese el algoritmo usando Pseudocódigo y diagrama de flujos.

#include <stdio.h>
#include <conio.h>

main(){
	int altura;
	
	printf("Ingrese la altura en cm: ");
	scanf("%d",&altura);
	
	if(altura<=150){
		printf("Persona de altura baja");
	} else if(altura>=151 && altura<=170){
		printf("Persona de altura media");
		} else if (altura>=171){
			printf("Persona alta");			
		}
	
	getch();
}
