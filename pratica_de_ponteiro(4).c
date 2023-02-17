#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void calcula_hexagono(float l, float * area, float * perimetro){
    float x, y;
    x = pow(l,2);
    y = sqrt(3);
    *area = (3*x*y)/2;
    *perimetro = 6*l;
}

int main(void){
    float l;
    float *area = (float*)malloc(sizeof(float));
    if (area==NULL)
    {
        printf("ERRO!");
        exit(1);
    }else
    {
        printf("Area alocada com sucesso\n");
    }
    float *perimetro = (float*)malloc(sizeof(float));
    if (perimetro == NULL)
    {
        printf("ERRO!");
        exit(2);
    }else
    {
        printf("Perimetro alocado com sucesso!");
    }
    printf("Digite o tamanho dos lados: ");
    scanf("%f", &l);
    calcula_hexagono(l,area,perimetro);
    printf("Area: %f\nPerimetro: %f", *area, *perimetro);
    return 0;
}