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
	for(int i=0; i<=255; i++){
		color(i);
		printf("%d Hola\n",i);
	}
	
	//Solo cambie el numero para probar el commiteo
	
	color(176);
	printf("Helado");
	color(48);
	printf("Frio");
	color(80);
	printf("Tibio");
	color(64);
	printf("Caliente");
	color(224);
	printf("Hirviendo");
	
	
	
	
	
	
	getch();
}
