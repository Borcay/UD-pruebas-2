//Ajedrez (matriz nxn) hacer el recorrido del caballo hasta que llene todas las posiciones de la matriz

//Version 2.48.7
/*Cosas para agregar

-Colorear los menos y más visitados de otro color en el mapa de calor
-Menú para acceder al mapa de calor u otras futuras cosas
-Poder darle a un botón antes de que se calculen los movimientos
-Una opción para poder ver el tablero "en tiempo real" y que se vayan coloreando las casillas en las que pise el caballo 
-Una opción para poder ingresar otro tamaño sin salir del programa (esto es solo meter todo dentro de un while y usar un getch() creo
-Cambiar el sistema de coordenadas (intercambiar i,j en los print tal vez, o explicar como funciona al inicio)
-Poner las coordenadas en el mapa de calor (arriba y a la izquierda)
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //srand para conseguir un numero al azar y que el caballo se mueva al azar
#include <time.h> //Para inicializar el srand con el tiempo del sistema y que sea mas al azar
#include <windows.h> //Color de texto

//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	srand(time(0)); // inicializa la semilla aleatoria
	int eleccion_caballo; //Eleccion random para que el caballo se mueva
	int casillas; // dimension del tablero
	int casillas_llenas=1; //Contador para las casillas por las que pasó el caballo
	int i=0;
	int j=0;
	int movimientos=0;
	
	color(15);
	printf("Este programa hace que un caballo recorra todas las casillas de un tablero de ajedrez nxn (n>=4)");
	printf("\nSeleccione el tamano del tablero: ");
	scanf("%d",&casillas);
	
	while(casillas<4){
		color(12);
		printf("Debido a las limitaciones del movimiento del caballo, tableros menores a 4x4 no son completables.");
		printf("\nPor favor ingrese otro tamano: ");
		scanf("%d",&casillas);
	}
	
	int todas_llenas=casillas*casillas; //Condicion para cerrar el while (n total de casillas del tablero)
	int tablero[casillas][casillas]; //Matriz tablero
	int tablero_calor[casillas][casillas]; //Tablero extra para ver en qué casillas se movió mas el caballo
	
	
//Llenar las matrices de 0's 
	for (int i=0; i<casillas; i++) {
	    for (int j=0; j<casillas; j++) {
	        tablero[i][j]=0;
	        tablero_calor[i][j]=0;
	    }
	}
	
	
//Mostrar tablero
	color(15);
	printf("\nTablero a completar: \n");
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			printf("%d ",tablero[i][j]);
		}	
		printf("\n");
	}
	
	color(10);
	tablero[0][0]=1; //Posicion inicial del caballo
	tablero_calor[0][0]=1;//Posicion inicial del caballo
	printf("\n#Casillas llenas: %d/%d (inicio en 0,0)",casillas_llenas,todas_llenas);
	
	while(casillas_llenas<todas_llenas){
		eleccion_caballo=rand() % 8; //Numero entre 0 y 7
		movimientos++;
		color(12);
		switch(eleccion_caballo){
			//Arriba izquierda
			case 0: //-1i -2j
				if(i-1>=0 && j-2>=0){
					i=i-1;
					j=j-2;
					tablero_calor[i][j]++;
					
					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
					
				}
			break;

			case 1: //-2i -1j
				if(i-2>=0 && j-1>=0){
					i=i-2;
					j=j-1;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Arriba derecha
			case 2: //+1i -2j
				if(i+1<casillas && j-2>=0){
					i=i+1;
					j=j-2;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 3: //+2i -1j
				if(i+2<casillas && j-1>=0){
					i=i+2;
					j=j-1;
					tablero_calor[i][j]++;
	
					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Arriba izquierda
			case 4: //-2i +1j
				if(i-2>=0 && j+1<casillas){
					i=i-2;
					j=j+1;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 5: //-1i +2j
				if(i-1>=0 && j+2<casillas){
					i=i-1;
					j=j+2;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Abajo derecha
			case 6: //+2i +1j
				if(i+2<casillas && j+1<casillas){
					i=i+2;
					j=j+1;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}	
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 7: //+1i +2j
				if(i+1<casillas && j+2<casillas){
					i=i+1;
					j=j+2;
					tablero_calor[i][j]++;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}	
					printf("\nCaballo a %d,%d",i+1,j+1);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
		}
	}
	
	color(11);
	printf("\nTablero completado: \n");
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			printf("%d ",tablero[i][j]);
		}	
		printf("\n");
	}
	
	color(3);
	printf("\nDimension del tablero: %d*%d",casillas,casillas);
	printf("\nCasillas llenadas: %d",casillas_llenas);
	printf("\nMovimientos del caballo: %d", movimientos);
	color(15);
	
	
	
	printf("\n\n-----------Mapa de calor-----------\n");
	
	float p=0; //PROMEDIO, SOLO LE PUSE P PARA FACILITAR if's mas adelante
	int calor_min=casillas_llenas; //un valor muy alto, no se me ocurrió otro para un programa en general
	int calor_max=0; //Tiene que pasar por todas por lo menos 1 vez
	int pos_calor_min[casillas][casillas];
	int pos_calor_max[casillas][casillas];
	
	printf("\nSiguiendo esta escala de colores: ");
	color(176);
	printf(" Helado ");
	color(48);
	printf(" Frio ");
	color(80);
	printf(" Tibio ");
	color(64);
	printf(" Caliente ");
	color(224);
	printf(" Hirviendo ");
	color(0);
	printf(" a\n");
	
//Llenar las matrices de calor min y calor max con 0's
	for (int i=0; i<casillas; i++) {
	    for (int j=0; j<casillas; j++) {
	        pos_calor_min[i][j]=0;
	        pos_calor_max[i][j]=0;
	    }
	}
//Encontrar promedio, calor min, y calor max 
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			p=p+tablero_calor[i][j];
			
			if(calor_min>tablero_calor[i][j]){
				calor_min=tablero_calor[i][j];
			}
			if(calor_max<tablero_calor[i][j]){
				calor_max=tablero_calor[i][j];
			}
		}
	}
//Encontrar posiciones y repetidos de los calores min y max
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			if(calor_min==tablero_calor[i][j]){
				pos_calor_min[i][j]=1;
			}
			if(calor_max==tablero_calor[i][j]){
				pos_calor_max[i][j]=1;
			}
		}
	}
	
	color(15);
	p=p/float(casillas_llenas);
	printf("\nPromedio de visitas del caballo por casilla:");
	color(80);
	printf(" %.2f ",p);
	
	color(0);
	printf(" a");
	
	color(15);
	printf("\nLas casillas menos visitadas (%d visitas) fueron:",calor_min);
		for(int i=0; i<casillas; i++){
			for(int j=0; j<casillas; j++){
				if(pos_calor_min[i][j] == 1 ){
					color(176);
					printf(" %d,%d ",i+1,j+1);		
			}			
		}
	}
	color(0);
	printf(" a");
	
	color(15);
	printf("\nLas casillas mas visitadas (%d visitas) fueron:",calor_max);
		for(int i=0; i<casillas; i++){
			for(int j=0; j<casillas; j++){
				if(pos_calor_max[i][j] == 1 ){
					color(224);
					printf(" %d,%d ",i+1,j+1);		
			}			
		}
	}
	color(0);
	printf(" a\n");
	
	color(15);
	//Mostrar mapa de coordenadas
	/*
	printf("\nCoordenadas:\n");
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			printf("%d,%d ",i+1,j+1);
		}
			printf("\n");
	}
	*/
	
	printf("\n");
	//Mostrar mapa de calor con colores
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			
			if(tablero_calor[i][j]<p/3){ //Helado
				color(176);
				printf("%.2d ",tablero_calor[i][j]);
			} else if(tablero_calor[i][j]>=p/3 && tablero_calor[i][j]<=(2*p)/3){ //Frio
					color(48);
					printf("%.2d ",tablero_calor[i][j]);
				} else if(tablero_calor[i][j]>(2*p)/3 && tablero_calor[i][j]<(3*p)/2){ //Tibio
						color(80);
						printf("%.2d ",tablero_calor[i][j]);
					}else if(tablero_calor[i][j]>=(3*p)/2 && tablero_calor[i][j]<=2*p){ //Caliente
							color(64);
							printf("%.2d ",tablero_calor[i][j]);
						}else if(tablero_calor[i][j]>2*p){ //Hirviendo
								color(224);
								printf("%.2d ",tablero_calor[i][j]);
							}
		}	
		color(0);
		printf(" a");
		printf("\n");
	}
	color(15);
}
