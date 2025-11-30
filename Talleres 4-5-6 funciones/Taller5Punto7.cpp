//Santiago Hernandez Diaz 20252578001
/* 7.Cargue un vector de 100 (n) elementos. Determine cuál es el valor más pequeño del vector. 
Además, determine si existe algún elemento repetido en el vector; de ser cierto, indique cuantas veces se repite.
Imprima el elemento más pequeño del vector, el elemento que se repite y la cantidad de veces que se repite. */
#include <stdio.h>
#include <conio.h>
//3 Funciones
int chiquito(int *v, int n){
	int mas_pequeno=v[0];
	for(int i=0; i<n; i++){
		if(v[i]<mas_pequeno)
			mas_pequeno=v[i];
	}
	return mas_pequeno;
}
int encontrar_repetido(int *v, int *vrepetido, int n, int *repeticiones){
	int num_repetido;
	for(int i=0; i<n; i++){ //Aumentar de a i un vector
		int se_repite=0;
		for(int j=0; j<n; j++){ //Aumentar de a j el otro vector para que ocurran todas las combinaciones entre los vectores
			if(v[i]==vrepetido[j]){ 
				se_repite++;
				if(se_repite==2){ //EXACTAMENTE 2 para no aumentar de más las repeticiones
					num_repetido=vrepetido[j];
					(*repeticiones)++;	
				}
			}
		}
	}
	return num_repetido;
}
void resultados(int *v, int n, int num_repetido, int repeticiones){
	printf("\nEl numero mas pequeno del vector es: %d", chiquito(v,n));
	if(repeticiones!=0)
		printf("\nEl numero %d se repite %d veces en el vector", num_repetido, repeticiones);
	else
		printf("Ningun numero se repite");
}
main(){
	int n;
	printf("Ingrese el tamamo n del vector: ");
	scanf("%d",&n);
	
	int v[n];
	printf("Digite el dato #1 del vector: ");
	scanf("%d",&v[0]);
	
	//Ingresar el vector
	for(int i=1; i<n; i++){
		printf("Digite el dato #%d del vector: ", i+1);
		scanf("%d",&v[i]);
	}
	//Clonar vector original
	int vrepetido[n];
	for(int i=0; i<n; i++)
		vrepetido[i]=v[i];
		
	int repeticiones=0;
	int num_repetido=encontrar_repetido(v,vrepetido,n,&repeticiones);
	resultados(v,n,num_repetido,repeticiones);
}
