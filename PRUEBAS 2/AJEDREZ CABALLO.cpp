//Ajedrez (matriz nxn) hacer el recorrido del caballo hasta que llene todas las posiciones de la matriz

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
	
	
//Llenarlo con 0s
	for(int i=0; i<casillas; i++){
		for(int j=0; j<casillas; j++){
			tablero[i][j]=0;
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
					
					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
					
				}
			break;

			case 1: //-2i -1j
				if(i-2>=0 && j-1>=0){
					i=i-2;
					j=j-1;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Arriba derecha
			case 2: //+1i -2j
				if(i+1<casillas && j-2>=0){
					i=i+1;
					j=j-2;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 3: //+2i -1j
				if(i+2<casillas && j-1>=0){
					i=i+2;
					j=j-1;
	
					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Arriba izquierda
			case 4: //-2i +1j
				if(i-2>=0 && j+1<casillas){
					i=i-2;
					j=j+1;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 5: //-1i +2j
				if(i-1>=0 && j+2<casillas){
					i=i-1;
					j=j+2;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			//Abajo derecha
			case 6: //+2i +1j
				if(i+2<casillas && j+1<casillas){
					i=i+2;
					j=j+1;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}	
					printf("\nCaballo a %d,%d",i,j);
					printf("\n#Casillas llenas: %d/%d",casillas_llenas,todas_llenas);
				}
			break;
			
			case 7: //+1i +2j
				if(i+1<casillas && j+2<casillas){
					i=i+1;
					j=j+2;

					if(tablero[i][j] != 1){
						tablero[i][j]=1;
						casillas_llenas++;
						color(10);
					}	
					printf("\nCaballo a %d,%d",i,j);
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
}
