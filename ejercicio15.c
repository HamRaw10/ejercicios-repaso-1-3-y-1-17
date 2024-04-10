#include <stdio.h>
#include <stdlib.h>

int main(){
	double hombres, mujeres, total, porcentaje, porcentajehom, porcentajemuj;
	printf("Ingrese la cantidad de varones en el aula: ");
	scanf("%lf", &hombres);
	
	printf("\nIngrese la cantidad de mujeres en el aula: ");
	scanf("%lf", &mujeres);
	
	total = mujeres + hombres;
	porcentajehom = 100 / total * hombres;
	porcentajemuj = 100 / total * mujeres;
	printf("\nEn el aula hay %.2f%% de hombres y %.2f%% de mujeres", porcentajehom, porcentajemuj);
	
	
	return 0;
}
