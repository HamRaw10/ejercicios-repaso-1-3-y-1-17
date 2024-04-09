#include <stdio.h>
#include <stdlib.h>

int main(){
	int seg, min, hora, seg2;
	printf("Ingrese sus segundos: ");
	scanf("%d", &seg);
	
	hora = seg / 3600;
	seg2 = seg % 3600;
	min = seg / 60;
	seg = seg2 % 60;
	
	printf("\nSus horas son %d con %d minutos y %d segundos", hora, min, seg);

	
	return 0;
}
