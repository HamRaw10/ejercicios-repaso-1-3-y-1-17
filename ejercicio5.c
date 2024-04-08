#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int nota;
	
	printf("Ingrese la nota del primer examen: %i", nota);
	scanf("%i", &nota);

	if(nota > 5 && nota < 8){
	    printf("\nAprobado");
	}
	else if(nota >= 8){
	    printf("\n!Felicitaciones¡");
	}
	if(nota <= 5 && nota > 1){
	    printf("\nDesaprobado");
	}
	else if(nota == 1){
	    printf("\nDebes esforzarte más");
	}
return 0;
}
