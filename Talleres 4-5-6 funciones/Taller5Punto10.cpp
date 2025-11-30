//Santiago Hernandez Diaz 20252578001
/*10. Dado dos vectores A y B de 15(n) elementos cada uno, 
obtener un vector C donde la posición i se almacene la suma de A[i]+B[i]. */
#include <stdio.h>
#include <conio.h>
//3 Funciones
void ingresar_vector(int *v, int n, char letra){
	for(int i=0; i<n; i++){
		printf("Digite el dato #%d del vector %c: ", i+1, letra);
		scanf("%d",&v[i]);
	}
	printf("\n");
}
void sumar_vectores(int *vA, int *vB, int *vC, int n){
	for(int i=0; i<n; i++)
		vC[i]=vA[i]+vB[i];
}
void operar_vectores(int *vA, int *vB, int *vC, int n){
	ingresar_vector(vA,n,'A');
	ingresar_vector(vB,n,'B');
	sumar_vectores(vA,vB,vC,n);
}
main(){
	int n;
	printf("Ingrese el tamamo n de los vectores: ");
	scanf("%d",&n);
	int vA[n];
	int vB[n];
	int vC[n];
	operar_vectores(vA,vB,vC,n);
	
	printf("El vector C es:\n");
	for(int i=0; i<n; i++)
		printf("%d ", vC[i]);
}
