#include<stdio.h>
#include<stdlib.h>
/*Declarei uma variavel para armazenar quantas pessoas quer*/
int main(void){
    int pessoas;
    printf("quantas pessoas sao: ");
    scanf("%d", &pessoas);
    /*aloquei dinamicamente o ponteiro sexo do tamanho de pessoas*/
    int *sexo = (int*)malloc(pessoas * sizeof(int));
    if (sexo==NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    /*opinião esta sendo alocado dinâmicamente do tamanho de pessoas*/
    int *opiniao = (int*)malloc(pessoas * sizeof(int));
    if(opiniao==NULL){
        printf("ERRO!\n");
        exit(2);
    }
    /*inicializei o contador e as variaveis com zero*/
    int i;
    int M = 0, F = 0, H = 0, G = 0;
    /*"for" vai passar pelas pessoas
    vai pedir o sexo da pessoa e vai ser armazenado no vetor do ponteiro e a opiniao
    se sexo for igual a 1 e opiniao igual a 2, M vai receber mais 1
    se sexo for igual a 2 e opiniao for igual a 1, F vai receber mais 1
    se sexo igual a 1, H recebe mais 1
    se sexo for igual a 2, G vai receber mais 1*/
    for (i = 0;i<pessoas; i++)
    {
        printf("Qual seu genero:\n1) Masculino\n2) Feminino\n");
        scanf("%d", &sexo[i]);
        printf("Qual sua opiniao sobre o nosso produto:\n1) Gostou\n2) Nao Gostou\n");
        scanf("%d", &opiniao[i]);
        if (sexo[i]==1 && opiniao[i]==2)
        {
            M++;
        }
        if (sexo[i]==2 && opiniao[i]==1)
        {
            F++;
        }
        if (sexo[i]==1)
        {
            H++;
        }
        if(sexo[i]==2){
            G++;
        }
    }
    /*iniciei as variaveis de porcentagem masculino e feminino
    porcentoM vai receber a quantidade de mulheres que gostaram vezes 100 e dividir pela quantidade de mulheres
    porcebtoH vai receber a quantidade de homens que não gostaram vezes 100 e dividir pela quantidades de homens*/
    float porcentoM=0, porcentoH=0;
    porcentoM = (F*100)/G;
    porcentoH = (M*100)/H;
    printf("Quantidade de pessoas: %d\n", pessoas);
    printf("Quantidade do sexo masculino: %d\nQuantidade do sexo feminino: %d\n", H, G);
    printf("Quantidade de mulheres que gostaram: %d\nQuantidade de homens que nao gostaram: %d\n", F, M);
    printf("Porcentagem de homens que nao gostaram: %.2f%%\n", porcentoH);
    printf("Porcentagem de mulheres que gostaram: %.2f%%\n", porcentoM);
    /*o ponteiro sexo e ponteiro opiniao vao liberar o espaço de memoria alocada dinêmicamentee*/
    free(sexo);
    free(opiniao);
    return 0;
}
