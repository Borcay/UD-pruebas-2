//Vector y que en un vector ponga lops pares y en otro los impares

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int par=0;
	int impar=0;
	printf("Ingrese el tamaño n del vector: ");
	scanf("%d",&n);
	
	int v[n]; //Vector a ingresar
	for(int i=0; i<=n-1; i++){
		scanf("%d",&v[i]);
	}
	
	int vpar[n]; 
	int vimpar[n];
	
	for(int i=0; i<=n-1; i++){
		if(v[i]%2 == 0){ //PAR
			vpar[par]=v[i];
			par++;
		}
		
		if(v[i]%2 != 0){ //IMPAR
			vimpar[impar]=v[i];
			impar++;
		}
	}
	
	printf("\nVector de pares: ");
	for(int i=0; i<=par-1; i++){
		printf("%d ",vpar[i]);
	}
	
	printf("\nVector de impares: ");
	for(int i=0; i<=impar-1; i++){
	printf("%d ",vimpar[i]);
	}
	
}
