//Punto 2
//Santiago Hernandez Diaz
//20252578001

/*
Hacer un programa que permita calcular y mostrar el jornal mensual de N trabajadores de acuerdo con las siguientes especificaciones:  
a.) Los trabajadores tienen un sueldo mensual y dos turnos si trabaja horas extras (nocturno y/o diurno).                                              
b.)	La tarifa extra por hora diurna es de 1000 pesos adicional al valor de la hora.                                                                        
c.)	La tarifa extra por hora nocturna es de 1300 pesos adicional al valor de la hora. 
d.) Si el trabajador trabajo al mes menos de 12 días, se le paga y se despide.
e.) Cuantos trabajadores fueron despedidos
*/

#include <stdio.h>
#include <conio.h>

main(){
	//general
	int n_trabajadores, valor_hora, jornal;
	int jornal_total=0;
	
	//a)
	int sueldo_mensual=0;
	int horas_trabajadas;
	int horas_diurnas_trabajadas;
	int horas_nocturnas_trabajadas;
	
	//b)
	int tarifa_extra_diurna=0;
	
	//c)
	int tarifa_extra_nocturna=0;
	
	//d)
	int horas_trabajadas_x_mes=0;
	float dias_trabajados=0;
	
	//e)
	int despedidos=0;
	
	printf("Ingrese el numero N de trabajadores: ");
	scanf("%d",&n_trabajadores);
	
	printf("Ingrese el valor de la hora $: ");
	scanf("%d",&valor_hora);
	
	tarifa_extra_diurna=valor_hora+1000; //punto b)
	tarifa_extra_nocturna=valor_hora+1300; //punto c)
	
	int i=1; //Contador para num trabajadores
	while(i<=n_trabajadores){
		horas_trabajadas_x_mes=0;//"reiniciar" las horas trabajadas al mes
		
		printf("\n-------------------------------- \n\n");
		
		printf("Ingrese cuantas horas normales trabajo el trabajador #%d: ", i);
		scanf("%d", &horas_trabajadas);
		printf("Ingrese cuantas horas extras diurnas trabajo el trabajador #%d: ", i);
		scanf("%d", &horas_diurnas_trabajadas);
		printf("Ingrese cuantas horas extras nocturnas trabajo el trabajador #%d: ", i);
		scanf("%d", &horas_nocturnas_trabajadas);
		
		//Total de horas trabajadas en el mes
		horas_trabajadas_x_mes=horas_trabajadas+horas_diurnas_trabajadas+horas_nocturnas_trabajadas;
		
		//Verificar dias trabajados para despedir
		dias_trabajados=float(horas_trabajadas_x_mes)/24; //Como la variable a dividir es INT, se "transforma" a float para poder dividirla
		if(dias_trabajados<12){
			printf("El trabajador #%d trabajo menos de 12 dias este mes (%.2f dias), por lo tanto se le pagara y luego sera DESPEDIDO\n",i,dias_trabajados); //punto d)
			despedidos++;
		}
		
		//Jornal/sueldo de cada trabajador
		jornal=(horas_trabajadas*valor_hora)+(horas_diurnas_trabajadas*tarifa_extra_diurna)+(horas_nocturnas_trabajadas*tarifa_extra_nocturna);
		printf("El jornal/sueldo del trabajador #%d este mes es $%d\n",i,jornal); //punto a)
		
		//Jornal/sueldo de todos los trabajadores
		jornal_total=jornal_total+jornal;
		i++;
	}
	
	printf("\n-------------------------------- \n\n");
	
	printf("El jornal mensual total de los %d trabajadores es de $%d\n", n_trabajadores, jornal_total); //punto a)
	printf("Hubo un total de %d trabajadores despedidos\n",despedidos); //punto e)
	
} //corchete del main
