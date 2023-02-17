#include <stdio.h>
#include<stdlib.h>

int main(void) {
    //Declarei as variáveis do tipo inteiro A, B, C e D
    int a, b, c, d;
    //Declarei o ponteiro do *p1
    int *p1;
    //Declarei o ponteiro do tipo inteiro *p2 apontando para o endereço de memória da variável A
    int *p2 = &a;
    //Declarei o ponteiro do tipo inteiro *p3 apontando para o endereço de memória da variável C
    int *p3 = &c;
    //O ponteiro p1 esta apontando agora para o ponteiro p2
    p1 = p2;
    //O valor 10 está sendo atribuído ao ponteiro *p2
    *p2 = 10;
    //O valor 20 está sendo atribuído a variável B
    b = 20;
    //Declarei um ponteiro para ponteiro **pp do tipo inteiro
    int **pp;
    //O ponteiro para ponteiro vai apontar para o valor do ponteiro p1
    pp = &p1;
    //O valor do ponteiro p3 vai receber o valor do ponteiro para ponteiro pp
    *p3 = **pp;
    //Declarei um ponteiro *p4 do tipo inteiro e está apontando para o endereço de memória da variável D
    int *p4 = &d;
    //O ponteiro p1 vai ser atribuído mais 1 e vai ser somado com o valor da variável B
    //O valor dessa soma vai ser atribuído ao ponteiro p4
    *p4 = b + (*p1)++;
    //por fim vai mostrar os valores de A, B, C e D
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}