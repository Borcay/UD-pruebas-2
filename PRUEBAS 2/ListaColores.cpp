//Prueba de colores

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


main(){
	
	//Los 16 Colores de texto disponisbles (Sin cambiar el fondo)
	for(int i=0; i<=15; i++){
		color(i);
		printf("%d Hola\n",i);
	}

	getch();
}
