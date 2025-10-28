//UNFAIR FLIPS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int r;
	int heads=0;
	int tails=0;
	int heads_racha=0;
	int tails_racha=0;
	int giros_totales=0;
	char tecla;
	
	
	srand(time(0)); // inicializa la semilla aleatoria
	
	printf("Simulador de moneda \n");
	printf("Presiona ESPACIO para lanzar la moneda");
	
	while(1){
		tecla = getch();
		
		if(heads_racha==3){
			printf("GANASTE CON RACHA DE HEADS WUJU");
			printf("Giros totales: %d",giros_totales);
			return 0;
		}
		
		if(tecla == 32){
			giros_totales++;
			r=rand() % 100;
			
			if(r>=50){
				printf("\nHeads\n");
				heads++;
				heads_racha++;
				tails_racha=0;	
			} 
			
			if(r<50){
				printf("\nTails\n");
				tails++;
				tails_racha++;
				heads_racha=0;
			}
		} 
	 }
}
