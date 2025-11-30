//Santiago Hernandez Diaz 20252578001
/*
1. Ingresar n temperaturas a un vector y calcular su media, y que muestre además las temperaturas más altas y más bajas
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int masalta= -100000;
	int masbaja= 100000;
	float media=0;
	
	printf("Ingrese la cantidad n de temperaturas: ");
	scanf("%d",&n);
	
	int v[n];
	
//Ingresar el vector
	for(int i=0; i<=n-1; i++){
		printf("Digite la temperatura #%d: ",i+1);
		scanf("%d",&v[i]);
	}

//Analizar el vector
	for(int i=0; i<=n-1; i++){
		if(masalta<=v[i]){
			masalta=v[i];
		}
		if(masbaja>=v[i]){
			masbaja=v[i];
		}
		
		media=media+v[i];
	}
	media=media/n;
	
	printf("\nLa temperatura mas alta es: %d", masalta);
	printf("\nLa temperatura mas baja es: %d", masbaja);
	printf("\nLa temperatura media es: %g", media);
}
