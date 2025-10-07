//Santiago Hernandez Diaz
//20252578001

/*Dado N notas de cada M materias de E estudiantes, calcular:   
   a) Cuantas notas tiene aprobadas y desaprobadas cada estudiante.	                      
   b) El promedio de notas del estudiante por materia.   	
   c) Cuantos estudiantes  pasaron y cuantos no pasaron el curso(se pierde el curso si pierde 3 materias) 
	 d) promedio del curso.
*/

#include <stdio.h>
#include <conio.h>

main(){
	
	//general
	int n_notas, m_materias, e_estudiantes, nota;
	
	//a)
	int notas_aprobadas=0;
	int notas_desaprobadas=0;
	
	//b)
	float promedio_x_materia=0;
	
	//c)
	int materia_aprobada=0;
	int materia_desaprobada=0;
	int estudiante_aprobado=0;
	int estudiante_desaprobado=0;
	
	//d)
	float promedio_estudiante=0;
	float promedio_curso=0;


	//Contadores de los while
	int i=1; //Estudiantes
	int j=1; //Materias
	int k=1; //Notas
	
	printf("Digite el numero E de estudiantes: ");
	scanf("%d", &e_estudiantes);
	
	printf("Digite el numero M de materias: ");
	scanf("%d", &m_materias); 
	
	printf("Digite el numero N de notas: ");
	scanf("%d", &n_notas);


	while(i<=e_estudiantes){
		j=1; //"reiniciar" num de materias
		materia_aprobada=0; //"reiniciar" materias aprobadas
		materia_desaprobada=0; //"reiniciar" materias aprobadas
		notas_aprobadas=0; //"reiniciar" num de notas aprobadas
		notas_desaprobadas=0; //"reiniciar" num de notas desaprobadas
		promedio_estudiante=0; //"reiniciar" promedio del estudiante
		
		printf("\n-------------------------------- \n\n");
		printf("Estudiante #%d \n",i);
		
		while(j<=m_materias){
			k=1; //"reiniciar" num de notas
			
			promedio_x_materia=0; //"reiniciar" promedio de la materia
			
			printf("Materia #%d \n",j);
			
			while(k<=n_notas){
				
				//Capturar nota
				printf("Nota #%d: ",k);
				scanf("%d", &nota);
				
				//Verificar aprobacion de nota
				if(nota>=3){
					//Nota individual aprobada
					notas_aprobadas++;
				} else{
						//Nota individual desaprobada
						notas_desaprobadas++;
					}
				
				promedio_x_materia=promedio_x_materia+nota; //Ir sumando las notas al promedio
				k++; //Contador de NOTAS
			}
			promedio_x_materia=promedio_x_materia/n_notas; //Dividir promedio sobre la cantidad de notas
			printf("El promedio de la materia #%d es %.2f \n\n",j,promedio_x_materia); //punto b)
			
			//Verificar aprobación de materia
			if(promedio_x_materia>=3){
				materia_aprobada++;
			} else {
					materia_desaprobada++;
				}
				
			promedio_estudiante=promedio_estudiante+promedio_x_materia;
				
			j++; //Contador de MATERIAS
		}
		
		printf("El estudiante #%d tiene %d notas aprobadas y %d notas desaprobadas \n",i,notas_aprobadas,notas_desaprobadas); //punto a)
	
		//Verificar si el estudiante no pasa (o si)
		//Pierde con 3 materias desaprobadas
		if(materia_desaprobada>=3){
			estudiante_desaprobado++;
			printf("El estudiante #%d tiene %d materias aprobadas y %d materias desaprobadas, por lo que PIERDE \n",i,materia_aprobada,materia_desaprobada);
		} else {
					estudiante_aprobado++;
					printf("El estudiante #%d tiene %d materias aprobadas y %d materias desaprobadas, por lo que aprueba \n",i,materia_aprobada,materia_desaprobada);		
			}
			
		//Promedio individual
		promedio_estudiante=promedio_estudiante/m_materias;
		printf("El promedio del estudiante #%d es %.2f \n",i,promedio_estudiante);
		
		promedio_curso=promedio_curso+promedio_estudiante; 
		i++; //Contador de ESTUDIANTES
	}	
	printf("\n-------------------------------- \n\n");
	
	printf("# de estudiantes que pasaron el curso: %d \n",estudiante_aprobado); //punto c)
	printf("# de estudiantes que NO pasaron el curso: %d \n",estudiante_desaprobado); //punto c)
	
	promedio_curso=promedio_curso/e_estudiantes;
	printf("El promedio del curso es de %.2f\n", promedio_curso); //punto d)
	
} //corchete del main
