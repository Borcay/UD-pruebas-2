
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

//Funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

struct fecha_ingreso{
	int dia;
	int mes;
	int anno;
};

struct materia{
	char nombre[30];
	float nota;
};

struct alumno{
	char codigo[30]; 
	char nombre[30]; 
	char apellido[30]; 
	char sexo[1]; 
	struct fecha_ingreso FI;
	char carrera[30];
	int semestre; 
	char facultad[30];
	};

main(){
	struct alumno Alu; //"Inicializacion"
	color(15);
}
