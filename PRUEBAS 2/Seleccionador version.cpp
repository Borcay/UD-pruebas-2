//Seleccionador de version aleatoria

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //srand para conseguir un numero al azar y que el caballo se mueva al azar
#include <time.h> //Para inicializar el srand con el tiempo del sistema y que sea mas al azar
#include <windows.h> //Color de texto

//funcion para cambiar color del texto
//Version 1.78.1
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	color(15);
	printf("-------------------------Seleccionador de version aleatoria x.xx.x-------------------------");
	printf("\nEste programa selecciona un numero al azar de 2 cifras, y otro numero al azar de 1 cifra");
	printf("\npara ponerle a versiones de proyectos y que se escuchen mas trabajados de lo que realmente son");
	
	srand(time(0)); // inicializa la semilla aleatoria
	int dos_cifras;
	int una_cifra;
	
	una_cifra=1+(rand() % 9); //Numero entre 0 y 8  +1
	dos_cifras=10+(rand() % 90); //Numero entre 0 y 89  +10
	
	printf("\n\n");
	printf("Tu nueva version es: x.%d.%d",dos_cifras,una_cifra);
}
