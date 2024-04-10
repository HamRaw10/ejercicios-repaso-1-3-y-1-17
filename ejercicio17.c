#include <stdio.h>
#include <stdlib.h>

int main(){
	double edad, FCM, opcion, peso, porcenpeso;
	printf("Ingrese su edad: ");
	scanf("%lf", &edad);
	printf("\nIngrese su peso: ");
	scanf("%lf", &peso);
	printf("\nElija su genero: (m) 1 o (f) 2 ");
	scanf("%lf", &opcion);
	
	if(opcion == 1){
		porcenpeso = peso * 0.1;
		FCM = ((210 - (0.5 * edad)) - peso * 0.1) + 4;
		printf("Su FCM es: %.2f", FCM);
	}
	else if(opcion == 2){
		porcenpeso = peso * 0.1;
		FCM = ((210 - (0.5 * edad)) - peso * 0.1);
		printf("Su FCM es: %.2f", FCM);
	}
	
	return 0;
}
