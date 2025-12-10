#include <stdio.h>
#include <conio.h>



void printear_un_hola(int x){
	for(int i=0; i<x; i++){
		printf("Hola");
	}
}


main(){
	int x=23;
	int z=55;
	printear_un_hola(x);
	
	printf("%d",z);
}
