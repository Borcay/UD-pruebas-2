//Lea n numeros y sumelos

#include <stdio.h>
#include <conio.h>

main(){
	
	int n, num;
	int suma=0;
	
	printf("Digite la cantidad de numeros que desea sumar (n): ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("Escriba el numero %d: ",i);
		scanf("%d",&num);
		suma=suma+num;
	}
	printf("La suma de los numeros es: %d",suma);
	
	getch();	
}
