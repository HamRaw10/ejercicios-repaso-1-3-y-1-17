#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int notaprueba1;
	int notaprueba2;
	int notaprueba3;
	int notaprueba4;
	int notatp;
	int promedio;
	
	printf("Ingrese la nota del primer examen: %i", notaprueba1);
	scanf("%i", &notaprueba1);
	
	printf("\nIngrese la nota del segundo examen: %i", notaprueba2);
	scanf("%i", &notaprueba2);
	
	printf("\nIngrese la nota del tercer examen: %i", notaprueba3);
	scanf("%i", &notaprueba3);
	
	printf("\nIngrese la nota del cuarto examen: %i", notaprueba4);
	scanf("%i", &notaprueba4);
	
	printf("\nIngrese la nota del trabajo: %i", notatp);
	scanf("%i", &notatp);
	
	promedio = (notaprueba1 + notaprueba2 + notaprueba3 + notaprueba4+ notatp) / 5;
	
	printf("\nSu promedio es %i, usted aprobo.", promedio);
	return 0;
}
