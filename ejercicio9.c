#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int padre; 
    padre = 50; 
    int hijo; 
    hijo = 20;
    int xd;
    xd = 20;
    while(hijo < padre){
        hijo++;
        padre++;
        if(hijo * 2 == padre){
            printf("Dentro de %d años la edad del hijo sera la mitad que la del padre", hijo-xd);
        }
    }
    
    
    return 0;
}
