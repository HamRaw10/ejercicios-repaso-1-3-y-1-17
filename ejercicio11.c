#include <stdio.h>
#include <stdlib.h>

int main(){
	int notaprueba1, notaprueba2, notaprueba3, notatrabajo, promedioexam, promedio, notafinal;
	
	printf("Ingrese la calificacion de su primer examen: ");
	scanf("%d", &notaprueba1);
	
	printf("Ingrese la calificacion de su segundo examen: ");
	scanf("%d", &notaprueba2);
	
	printf("Ingrese la calificacion de su tercer examen: ");
	scanf("%d", &notaprueba3);
	
	printf("Ingrese la calificacion de su trabajo grupal: ");
	scanf("%d", &notatrabajo);
	
	promedioexam = (notaprueba1 + notaprueba2 + notaprueba3) / 3;
	
	promedio = (notaprueba1 + notaprueba2 + notaprueba3 + notatrabajo) / 4;
	
	notafinal = (promedioexam * 0.55) + (notatrabajo * 0.30) + (promedio * 0.15);
	
	printf("Su nota final es %d", notafinal);
	
	return 0;
}
