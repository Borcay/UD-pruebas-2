//Santiago Hernandez Diaz 20252578001
//5. Realizar un algoritmo que lea 5 números por teclado y diga cuantos están comprendidos
// entre 5 y 10, entre 25 y 43, entre 47 y 71.

#include <stdio.h>
#include <conio.h>

main(){
	int n, E5y10, E25y43, E47y71;
	E5y10 = 0;
	E25y43 = 0 ;
	E47y71 = 0;

			
	for(int i = 1; i<=5; i++) {
		
		switch (i){
			case 1:
				printf("Digite el primer numero: ");
				break;
			case 2:
				printf("Digite el segundo numero: ");
				break;
			case 3:
				printf("Digite el tercer numero: ");
				break;
			case 4:
				printf("Digite el cuarto numero: ");
				break;
			case 5:
				printf("Digite el quinto numero: ");
				break;
			default:
				printf("No deberias poder ver esto");
				break;
		}
		
		
		scanf("%d",&n);

		if (n>=5 && n<=10){
			E5y10 = E5y10 + 1;
		} else if (n>=25 && n<=43){
				E25y43 = E25y43 + 1;
			} else if (n>=47 && n<=71){
					E47y71 = E47y71 + 1;
				}	
	}
			
	printf("Numeros entre 5 y 10: %d \n",E5y10);
	printf("Numeros entre 25 y 43: %d \n",E25y43);
	printf("Numeros entre 47 y 71: %d",E47y71);
	
	
	getch();
}
