#include<stdio.h>
#include<stdlib.h>


typedef struct pessoa 
{
    char nome[50];
    int idade;
    int documento;
}Pessoa;


void dadosdofucionario(Pessoa *p){
    printf("Digite o nome: ");
    scanf(" %[^\n]", &p->nome);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite o numero do documento: ");
    scanf(" %d", &p->documento);
}

void imprimir(Pessoa *f){
    printf("nome do fucionario: %s\nidade: %d\nDocumento: %d\n", f->nome, f->idade, f->documento);
}

void atualizaridade(Pessoa *l){
        printf("Digite sua idade novamente: \n");
        scanf("%d", &l->idade);    
    }
    
void maiormenor(Pessoa *m, int tamanho){
    int maior = 0, menor = 0;
    int i;
    for (i = 0; i < tamanho; i++){

        if (m->idade>maior);
        {
            maior = m->nome;
        }
        if (m->idade<maior)
        {
            menor = m->nome;
        }
        
    }
     
        printf("Faixa etaria dos fucionarios: %s\n%d anos\n",m->nome, m->idade);
     
     
}

int main(void){
    int qtd_de_fucionarios;
    int index, atualizar;

    printf("Qual a quantidade de fucionarios? ");
    scanf("%d", &qtd_de_fucionarios);
    Pessoa fucionario[qtd_de_fucionarios];

    for (index = 0; index < qtd_de_fucionarios; index++)
    {
        dadosdofucionario(&fucionario[index]);
    }
    
    for(index = 0; index < qtd_de_fucionarios; index++){
        printf("deseja atualizar sua idade?\n1) Para sim\n2) Para nao\n");
        scanf("%d", &atualizar);
        if (atualizar==1)
        {
            atualizaridade(&fucionario[index]);
        }
        if (atualizar==2)
        {
            printf("Obrigado!");
        }   
    }
    for (index = 0; index < qtd_de_fucionarios; index++)
    {
        imprimir(&fucionario[index]);
    }
    for (index = 0; index < qtd_de_fucionarios; index++)
    {
        maiormenor(&fucionario[index], qtd_de_fucionarios);
    }
        
 return 0;   

}