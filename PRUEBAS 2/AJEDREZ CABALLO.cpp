//Ajedrez (matriz nxn) hacer el recorrido del caballo hasta que llene todas las posiciones de la matriz

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	color(11);
	printf("Caballo");
}
