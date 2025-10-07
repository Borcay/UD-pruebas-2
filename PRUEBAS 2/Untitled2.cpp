//Santiago Hernandez Diaz 20252578001
//Proyecto final v0.01

#include <stdio.h>
#include <conio.h>
#include <windows.h> //Esto es solo para cambiar el color de los printf

void funcion_profesor(){
	int opciones_profesor;
	printf("Hola profesor ejjeje \n");
	printf("1.Adicionar nota \n");
	printf("2.Modificar nota \n");
	printf("3.Eliminar nota \n");
	printf("4.Salir \n");
	scanf("%d", &opciones_profesor);
}

void funcion_estudiante(){
	printf("Hola estudiante ejejej");
}

main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Linea para poder cambiar el color de los printf facilmente mas adelante
	int tipo_usuario;
	
	printf("**********PROGRAMA DE NOTAS**********\n\n");
	printf("Digite el tipo de usuario con el que desea ingresar al programa: \n");
	printf("1.Estudiante\n");
	printf("2.Profesor\n");
	printf("3.Administrador\n");
	printf("4.Salir\n");
	
	
	scanf("%d",&tipo_usuario);
	
	switch(tipo_usuario){
		case 1:
			SetConsoleTextAttribute(hConsole, 1);
			printf("Ha elegido la opcion 1 (Estudiante) \n");
			SetConsoleTextAttribute(hConsole, 7);
			
			funcion_estudiante();
			break;
		case 2:
			printf("Ha elegido la opcion 2 (Profesor) \n");
			funcion_profesor();
			break;
		case 3:
			printf("Ha elegido la opcion 3 (Administrador) \n");
			break;
		case 4:
			printf("Ha elegido la opcion 4 (Salir)");
			return 0;
			break;
		default:
			SetConsoleTextAttribute(hConsole, 12); //Color rojo
			printf("ERROR: Opcion elegida no disponible\n");
			SetConsoleTextAttribute(hConsole, 7); //Color normal
			main(); //Volver al inicio del main
			break;
	}
}




