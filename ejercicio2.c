#include <stdio.h>
#include <stdlib.h>

int main(){
   int a, b, c;
   int promedio;

    printf("Ingrese el primer valor: %d", a);
    scanf("%d", &a);

    printf("Ingrese el segundo valor: %d", b);
    scanf("%d", &b);

    printf("Ingrese el tercer valor: %d", c);
    scanf("%d", &c);

    promedio = (a + b + c) / 3;
    printf("\nSu promedio es de: %d", promedio);

    return 0;
}

/* Creo 4 variables enteros: int a, b, c, promedio;
  las variables a,b y c las asigna el usuario mediante scanf: scanf("%d", &b);
  la variable promedio la asigno como la suma de las 3 variables dividida 3:  promedio = (a + b + c) / 3;
  Imprimo como salida final la variable de promedio:  printf("\nSu promedio es de: %d", promedio);
*/
