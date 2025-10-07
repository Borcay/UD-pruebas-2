//Lea n numeros y sumelos

#include <stdio.h>
#include <conio.h>

main(){
	
	int n, num;
	int suma=0;
	int i=1;
	
	printf("Digite la cantidad de numeros que desea sumar (n): ");
	scanf("%d",&n);
	
	while(i<=n){
		printf("Escriba el numero %d: ",i);
		scanf("%d",&num);
		suma=suma+num;
		i++;
	}
	printf("La suma de los numeros es: %d",suma);
	
	
}
