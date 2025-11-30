//Santiago Hernandez Diaz 20252578001
/*
15. Una fiesta asisten personas de diferentes edad y sexo. Construya un algoritmo y
dados las edades y sexo de la personas calcule:
	- Cuantas personas asistieron a la fiesta
	-hombre y cuantas mujeres
	-Promedio de las edades por sexo
	-La edad de la persona más joven que asistió
No se permite menores de edad en la fiesta
Ingresar datos hasta que se ingrese su edad igual a cero
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones
void menor(){
	color(12);
	printf("Debes ser mayor de edad para ingresar\n");
}
int jovenzuelo(int edad, int youngest){
	if(edad<=youngest){
		youngest=edad;
	}
	return youngest;
}
resultados(int n_asistido, int fem, int masc, float promedio_fem, float promedio_masc, int youngest){
	color(11);
	if(youngest!=1000){
		printf("El numero de personas que asistieron fue: %d \n", n_asistido);
		printf("La cantidad de mujeres que asistieron fue: %d \n", fem);
		printf("La cantidad de hombres que asistieron fue: %d \n", masc);
		printf("La edad promedio de las mujeres fue: %g \n", promedio_fem/float(fem));
		printf("La edad promedio de los hombres fue: %g \n", promedio_masc/float(masc));
		printf("La persona mas joven que asistio tenia %d", youngest); 
	} else{
		printf("No asistio nadie :,(");
	}
}
main(){
	char sexo;
	int edad;
	int n_asistido=0;
	int fem=0;
	int masc=0;
	float promedio_fem=0;
	float promedio_masc=0;
	int youngest = 1000; //Persona mas joven
	
	while(1){
		//EDAD
		color(15);
		int EDAD_VALIDA=0;
		printf("Ingrese la edad de la persona #%d: ",n_asistido+1);	
		scanf("%d", &edad);
		
		if(edad==0){
			color(8);
			printf("\nFIN DEL PROGRAMA \n");
			break;
		}
		
		if(edad<18){ //NO MENORES
			menor();
		} else{	//Mayores
				n_asistido++;
				EDAD_VALIDA=1;
			}
		
		//SEXO
		if(EDAD_VALIDA==1){
			printf("Ingrese el sexo de la persona #%d (f = mujer | m = hombre): ",n_asistido);
			scanf(" %c", &sexo);
		
			if(sexo == 'f' || sexo == 'F'){
				//MUJER
				promedio_fem+=edad;
				fem++;
				youngest=jovenzuelo(edad,youngest);
			} else if(sexo == 'm' || sexo == 'M'){
					//HOMBRE
					promedio_masc+=edad;
					masc++;
					youngest=jovenzuelo(edad,youngest);
				} else{
						color(12);
						printf("ERROR: La respuesta ingresada es invalida\n");
						n_asistido--;
					}
		}
	}
	resultados(n_asistido, fem, masc, promedio_fem, promedio_masc, youngest);
}
