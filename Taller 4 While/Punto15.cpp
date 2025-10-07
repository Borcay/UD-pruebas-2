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

main(){
	char sexo;
	int edad;
	int n_asistido=0;
	int fem=0;
	int masc=0;
	float promedio_fem=0;
	float promedio_masc=0;
	int youngest = 1000; //Persona mas joven
	
	
	int i=1;
	while(i==1){
		int EDAD_VALIDA=0;
		
		//EDAD
		printf("Ingrese la edad de la persona #%d: ",n_asistido+1);	
		scanf("%d", &edad);
		
		if(edad==0){
			printf("\nFIN DEL PROGRAMA \n");
			break;
		}
		
		if(edad<18){
			//NO MENORES
			printf("Debes ser mayor de edad para ingresar\n");
		} else{
				//mayores
				n_asistido++;
				EDAD_VALIDA=1;
			}
		if(edad<=youngest){
			//Hallar persona mas joven
			youngest=edad;
		}
		
		
		//SEXO
		if(EDAD_VALIDA==1){
			printf("Ingrese el sexo de la persona #%d (f = mujer | m = hombre): ",n_asistido);
			scanf(" %c", &sexo);
		
			if(sexo == 'f' || sexo == 'F'){
				//MUJER
				promedio_fem=promedio_fem+edad;
				fem++;
			} else if(sexo == 'm' || sexo == 'M'){
					//HOMBRE
					promedio_masc=promedio_masc+edad;
					masc++;

				} else{
						printf("ERROR: La respuesta ingresada es invalida\n");
						n_asistido--;
					}
		}
		
	}
	printf("El numero de personas que asistieron fue: %d \n", n_asistido);
	printf("La cantidad de mujeres que asistieron fue: %d \n", fem);
	printf("La cantidad de hombres que asistieron fue: %d \n", masc);
	printf("La edad promedio de las mujeres fue: %g \n", promedio_fem/fem);
	printf("La edad promedio de los hombres fue: %g \n", promedio_masc/masc);
	printf("La persona mas joven que asistio tenia %d", youngest);
	getch();
}
