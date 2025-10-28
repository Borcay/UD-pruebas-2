//Santiago Hernandez Diaz 20252578001
//4. Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una
//compra de un artículo determinado, del que se adquieren una o varias unidades. 
//El IVA es del 19% y si el precio bruto ( precio venta más IVA) es mayor de $13000 se debe realizar un descuento del 5%.

#include <stdio.h>
#include <conio.h>

main(){
	float precio_art, precio_iva, precio_bruto, descuento;
	int unidades;
	
	printf("Digite el precio del articulo: ");
	scanf("%f",&precio_art);
	
	printf("Digite cuantas unidades desea comprar: ");
	scanf("%d",&unidades);
	
	precio_iva = (precio_art*unidades)*0.19;
	precio_bruto = precio_iva+(precio_art*unidades);
	
	if(precio_bruto>=13000){
		descuento = precio_bruto*0.05;
		precio_bruto = precio_bruto-descuento;
		printf("El precio que debe pagar incluyendo IVA (19%%), luego de aplicarsele un 5%% de descuento (%g$) es de: %g$",descuento,precio_bruto);
	} else {
		printf("El precio que debe pagar incluyendo IVA (19%%) es de: %f$",precio_bruto);
		
		}
	
	getch();
}
