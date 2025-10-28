/*Leer n numeros y decir cuantos estan entre
menores que 0
1 y 30
31 y 60
61 100
mayores a 100
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n,num;
	int E0=0;
	int E1y30=0;
	int E31y60=0;
	int E61y100=0;
	int E100=0;
	
	printf("Digite cuantos numeros va a digitar: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		
		
		
		printf("Digite el numero %d: ",i);
		scanf("%d",&num);
		if(num<0){
			E0++;
		} else if(num>=1 && num<=30){
			E1y30++;
			} else if(num>=31 && num<=60){
				E31y60++;
				} else if (num>61 && num<=100){
					E61y100++;
					} else if(num>100){
						E100++;
						}
	}
	
	printf("Hay %d numeros menores que 0 \n",E0);
	printf("Hay %d numeros entre 1 y 30 \n",E1y30);
	printf("Hay %d numeros entre 31 y 60 \n",E31y60);
	printf("Hay %d numeros entre 61 y */0100 \n",E61y100);
	printf("Hay %d numeros mayores que 100 \n",E100);
	
	
	
}
