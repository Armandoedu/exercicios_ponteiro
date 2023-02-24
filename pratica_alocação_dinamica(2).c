#include<stdio.h>
#include<stdlib.h>
/*Declarei uma variável para dar a quantidades de questões*/
int main(void){
    int qtd_questoes;
    printf("Quantas questoes: ");
    scanf("%d", &qtd_questoes);
    /*Aloquei dinâmicamente o ponteiro notas no tamanho das questões*/
    float *notas = (float *)malloc(qtd_questoes * sizeof(float));
    if (notas==NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    /*aloquei dinamicamente um ponteiro do tipo char para receber as respostas dos alunos*/
    char *aluno = (char *)malloc(qtd_questoes * sizeof(char));
    if (aluno==NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    /*aloquei dinamicamente um ponteiro do tipo char para receber o gabarito da prova*/    
    char *gabarito = (char *)malloc(qtd_questoes * sizeof(char));
    if (gabarito==NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    int i, j, k, num = 1;
    float ponto = 0, por = 0, aprov = 0;
    /*"for" vai receber no ponteiro gabarito cada as respotas e adicionar na posiçao daquele vetor*/
    for (j = 0; j < qtd_questoes; j++)
    {
        printf("resposta: ");
        scanf(" %s", &gabarito[j]);        
    }
    /*este "for" vai ler as repostas dos alunos e atribuir ao vetor aluno*/
    for (i = 0; i < 10; i++)
    {
        printf("Resposta do aluno %d\n", num);
        for (k = 0; k < qtd_questoes; k++)
        {
            scanf(" %s", &aluno[k]);
            if (gabarito[k]==aluno[k])
            {
    /*se o gabarito do aluno for igual a do professor o ponto vai receber mais 1*/
                ponto ++;
            }
        }
    /*notas vai atribuir as medias de cada aluno, multiplicando os pontos vezes 10 e dividindo por 100*/
        notas[i]=(ponto*10)/qtd_questoes;
        if (notas[i]>=6)
        {
        /*Se a media for maior que 6 aprov vai receber mais 1*/
            aprov++;
        }
        num++;
        /*ponto vai inicializar com zero para o próximo aluno*/
        ponto = 0;
    }
    num = 1;
    /*"for" vai ser mostrada*/
    for (i = 0; i < 10; i++)
    {
        printf("nota do aluno %d - %.2f\n", num, notas[i]);
        num ++;
    }
    /*por vai receber a porcetagem de alunos, aprov vai ser multiplicado por 100 e dividido por 10
    e vai ser mostrado no printf*/
    por = (aprov*100)/10;
    printf("Porcentagem de aprovados: %.2f%%", por);
    /*cada um dos ponteiros vão liberar a memorias em que foram alocadas*/  
    free(gabarito);
    free(aluno);
    free(notas);
    return 0;
}
