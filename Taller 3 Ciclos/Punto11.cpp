//Santiago Hernandez Diaz 20252578001
//11. Calcular la media de números enteros introducidos por teclado hasta que se digite elnúmero cero (0).

#include <stdio.h>
#include <conio.h>

main(){
	
	int n;
	int i = 0; // Permite que el While siga hasta que se digite 0
	int j = 1; // El contador para calcular la media
	float suma = 0;
	float media = 0;
	
	printf("Este programa calcula la media de numeros enteros, si desea parar el programa digite 0\n");
	
	while(i<1){
		
		printf("Digite el numero deseado: ");
		scanf("%d",&n);
		
		if(n==0){
			j--;
			media = suma/j;
			printf("\nFIN DEL PROGRAMA: la media total de los numeros ingresados (%d numeros) es: %.2f",j,media);
			i++;
		} else{
				suma = suma+n;
				media= suma/j;
				printf("La media hasta este punto es: %.2f \n",media);
				j++;
			}
	}
	
	getch();
}


