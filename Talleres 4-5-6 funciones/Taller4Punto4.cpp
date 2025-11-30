//Santiago Hernandez Diaz 20252578001
//4. Realizar un algoritmo que imprima los números de 100 a 1.

#include <stdio.h>
#include <conio.h>

//3 Funciones
int i_es_cien(){
	int j=100;
	return j;
}
void printeando(int i){
	printf("%d \n",i);
}
int restarle_a_i(int i){
	i--;
	return i;
}

main(){
	int i=i_es_cien();
	while(i>0){
		printeando(i);
		i=restarle_a_i(i);
	}
}
