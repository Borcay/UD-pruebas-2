//Santiago Hernandez Diaz 20252578001
/* 5. El dueño de un restaurante entrevista a cinco clientes de su negocio y les pide que
califiquen de 1 a 10 los siguientes aspectos: (1 es pésimo y 10 es excelente)
	* Atención de parte de los empleados
	* Calidad de la comida
	* Justicia del precio (el precio que pagó le parece justo?)
	* Ambiente (muebles cómodos?, música adecuada?, iluminación suficiente?, decoración, etc.)
Escriba un algoritmo que pida las calificaciones de los cinco clientes a cada uno de estos aspectos,
y luego escriba el promedio obtenido en cada uno de ellos. 
La lista debe aparecer ordenada del aspecto mejor calificado al peor calificado. */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Funcion para cambiar color del texto (no cuenta para las 3)
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//3 Funciones (En este caso más)
int califica_atencion(int calificaciones[5][4], float *promedio, int i, int j, int k){
	while(k==0){
		color(15);
		printf("Cliente #%d, califique la atencion por parte de los empleados: ",i+1);
		scanf("%d",&calificaciones[i][j]);
		if(calificaciones[i][j]<1 || calificaciones[i][j]>10){
			color(12);
			printf("La calificacion tiene que estar entre 1 y 10.\n");
		} else{
			k=1;
		}
	}
	promedio[j]+=calificaciones[i][j];
	return k=0;
}
int califica_calidad(int calificaciones[5][4], float *promedio, int i, int j, int k){
	while(k==0){
		color(15);
		printf("Cliente #%d, califique la calidad de la comida: ",i+1);
		scanf("%d",&calificaciones[i][j]);
		if(calificaciones[i][j]<1 || calificaciones[i][j]>10){
			color(12);
			printf("La calificacion tiene que estar entre 1 y 10.\n");
		} else{
			k=1;
		}
	}
	promedio[j]+=calificaciones[i][j];
	return k=0;
}
int califica_precio(int calificaciones[5][4], float *promedio, int i, int j, int k){
	while(k==0){
		color(15);
		printf("Cliente #%d, califique justicia del precio (el precio que pago le parece justo?): ",i+1);
		scanf("%d",&calificaciones[i][j]);
		if(calificaciones[i][j]<1 || calificaciones[i][j]>10){
			color(12);
			printf("La calificacion tiene que estar entre 1 y 10.\n");
		} else{
			k=1;
		}
	}
	promedio[j]+=calificaciones[i][j];
	return k=0;
}
int califica_ambiente(int calificaciones[5][4], float *promedio, int i, int j, int k){
	while(k==0){
	color(15);
		printf("Cliente #%d, califique el ambiente (muebles comodos?, musica adecuada?, iluminacion suficiente?, decoración, etc): ",i+1);
		scanf("%d",&calificaciones[i][j]);
		if(calificaciones[i][j]<1 || calificaciones[i][j]>10){
			color(12);
			printf("La calificacion tiene que estar entre 1 y 10.\n");
		} else{
			k=1;
		}
	}
	promedio[j]+=calificaciones[i][j];
	printf("\n");
	return k=0;
}
void ordenar_calificaciones(float *promedio, int *orden){
	int aux;
	int aux_orden;
	
	for(int i=0; i<4; i++)
		orden[i]=i+1;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			if(promedio[j]<promedio[j+1]){
				aux=promedio[j];
				promedio[j]=promedio[j+1];
				promedio[j+1]=aux;
				
				aux_orden=orden[j];
				orden[j]=orden[j+1];
				orden[j+1]=aux_orden;
			}
		}
	}
}
void mostrar_orden_calificado(float *promedio, int *orden){
	color(10);
	printf("\nMejor calificado");
	color(15);
	for(int i=0; i<4; i++){
		promedio[i]/=5;
		switch(orden[i]){
			case 1: //Atencion
				printf("\nAtencion: %.2f",promedio[i]);
			break;
			case 2: //Calidad
				printf("\nCalidad: %.2f",promedio[i]);
			break;
			case 3: //Precio
				printf("\nPrecio: %.2f",promedio[i]);
			break;
			case 4: //Ambiente
				printf("\nAmbiente: %.2f",promedio[i]);
			break;
		}
	}
	color(12);
	printf("\nPeor calificado");
	color(15);
}
main(){
	int calificaciones[5][4]; //5 Filas (Clientes), 4 Columnas (Aspectos)
	int orden[4];
	int k=0;
	float promedio[4];
	
	for(int i=0; i<4; i++)
		promedio[i]=0;
	
	color(11);
	printf("Calificaciones: 1 es pesimo y 10 es excelente\n");
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			switch(j){
				case 0:
					k=califica_atencion(calificaciones,promedio,i,j,k);
				break;

				case 1:
					k=califica_calidad(calificaciones,promedio,i,j,k);
				break;

				case 2:
					k=califica_precio(calificaciones,promedio,i,j,k);
				break;
				
				case 3:
					k=califica_ambiente(calificaciones,promedio,i,j,k);
				break;	
			}
		}
	}
	ordenar_calificaciones(promedio,orden);
	mostrar_orden_calificado(promedio,orden);
}
