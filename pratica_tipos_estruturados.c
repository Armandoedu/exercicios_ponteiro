#include<stdio.h>
#include<stdlib.h>


typedef struct aluno
{
    int mat;
    char nome[81];
    float notas[3];
    float media;
}Aluno;

typedef struct turma
{
    char id;
    int vagas;
    Aluno aluno[3];
}Turma;

void criar_turmas(Turma *turmas, int i){
    printf("Criando Turma...\n");
    printf("Digite o ID da turma: ");
    scanf(" %c", &turmas[i].id);
    printf("Turma Criada\n");
}

void listar_turmas(Turma *turmas, int i){
    int j;
    for (j = 0; j < i; j++)
    {
        printf("Turma: %c vagas: %d\n", turmas[j].id, 3-turmas[j].vagas);
    }
}

void dados_aluno(Turma *alunos, int a){
    int j, i=0, f=0;
    char turma;
    printf("Digite o ID da turma: \n");
    scanf("%s", &turma);
    for (j = 0; j < a; j++)
    {
        if (turma==alunos[j].id)
        {
            f=alunos[j].vagas;
            for ( i = f; i <= f; i++)
            {
                if(alunos[j].vagas<3)
                {
                    printf("Digite o nome do aluno: ");
                    scanf(" %s",(char *) &alunos[j].aluno[i].nome);
                    printf("Digite a matricula: ");
                    scanf("%d", &alunos[j].aluno[i].mat);                   
                    alunos[j].vagas++;
                }else
                {
                    printf("Nao ha mais vagas!\n");
                }
            } 
        }  
    }
    if (turma!=alunos[0].id && turma!=alunos[1].id && turma!=alunos[2].id)
        {
            printf("Turma nao existe!\n");
        }
}

void vagas(Turma *vagas){
    int j;
    for (j = 0; j < 3; j++)
    {
        vagas[j].vagas = 0;
    }
}

void media(Turma *media){
    int j, i, k;
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            media[j].aluno[i].media = 0;
            for (k = 0; k < 3; k++)
            {
                media[j].aluno[i].notas[k] = 0;
            }
        }
    } 
}

void notas(Turma *nota, int a){
    int i, j, f = 0, k;
    char turma;
    printf("Qual o ID da turma: ");
    scanf("%s", &turma);
    for (i = 0; i < a; i++)
    {
        if (turma==nota[i].id)
        {
            f = nota[i].vagas;
            for (k = 0; k < f; k++)
            {
                printf("Informe as notas do aluno: %s\n", (char *) nota[i].aluno[k].nome);
                for (j = 0; j < 3 ; j++)
                {   
                    printf("Informe a nota: ");
                    scanf("%f", &nota[i].aluno[k].notas[j]);
                    nota[i].aluno[k].media = nota[i].aluno[k].media + nota[i].aluno[k].notas[j];       
                }   
            }
        }
    }  
}

void imprimir_aluno(Turma *nota, int a){
    int i, f = 0, k;
    char turma;
    printf("Qual o ID da turma: ");
    scanf("%s", &turma);
    for (i = 0; i < a; i++)
    {
        if (turma==nota[i].id)
        {
            f = nota[i].vagas;
            for (k = 0; k < f; k++)
            {
                printf("aluno: %s\n", (char *) nota[i].aluno[k].nome);
                printf("Nota: %.2f\n", nota[i].aluno[k].media / 3);
                printf("Matricula: %d\n", nota[i].aluno[k].mat);     
            }
        }
    }  
}
int main(){

    int t, i=0, a=0;
    Turma *classe = (Turma *)calloc(3, sizeof(Turma));
    if (classe==NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    vagas(classe);
    media(classe);
    printf("Bem-vindo ao Programa de Gerenciamento de Turmas!\nEste programa gerencia as turmas ofertadas, fornecendo as funcionalidades de matricula, lancamento de notas e listagem de alunos.\n");
    do{
        printf("Menu:\n1 - Criar turmas\n2 - Listar turmas\n3 - Matricular aluno\n4 - Lancar notas\n5 - Listar alunos\n6 - Sair\n");
        scanf("%d", &t);
        if (t==1)
        {
           criar_turmas(classe, i); 
           i ++;
        }else if(t==2){
            listar_turmas(classe, i);
            a++;
        }else if (t==3)
        {
            dados_aluno(classe, i);
        }else if (t==4)
        {
            notas(classe, i);
        }else if (t==5)
        {
            imprimir_aluno(classe, i);      
        }else if (t==6)
        {
            printf("Obrigado por usar este programa!");
        }
    } while (t!=6);
    return 0;
}
