//Santiago Hernandez Diaz 20252578001
//3. Escribir un programa que visualice los múltiplos de 5 correspondientes entre 24 y 125.

#include <stdio.h>
#include <conio.h>

main(){
	
	printf("Los multipos de 5 entre 24 y 125 son: \n");
	
	for(int i=25; i<=125; i=i+5){
		
		printf("%d\n",i);
		
	}
	
	getch();
}


