#include <stdio.h>
#include <stdlib.h>

int main(){
	int xd, c;
	printf("Ingrese su numero: ");
	scanf("%d", &xd);
	
	if(xd < 0){
		c = xd - xd - xd;
		printf("Su numero es %d", c);
	}
	else if(xd > 0){
		printf("\nSu numero absoluto es: %d", xd);
	}
	else if(xd == 0){
		printf("\nSu numero absoluto es: %d", xd);
	}
	
	return 0;
}


