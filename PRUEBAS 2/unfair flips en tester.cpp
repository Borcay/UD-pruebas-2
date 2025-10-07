//UNFAIR FLIPS TESTER

/* Mejoras todo ideas
-Que las horas salgan tipo 1h 20m, en vez de 1.33
-Hacer un luck factor mas robusto
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

//CHATGEPETEADO:
//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	int r;
	int chance=0;
	int simulacion=1;
	int n_simulaciones=0;
	float giros_esperada_chance=0;
	
	srand(time(0)); // inicializa la semilla aleatoria
	
	printf("--*--Unfair Flips Run Tester 1.2--*--\n\n");
	malchance:
	printf("Ingrese el porcentaje de HEADS con el que desea jugar (1-99): ");
	scanf("%d",&chance);
	
	if(chance<=1 || chance>=100){
		color(4);
		printf("El chance ingreso NO es valido >:(, ingresa un porcentaje VALIDO\n");
		color(15);
		goto malchance;
	}
	
	giros_esperada_chance=1/((pow((float(chance)/100),9))*0.1);
	
	printf("Ingrese el numero de simulaciones deseadas: ");
	scanf("%d",&n_simulaciones);
	
	inicio:   // etiqueta para volver cuando se saque GOOD ENDING
	int heads=0;
	int tails=0;
	int racha[10] = {0}; // índices de 0 a 9
	int heads_racha=0;
	int tails_racha=0;
	int tails_rachaMAX=0;
	int giros_totales=0;
	int bad_ending=0;
	float mitad_giros=0;
	
	if(simulacion<=n_simulaciones){
		color(13); //Magenta claro
		//""Animacion""
		printf("\n\nGirando la moneda #%d", simulacion);
			for (int i = 0; i < 5; i++) {
				printf(".");
		    	Sleep(200); 
			}
		printf("\n");
	}

	while(simulacion<=n_simulaciones){
		if(heads_racha==9){
			r=rand() % 10; //Numero entre 0 y 10
			color(6); // naranja
			switch(r){
				case 0:
					color(10); // Verde claro
					printf("\nGANASTE CON %d%% DE HEADS, YIIIPI \n",chance);
					
					color(15); // Blanco brillante
					printf("Giros totales promedio con %d%% de chance: %g\n",chance,round(giros_esperada_chance)); //round = redondear
					
					if(giros_totales<=giros_esperada_chance*0.5){
						color(10); //verde SUERTUDO
					} else if(giros_totales>giros_esperada_chance*0.5 && giros_totales<giros_esperada_chance*1.5){
							color(15); //blanco OK promedio
						} else{
								color(4); //MALA SUERTE PAPU
							}
					printf("Giros totales: %d\n",giros_totales);
					
					color(9); //azul
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
					
					color(15);//blanco brillante
					for(int uwu=9; uwu>=2; uwu--){
						printf("\nVeces que se llego a %d de racha: %d",uwu,racha[uwu]);
					}
					printf("\nVeces que salio Heads: %d", heads);
					printf("\nVeces que salio Tails: %d", tails);
					printf("\nMayor racha de tails: %d", tails_rachaMAX);
					simulacion++;
					goto inicio;
					break;
					
				case 1:
					bad_ending++;
					printf("(#%d)La moneda... EXPLOTA\n",bad_ending);
					heads_racha=0;
					break;
				case 2:
					bad_ending++;
					printf("(#%d)La moneda... cae en TAILS\n",bad_ending);
					heads_racha=0;
					break;
				case 3:
					bad_ending++;
					printf("(#%d)La moneda... nunca cae\n",bad_ending);
					heads_racha=0;
					break;
				case 4:
					bad_ending++;
					printf("(#%d)La moneda... hace una referencia que no entiendes\n",bad_ending);
					heads_racha=0;
					break;
				case 5:
					bad_ending++;
					printf("(#%d)La moneda... cae de lado y se cae de la mesa rodando\n",bad_ending);
					heads_racha=0;
					break;
				case 6:
					bad_ending++;
					printf("(#%d)La moneda... se derrite\n",bad_ending);
					heads_racha=0;
					break;
				case 7:
					bad_ending++;
					printf("(#%d)La moneda... es comida por el oso de atras\n",bad_ending);
					heads_racha=0;
					break;
				case 8:
					bad_ending++;
					printf("(#%d)La moneda... nunca tuvo HEADS ni TAILS, todo fue un suenio\n",bad_ending);
					heads_racha=0;
					break;
				case 9:
					bad_ending++;
					printf("(#%d)La moneda... era una mentira\n",bad_ending);
					heads_racha=0;	
					break;
			}
		}
	
		giros_totales++;
		r=rand() % 100; //Num de 0 a 99
		
		//Heads
		if(r<=chance-1){
			heads++;
			heads_racha++;
			tails_racha=0;
			
			//Arreglo para guardar las rachas
			if(heads_racha>=2 && heads_racha<=9){
				racha[heads_racha]++;
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
