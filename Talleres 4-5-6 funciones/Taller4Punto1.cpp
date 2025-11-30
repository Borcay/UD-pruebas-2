//Santiago Hernandez Diaz 20252578001
/*
1.Determinar cuántos hombres y cuántas mujeres se encuentran en un grupo de n
personas, suponiendo que los datos son extraídos alumno por alumno
*/

#include <stdio.h>
#include <conio.h>

//Variables globales
int fem=0;
int masc=0;

//3 Funciones
int cantidad_personas(){
	int n;
	printf("Digite el numero de personas: ");
	scanf("%d",&n);
	return n;
}

int ciclo(int i){
	char genero;
	printf("(#%d)Escriba el genero de la persona (f = mujer | m = hombre): ",i);
	scanf(" %c",&genero);
	
	if(genero == 'f' || genero == 'F'){
		fem++;
		i++;
	} else if(genero == 'm' || genero == 'M'){
			masc++;
			i++;
		} else {
				printf("ERROR: Respuesta no valida, vuelva a intentarlo \n");	
			}		
	return i;
}

void resultados(int total){
	printf("En el grupo de %d personas, hay un total de %d mujeres y %d hombres",total,fem,masc);
}

main(){
	int n;
	int contador=1; 
	
	n=cantidad_personas();
	while(contador<=n){
		contador=ciclo(contador);
	}
	resultados(n);
}
