#include <stdio.h>
#include <conio.h>

main()
{
	int a,b;
	printf("Digite los numeros: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{	
		printf("El numero mayor es: %d", a);
	}
	else
	{
		printf("El numero mayor es: %d", b);
	}
}
