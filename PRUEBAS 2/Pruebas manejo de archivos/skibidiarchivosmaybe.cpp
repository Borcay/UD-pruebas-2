//Archivos simples (probando todos los comandos)
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

//Funcion para cambiar color del texto
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main(){
	FILE *skibidis; //"Inicializar" skibidi como un pointer de FILE
	char myString[100];
	//skibidi=fopen("Toilet.txt","w"); //"w" de write
	//skibidi=fopen("Toilet.txt","a");
	
	skibidis=fopen("Toileta.txt","w");
	fprintf(skibidis,"ewe");
	fclose(skibidis);
	
	skibidis=fopen("Toileta.txt","r");
	
	if(skibidis == NULL) {
  		printf("Not able to open the file.");
	}
	//fprintf(skibidi,"nyana"); //fprintf reemplaza lo que este escrito
	fgets(myString,100,skibidis);
	
	printf("%s",myString);
	fclose(skibidis);
}
