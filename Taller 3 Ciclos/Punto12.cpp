//Santiago Hernandez Diaz 20252578001
/*
12. Escribir un programa que escriba los números comprendidos entre 1 y 1000. El programa
escribirá en la pantalla los números en grupos de 20, solicitando al usuario si quiere o no
continuar visualizando el siguiente grupo de números.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int grupo = 1;
	int eleccion = 1;
	int n = 1; //variable que cuenta el valor inicial de cada grupo de numeros para el ciclo FOR correspondiente
	
	
	while(eleccion!=0 && grupo<=50){
		while(grupo<=50){
			printf("Desea ver el siguiente grupo de 20 numeros? (No = 0 | Si = 1): ");
			scanf("%d",&eleccion);
			printf("\n");
			
			if(eleccion!=0 && eleccion!=1){
				printf("ERROR: Opcion elegida no disponible, por favor elija 0 o 1\n");
				break;
			}
			if(eleccion==0){ 
				printf("FIN DEL PROGRAMA A ELECCION DEL USUARIO");
				break;
			}
			
			//20 numeros
			for(int i=n; i<=(n+19); i++){
				printf("%d ",i);
			}
			n=n+20;
			grupo++;
			printf("\n");
			printf("\n");
		}
		
		
		if(eleccion==1){
			printf("FIN DEL PROGRAMA, SE MOSTRARON TODOS LOS GRUPOS");
		} else if(eleccion==0){
				break;
			}
	}
	
	getch();
}


