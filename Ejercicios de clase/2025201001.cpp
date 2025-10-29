//Hacer un programa que me lea un vector de n posiciones, me lo ordene y me lo muestre (ambos)
//8 12 9 3 5
//3 5 8 9 12
#include <stdio.h>
#include <conio.h>

main(){
	int n;
	
	printf("Digite el tamaño del vector: ");
	scanf("%d",&n);
	
	int v[n]; //Se declara el vector a ingresar de tamaño n
	int aux; //Variable de apoyo para ordenar el vector
	
	
	for(int i=0; i<=n-1; i++) //Ciclo para llenar el vector
		scanf("%d",&v[i]);
	
	printf("Vector desordenado: "); //Mostrar el vector tal cual como se ingresó
	for(int i=0; i<=n-1; i++)
		printf("%d ",v[i]);
		
		
	for(int i=0; i<=n-1; i++){ //Ciclo con el tamaño del vector 
		for(int j=i+1; j<=n-1; j++){ //j=i+1 empieza en 0
			if(v[i]>v[j]){ //Cambiando > por < se ordenan al revez (mayor a menor)
			
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
				

			}
		}
	}
		
	printf("\nVector ordenado: ");
	for(int i=0; i<=n-1; i++){
		printf("%d ",v[i]);
	}
	
}
