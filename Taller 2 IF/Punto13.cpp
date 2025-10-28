//Santiago Hernandez Diaz 20252578001
//13.Diseñe una algoritmo que determine quienes son contemporáneos entre Juan, Mario y Pedro


//Asumiendo que "contemporáneos" se refiere a que tienen la misma edad
#include <stdio.h>
#include <conio.h>

main(){
	int J,M,P;
	
	printf("Ingrese la edad de Juan: ");
	scanf("%d",&J);
	printf("Ingrese la edad de Mario: ");
	scanf("%d",&M);
	printf("Ingrese la edad de Pedro: ");
	scanf("%d",&P);
	
	if(J==P && J==M){
		printf("Juan, Mario y Pedro son contemporaneos");	
	} else if (J==M){
			printf("Juan y Mario son contemporaneos, mientras que Pedro no lo es");	
		} else if(M==P){
				printf("Mario y Pedro son contemporaneos, mientras que Juan no lo es");
				} else if (J==P){
						printf("Juan y Pedro son contemporaneos, mientras que Mario no lo es");
					} else {
						printf("Ni Juan, ni Mario, ni Pedro son contemporaneos");
					}
	
	
	getch();
}
