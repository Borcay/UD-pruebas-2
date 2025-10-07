//Santiago Hernandez Diaz 20252578001
//11.Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber cuántas
//calorías consume su cuerpo durante todo el tiempo que realice una misma actividad. Las
//actividades que tiene permitido realizar son únicamente dormir o estar sentado en
//reposo. Los datos que tiene son que estando dormido consume 1.08 calorías por minuto y
//estando sentado en reposo consume 1.66 calorías por minuto.

#include <stdio.h>
#include <conio.h>

main(){
	float dormir=0, sentar=0;
	int minutos,actividad;
	
	printf("Que actividad desea realizar? \n 1.Dormir \n 2.Sentarse \n");
	scanf("%d",&actividad);
	
	switch (actividad){
		case 1:
			printf("Ingrese el tiempo que estara haciendo la actividad en minutos: ");
			scanf("%d",&minutos);
			dormir = minutos*1.08;
			
			printf("Durmiendo por %d minutos, quemara aproximadamente %g calorias",minutos,dormir);
			break;
		case 2:
			printf("Ingrese el tiempo que estara haciendo la actividad en minutos: ");
			scanf("%d",&minutos);
			sentar = minutos*1.66;
			
			printf("Sentandose por %d minutos, quemara aproximadamente %g calorias",minutos,sentar);
			break;
		default:
			printf("Esa no es una actividad permitida por su doctor");
			break;
	}
	
	
	
	getch();
}
