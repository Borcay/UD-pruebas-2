//UNFAIR FLIPS TESTER

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Para cambiar color
	int r;
	int chance=0;
	int simulacion=1;
	int n_simulaciones=0;
	
	srand(time(0)); // inicializa la semilla aleatoria
	
	printf("Ingrese el porcentaje de HEADS con el que desea jugar (1-99): ");
	scanf("%d",&chance);
	
	printf("Ingrese el numero de simulaciones deseadas: ");
	scanf("%d",&n_simulaciones);
	
	inicio:   // etiqueta
	int heads=0;
	int tails=0;
	int racha2=0;
	int racha3=0;
	int racha4=0;
	int racha5=0;
	int racha6=0;
	int racha7=0;
	int racha8=0;
	int racha9=0;
	int heads_racha=0;
	int tails_racha=0;
	int tails_rachaMAX=0;
	int giros_totales=0;
	int bad_ending=0;
	
	if(simulacion<=n_simulaciones){
		SetConsoleTextAttribute(hConsole, 13); //Magenta claro
		printf("\n\nGirando la moneda #%d", simulacion);
			for (int i = 0; i < 5; i++) {
				printf(".");
		    	Sleep(200); 
			}
		printf("\n");
	}


	while(simulacion<=n_simulaciones){
		if(heads_racha==9){
			SetConsoleTextAttribute(hConsole, 15); // Blanco brillante
			
			r=rand() % 10; //Numero entre 0 y 10
			if(r==0){
				
				SetConsoleTextAttribute(hConsole, 10); // Verde claro
				printf("\nGANASTE CON %d%% DE HEADS, YIIIPI \n",chance);
				
				SetConsoleTextAttribute(hConsole, 15); // Blanco brillante
				printf("Giros totales: %d\n",giros_totales);
				printf("Tiempo en minutos: %.2f\n", float(giros_totales)/60);
				
				if((float(giros_totales)/3600)>=1){
					printf("Tiempo en horas: %.2f\n", float(giros_totales)/3600);
					if(((float(giros_totales)/3600)/24)>=1){
						printf("Tiempo en dias: %.2f\n", (float(giros_totales)/3600)/24);
						if((((float(giros_totales)/3600)/24)/365)>=1){
							printf("Tiempo en anios: %.2f\n", ((float(giros_totales)/3600)/24)/365);
						}
					}
				}
				
				printf("\nVeces que se llego a 9 de racha: %d",racha9);
				printf("\nVeces que se llego a 8 de racha: %d",racha8);
				printf("\nVeces que se llego a 7 de racha: %d",racha7);
				printf("\nVeces que se llego a 6 de racha: %d",racha6);
				printf("\nVeces que se llego a 5 de racha: %d",racha5);
				printf("\nVeces que se llego a 4 de racha: %d",racha4);
				printf("\nVeces que se llego a 3 de racha: %d",racha3);
				printf("\nVeces que se llego a 2 de racha: %d",racha2);
				printf("\nVeces que salio Heads: %d", heads);
				printf("\nVeces que salio Tails: %d", tails);
				printf("\nMayor racha de tails: %d", tails_rachaMAX);
				simulacion++;
				goto inicio;
			}
			SetConsoleTextAttribute(hConsole, 6); // Blanco brillante
			if(r==1){
				bad_ending++;
				printf("(#%d)La moneda... EXPLOTA\n",bad_ending);
				heads_racha=0;
			}
			if(r==2){
				bad_ending++;
				printf("(#%d)La moneda... cae en TAILS\n",bad_ending);
				heads_racha=0;
			}
			if(r==3){
				bad_ending++;
				printf("(#%d)La moneda... nunca cae\n",bad_ending);
				heads_racha=0;
			}
			if(r==4){
				bad_ending++;
				printf("(#%d)La moneda... hace una referencia que no entiendes\n",bad_ending);
				heads_racha=0;
			}
			if(r==5){
				bad_ending++;
				printf("(#%d)La moneda... cae de lado y se cae de la mesa rodando\n",bad_ending);
				heads_racha=0;
			}
			if(r==6){
				bad_ending++;
				printf("(#%d)La moneda... se derrite\n",bad_ending);
				heads_racha=0;
			}
			if(r==7){
				bad_ending++;
				printf("(#%d)La moneda... es comida por el oso de atras\n",bad_ending);
				heads_racha=0;
			}
			if(r==8){
				bad_ending++;
				printf("(#%d)La moneda... nunca tuvo HEADS ni TAILS, todo fue un suenio\n",bad_ending);
				heads_racha=0;
			}
			if(r==9){
				bad_ending++;
				printf("(#%d)La moneda... era una mentira\n",bad_ending);
				heads_racha=0;	
			}
		}
	
		giros_totales++;
		r=rand() % 100;
		
		//Heads
		if(r<=chance-1){
			heads++;
			heads_racha++;
			tails_racha=0;
			
			if(heads_racha==9){
				racha9++;
			}
			if(heads_racha==8){
				racha8++;
			}	
			if(heads_racha==7){
				racha7++;
			}
			if(heads_racha==6){
				racha6++;
			}
			if(heads_racha==5){
				racha5++;
			}	
			if(heads_racha==4){
				racha4++;
			}
			if(heads_racha==3){
				racha3++;
			}
			if(heads_racha==2){
				racha2++;
			}	
		} 
		
		//Tails
		if(r>chance-1){
			tails++;
			tails_racha++;
			heads_racha=0;
			if(tails_rachaMAX<tails_racha){
				tails_rachaMAX=tails_racha;
			}
		}
	}
}
