//Santiago Hernandez Diaz 20252578001
/*
6. Desarrollar un algoritmo donde se visualicen N cantidad de números, y el programa le
pregunte al usuario si desea continuar. Si es cierto, continúa visualizando y si no, para la
visualización de los números.
*/

#include <stdio.h>
#include <conio.h>

main(){
	
	int i = 0;
	int n = 1;
	int continuar;
	
	while(i<1){
		
		printf("Desea continuar? (0 = No | 1 = Si): ");
		scanf("%d",&continuar);
		
		if(continuar == 1){
			printf("%d\n",n);
			n++;
		} else if(continuar == 0){
				printf("Fin del programa, numeros mostrados: %d",n-1);
				break; //Sale del ciclo
			} else{
					printf("ERROR: Respuesta no valida, elija 0 o 1\n");
				}
	}
	
	getch();
}


