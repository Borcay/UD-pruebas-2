#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

struct alumno{
	char codigo[30]; //Codigo
	char nombre[30]; //Nombre
	char apellido[30]; //Apellido
	char sexo[1]; //sexo
	char carrera[30]; //Carrera
	int semestre; //Semestre
	char facultad[30]; //Facultad
	};
	
//funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
		int i;
		int estudiantes=1;
		struct alumno Alu[estudiantes];
		
		color(15);
				
		for(int i=0; i<estudiantes; i++){
			color(i+10);
			printf("ESTUDIANTE #%d\n",i+1);
			printf("Digite el codigo: ");
			fflush(stdin);
			gets(Alu[i].codigo);
			printf("Digite el nombre: ");
			fflush(stdin);
			gets(Alu[i].nombre);
			printf("Digite el apellido: ");
			fflush(stdin);
			gets(Alu[i].apellido);
			printf("Digite el sexo: ");
			fflush(stdin);
			gets(Alu[i].sexo);
			printf("Digite la carrera: ");
			fflush(stdin);
			gets(Alu[i].carrera);
			printf("Digite el semestre: ");
			scanf("%d",&Alu[i].semestre);
			printf("Digite la facultad: ");
			fflush(stdin);
			gets(Alu[i].facultad);
			printf("\n");
		}
		
		//Mostrar todos los estudiantes
		for(int i=0; i<estudiantes; i++){
			color(i+10);
			printf("ESTUDIANTE #%d\n",i+1);
			printf("Codigo: %s\n",Alu[i].codigo);
			printf("Nombre: %s\n",Alu[i].nombre);
			printf("Apellido: %s\n",Alu[i].apellido);
			printf("Sexo: %s\n",Alu[i].sexo);
			printf("Carrera: %s\n",Alu[i].carrera);
			printf("Semestre: %d\n",Alu[i].semestre);
			printf("Facultad: %s\n",Alu[i].facultad);
		}
		
		//Cantidades
		int siono=1;
		int n_fem=0;
		int n_masc=0;
		const char *c_fem = "f";
		const char *c_fem2 = "F";
		const char *c_masc = "m";
		const char *c_masc2 = "M";
		
		for(int i=0; i<estudiantes; i++){
			//Mujer
			siono = strcmp(Alu[i].sexo, c_fem);
			if(siono==0){
				n_masc++;
			}
			siono = strcmp(Alu[i].sexo,c_fem2);
			if(siono==0){
				n_fem++;
			} 
			//Hombre
			siono=1;
			siono = strcmp(Alu[i].sexo,c_masc);
			if(siono==0){
				n_masc++;
			}
			siono = strcmp(Alu[i].sexo,c_masc2);
			if(siono==0){
				n_masc++;
			}
		}
		printf("\nLa cantidad de mujeres es: %d",n_fem);
		printf("\nLa cantidad de hombres es: %d",n_masc);
		
		
		
		
		
		
		//Buscar si un codigo existe O NO
		color(10);
		char buscar[15];
		int respuesta=1; //1 en este caso es falso, ya que strcmp devuelve 0
		int estudiante_encontrado=0;
		
		color(15);
		printf("\nIndique el codigo a buscar: ");
		scanf("%s",&buscar);
		
		for(int i=0; i<estudiantes; i++){
			respuesta=strcmp(buscar, Alu[i].codigo);
			if(respuesta==0){
				color(i+10);
				estudiante_encontrado=1;
				printf("ESTUDIANTE #%d\n",i+1);
				printf("Codigo: %s\n",Alu[i].codigo);
				printf("Nombre: %s\n",Alu[i].nombre);
				printf("Apellido: %s\n",Alu[i].apellido);
				printf("Sexo: %s\n",Alu[i].sexo);
				printf("Carrera: %s\n",Alu[i].carrera);
				printf("Semestre: %d\n",Alu[i].semestre);
				printf("Facultad: %s\n",Alu[i].facultad);
			}
		}
		
		if(estudiante_encontrado==0){
			printf("El estudiante no existe");
		}

		
		color(15);
	}
