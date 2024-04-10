#include <stdio.h>
#include <stdlib.h>

int main(){
	double pesos, dolares, valor;
	printf("Ingrese la cantidad de pesos: ");
	scanf("%lf", &pesos);
	printf("Ingrese la unidad cambiaria: ");
	scanf("%lf", &valor);
	
	dolares = pesos / valor;
	
	printf("\nSu cantidad en dolares es: %.2f", dolares);
	
	return 0;
}


