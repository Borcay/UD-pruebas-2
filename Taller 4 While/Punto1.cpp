//Santiago Hernandez Diaz 20252578001
/*
1.Determinar cuántos hombres y cuántas mujeres se encuentran en un grupo de n
personas, suponiendo que los datos son extraídos alumno por alumno
*/

#include <stdio.h>
#include <conio.h>

main(){
	char genero;
	int n;
	int fem=0;
	int masc=0;
	
	int i=1;
	printf("Digite el numero de personas: ");
	scanf("%d",&n);
	while(i<=n){
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
	}
	
	printf("En el grupo de %d personas, hay un total de %d mujeres y %d hombres",n,fem,masc);
	
	getch();
}
