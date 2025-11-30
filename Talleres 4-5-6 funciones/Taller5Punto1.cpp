//Santiago Hernandez Diaz 20252578001
//1. Ingresar n temperaturas a un vector y calcular su media, y que muestre además las temperaturas más altas y más bajas
#include <stdio.h>
#include <conio.h>
//3 Funciones
void llenar_vector(int *v,int n){
	for(int i=0; i<=n-1; i++){
		printf("Digite la temperatura #%d: ",i+1);
		scanf("%d",&v[i]);
	}
}
int temp_alta(int *v, int i, int mas_alta){
	if(mas_alta<=v[i]){
		return mas_alta=v[i];
	}
	return mas_alta;
}
int temp_baja(int *v, int i, int mas_baja){
	if(mas_baja>=v[i]){
		return mas_baja=v[i];
	}
	return mas_baja;
}

main(){
	int n;
	int mas_alta= -100000;
	int mas_baja= 100000;
	float media=0;
	
	printf("Ingrese la cantidad n de temperaturas: ");
	scanf("%d",&n);
	
	int v[n];
	llenar_vector(v,n);
//Analizar el vector
	for(int i=0; i<=n-1; i++){
		mas_alta=temp_alta(v,i,mas_alta);
		mas_baja=temp_baja(v,i,mas_baja);
		media=media+v[i];
	}
	media=media/n;
	
	printf("\nLa temperatura mas alta es: %d", mas_alta);
	printf("\nLa temperatura mas baja es: %d", mas_baja);
	printf("\nLa temperatura media es: %g", media);
}
