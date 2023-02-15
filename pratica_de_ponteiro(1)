#include<stdio.h>
#include<stdlib.h>
//O ponteiro vai apontar para o endereço de memoria de y, por enquanto o ponteiro aponta para o valor 0.
//x vai receber o valor do ponteiro, então x é 0 por enquanto.
//x vai receber 4, então agora o valor de x é 4.
//o ponteiro que ainda é 0 vai receber mais 1, e x que o valor é 4 vai diminuir 1.
//Ponteiro soma com x dando o valor final 4.

int main(void){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p)+=x;
        printf("%d", *p);

    return 0;
}
