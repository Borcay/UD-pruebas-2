//Santiago Hernandez Diaz 20252578001
//5. Realizar un algoritmo donde se sumen N cantidad de números hasta que el usuario digite el número -99.


#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int suma = 0;
	int i = 0;
	
	while(i<1){
		
		printf("Digite el numero para sumar: ");
		scanf("%d",&n);
		
		if(n ==-99){
			i++;
		} else {
				suma = suma+n;
			}	
	}
	
	printf("\nLa suma total es: %d",suma);
	
	getch();
}


