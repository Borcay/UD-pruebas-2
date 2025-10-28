/*Leer 5 numeros positivos y sumarlos SOLO POSITIVOS
a
b
c
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int suma=0;
	int i=1;
	
	
	while(i<=5){
		
		printf("Digite el numero %d: ",i);
		scanf("%d",&n);
		
		if(n>0){
			suma=suma+n;
			i++;
		} 	
	}
	
	printf("La suma es: %d",suma);
}
