//Santiago Hernandez Diaz 20252578001
/*
17. Se ingresa la edad y el sexo (f=femenino, m=masculino) de 10 estudiantes del proyecto
curricular de sistematización de datos. Se pide informar;
a. Porcentaje de socios de sexo masculino
b. Cantidad de socios de sexo femenino
c. Sabiendo que los estudiantes son “mayores” cuando la edad es mayor o igual a 21 años.
“Juveniles”, cuando la edad es menor de 21años y mayor a 16 años.
“Sardinos” cuando la edad es menor de 16 años y mayor o igual a 12 años.
Informar: cantidad de estudiantes “mayores“, ”juveniles”y “cadetes”.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int edad;
	int masc=0; //Cantidad de socios de sexo masculino
	int fem=0; //Cantidad de socios de sexo femenino
	int edad_valida=1; //Verifica que la edad ingresada es valida
	int sexo_valido=1; //Veritifca que el sexo ingresado es valido
	int mayores=0; //Numero de estudiantes mayores
	int juveniles=0; //Numero de estudiantes juveniles
	int cadetes=0; //Numero de estudiantes cadetes
	char sexo;
	
	for(int i=1; i<=10; i++){
		edad_valida=1;
		sexo_valido=1;
		
		printf("Digite la edad del estudiante #%d: ",i);
		scanf("%d",&edad);
		
		if(edad>=21){
			mayores++;
		} else if(edad<21 && edad>16){
				juveniles++;
			} else if(edad<=16 && edad>=12){
					cadetes++;
				} else {
					printf("ERROR: La edad ingresada es menor de 12 años, ingrese una edad valida (mayor a 12)\n");
					edad_valida=0;
					i--;
				}
		if(edad_valida==1){
			printf("Digite el sexo del estudiante #%d (f = femenino, m = masculino): ",i);
			scanf(" %c", &sexo);
			
			if(sexo == 'f' || sexo == 'F'){
				printf("El sexo del estudiante #%d es femenino\n\n",i);
				fem++;
			} else if(sexo == 'm' || sexo == 'M'){
				printf("El sexo del estudiante #%d es masculino\n\n",i);
				masc++;
				} else {
					printf("ERROR: El sexo ingresado no es valido\n\n");
					sexo_valido = 0;
					i--;
					}
		}
	}
	
	printf("a)Porcentaje de socios de sexo masculino: %d%% \n",masc*10);
	printf("b)Cantidad de socios de sexo femenino: %d \n\n",fem);
	printf("c)Cantidad de estudiantes \"Mayores\": %d \n",mayores);
	printf("c)Cantidad de estudiantes \"Juveniles\": %d \n",juveniles);
	printf("c)Cantidad de estudiantes \"Cadetes/Sardinos\": %d \n",cadetes);
	
	getch();
}
