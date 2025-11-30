//Santiago Hernandez Diaz 20252578001
/*5. Seleccionar los elementos de un arreglo X según el siguiente criterio
Si los números están comprendidos entre 0 y 49, ponerlos en el arreglo 1
Si los números están comprendidos entre 50 y 100, ponerlos en el arreglo 2
Si los números son mayores a 101 ponerlos en el arreglo 3 */
#include <stdio.h>
#include <conio.h>
//3 Funciones
void ingresar_arreglo(int *v, int n){
	for(int i=0; i<=n-1; i++){
		printf("Ingrese el dato #%d del arreglo: ",i+1);
		scanf("%d",&v[i]);
	}
}
void ordenar_arreglos(int *v, int *vuno, int *vdos, int *vtres, int n, int *enanos, int *medianos, int *gigantes){
	for(int i=0; i<=n-1; i++){
		//Vector 0-49
		if(v[i]>=0 && v[i]<=49){
			vuno[*enanos] = v[i];
			(*enanos)++;
		}
		//Vector 50-100
		if(v[i]>=50 && v[i]<=100){
			vdos[*medianos] = v[i];
			(*medianos)++;
		}
		//Vector 101+
		if(v[i]>=101){
			vtres[*gigantes] = v[i];
			(*gigantes)++;
		}
	}
}
void mostrar_arreglos(int *vuno, int *vdos, int *vtres, int *enanos, int *medianos, int *gigantes){
	printf("\n\n(Arreglo 1) Entre 0 y 49:\n");
	for(int i=0; i<*enanos; i++)
		printf("%d ", vuno[i]);
	
	printf("\n\n(Arreglo 2) Entre 50 y 100:\n");
	for(int i=0; i<*medianos; i++)
		printf("%d ", vdos[i]);
	
	printf("\n\n(Arreglo 3) Mayores a 100:\n");
	for(int i=0; i<*gigantes; i++)
		printf("%d ", vtres[i]);
}
main(){
	int enanos=0; //0-49
	int medianos=0; //50-100
	int gigantes=0; //101+
	int n;
	printf("Ingrese el tamano n del arreglo: ");
	scanf("%d",&n);
	
	int v[n];
	int vuno[n]; //0-49
	int vdos[n]; //50-100
	int vtres[n]; //101+
	
	ingresar_arreglo(v,n);
	ordenar_arreglos(v,vuno,vdos,vtres,n,&enanos,&medianos,&gigantes);
	mostrar_arreglos(vuno,vdos,vtres,&enanos,&medianos,&gigantes);
}
