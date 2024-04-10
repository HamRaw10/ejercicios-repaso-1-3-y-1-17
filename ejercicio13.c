#include <stdio.h>
#include <stdlib.h>

int main(){
	double compra, descuento;
	
	printf("Ingrese el precio de su compra: ");
	scanf("%lf", &compra);
	
	descuento = compra - (compra * 0.15);
	
	printf("\nSu total de compra con descuento es %.2f", descuento); 
	
	return 0;
}
