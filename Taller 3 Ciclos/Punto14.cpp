//Santiago Hernandez Diaz 20252578001
//14. Escribir un programa que calcule la suma de los cuadrados de los 100 primeros números entero

/* Leí el ejercicio mal y pensé que decia que habia que calcular la suma de los cuadrados de los 100 primeros numeros PRIMOS
pero no queria borrar todo lo que hice entonces lo dejo como comentario (abajo esta el ejercicio que si habia que hacer)

#include <stdio.h>
#include <conio.h>

main(){
	int primos_descubiertos = 0;
	int primo_actual = 2;
	int contador = 2;
	int sumatotal = 0;
	while(primos_descubiertos<100){
		contador = 2;
		for(int i=2; i<primo_actual; i++){
			if(primo_actual%i != 0){
				contador++; //Suma solo si el modulo no es 0, osea que no es divisibile por ese numero, si el contador llega a ser igual a primo_actual significa que no es divisible por ningun numero entre 2 y el propio numero.
			} else if(primo_actual%i == 0){
				//printf("%d ESO NO ES PRIMO\n",primo_actual); [volver este comentario una linea de codigo normal para ver los numeros compuestos(no primos)]
				break; //Esta linea solo importa al usuario si se quita el comentario de la anterior, pero igualmente la dejo asi porque hace algunas operaciones menos internamente
				}
		}
		if(contador==primo_actual){
			primos_descubiertos++;
			printf("Numero primo (%d): %d \n",primos_descubiertos,primo_actual);
			sumatotal = sumatotal + (primo_actual*primo_actual);
		}
		primo_actual++;
	}
	printf("\nLa suma de los cuadrados de los primeros 100 numeros primos es: %d",sumatotal);
	
	getch();
}

*/

#include <stdio.h>
#include <conio.h>
main(){
	int sumatotal = 0;
	for(int i=1; i<=100; i++){
		sumatotal = sumatotal + (i*i);
	}
	printf("La suma de los cuadrados de los primeros 100 numeros enteros es: %d",sumatotal);
	getch();
}
