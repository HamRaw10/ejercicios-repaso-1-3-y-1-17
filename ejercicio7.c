#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int h;
    int m;
    
    printf("Ingrese la hora: ");
    scanf("%i", &h);
    printf("\nIngrese el minuto: ");
    scanf("%i", &m);
    
    if(h <= 12 && m < 60){
        printf("Son las %i:%i am", h, m);
    }
    else if(h > 12 && h <= 24 && m < 60){
        printf("Son las %i:%i pm", h, m);
    }
    else if(m >= 60){
        printf("No es una hora disponible");
    }

return 0;
}
