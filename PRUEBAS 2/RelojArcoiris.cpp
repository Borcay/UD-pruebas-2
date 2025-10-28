#include <windows.h>
#include <stdio.h>
#include <conio.h>

//Función para cambiar el color facilmente
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Reloj arcoiris
int main() {
	int colores=1;
	
	int i=1;
	
	while(i==1){
		system("CLS"); //Limpiar pantalla
	  SYSTEMTIME lt;
	  GetLocalTime(&lt);
	  printf("La hora ahora mismo es: %02d:%02d:%02d del %02d/%02d/%d\n",lt.wHour, lt.wMinute, lt.wSecond,    lt.wDay, lt.wMonth, lt.wYear);
	  
	  color(colores);
	  colores++;
	  if(colores>15){
	  	colores=1;
		}
	  Sleep(1);
  
	}


 
	getch();

}
