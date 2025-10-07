//Santiago Hernandez Diaz 20252578001
//10. Calcular la media de 10 números introducidos por teclado


#include <stdio.h>
#include <conio.h>

main(){
	
	int n;
	float media = 0;
	
	for(int i=1; i<=10; i++){
		printf("(%d)Digite un numero: ",i);
		scanf("%d",&n);
		
		media = media + n;
	}
	
	media = media/10;
	printf("La media de los 10 numeros introducidos es: %g",media);
	
	getch();
}


