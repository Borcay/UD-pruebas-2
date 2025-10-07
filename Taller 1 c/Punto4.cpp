//Santiago Hernandez Diaz 20252578001
//4. Una tienda de cable para empacar los royos de cables, hace el pedido al exterior.
//Por cada pedido tiene que suministrar las medidas del largo del cable en pulgadas,
//pero ella normalmente las tiene en metros. Realizar un algoritmo para solucionar el problema, 
//determinando cuantas pulgadas debe pedir con base en los metros que requiere (1 pulg.= 0.0254m).

#include <stdio.h>
#include <conio.h>

main(){
	float Medida_metros,Medida_pulgadas;
	Medida_pulgadas = 0;
	
	printf("Digite la medida que tiene en metros: ");
	scanf("%f",&Medida_metros);
	
	Medida_pulgadas = Medida_metros/0.0254;
	
	printf("La medida en pulgadas que debe pedir es: %f", Medida_pulgadas);
	getch();
	
	
}
