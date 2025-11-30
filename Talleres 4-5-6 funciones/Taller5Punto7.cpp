//Santiago Hernandez Diaz 20252578001
/*
7.Cargue un vector de 100 (n) elementos. Determine cuál es el valor más pequeño del vector. 
Además, determine si existe algún elemento repetido en el vector; de ser cierto, indique cuantas veces se repite.
Imprima el elemento más pequeño del vector, el elemento que se repite y la cantidad de veces que se repite.
*/

#include <stdio.h>
#include <conio.h>

main(){
	int n;
	int maspequeno;
	int num_repetido;
	int repeticiones=0;
	int serepite=0;

	
	printf("Ingrese el tamamo n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	
	printf("Digite el dato #1 del vector: ");
	scanf("%d",&v[0]);
	
	maspequeno=v[0];
	
//Ingresar el vector
	for(int i=1; i<=n-1; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
	
//Analizar el vector para encontrar el dato mas pequeño
	for(int i=0; i<=n-1; i++)
		if(v[i]<maspequeno){
		maspequeno=v[i];
	}
//Buscar numero repetido si es que existe
	//Clonar vector original
	int vrepetido[n];
	for(int i=0; i<=n-1; i++){
		vrepetido[i]=v[i];
	}
	
	for(int i=0; i<=n-1; i++){ //Aumentar de a i un vector
		serepite=0;
		for(int j=0; j<=n-1; j++){ //Aumentar de a j el otro vector para que ocurran todas las combinaciones entre los vectores
			if(v[i]==vrepetido[j]){ 
				serepite++;
				if(serepite==2){ //Muy importante que esto sea EXACTAMENTE 2 para no aumentar de más las repeticiones
					num_repetido=vrepetido[j];
					repeticiones++;	
				}
				
			}
		}
	}

	
	printf("\nEl numero mas pequeno del vector es: %d", maspequeno);
	
	if(repeticiones!=0){
		printf("\nEl numero %d se repite %d veces en el vector", num_repetido, repeticiones);
	}
}
