#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    while(a<=87){
        a++;
        b = a - 1;
        c = b - 1;
        if(a+b+c == 87){
            printf("Sus numeros son: %d, %d y %d", a, b, c);
        }
    }
    return 0;
}

/*Creo 3 variables 
int a, b, c;

Hago un loop while que asigne que una variable es menor o igual a 87, y dentro del loop 
sumo la variable a constantemente, y asigno la b como igual a la variable a - 1, y lo mismo con la c
a++;
        b = a - 1;
        c = b - 1;

Dentro del loop while, agrego un if, donde le doy la condicion de que la suma de las 3 variables
que acabo de asignar, son iguales a 87, y luego imprimo la salida de el valor de las 3 variables.
if(a+b+c == 87){
            printf("Sus numeros son: %d, %d y %d", a, b, c);
        }
*/
