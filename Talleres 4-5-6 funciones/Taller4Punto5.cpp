//Santiago Hernandez Diaz 20252578001
//5. hacer un programa que muestre los 10 primeros números pares

#include <stdio.h>
#include <conio.h>
//3 Funciones
void print(){
	printf("Primeros 10 numeros pares\n");
}
int limite(){
	return 10;
}
int i_por_dos(int i){
	i=i*2;
	return i;
}

main(){
	int i=1;
	print();
	while(i<=limite()){
		printf("(#%d) %d \n",i,i_por_dos(i));
		i++;
	}
}
