#include<stdio.h>
#include<stdlib.h>
/*Primeiro defini a unio e a nomeei como Tipo e dentro delas declarei 3 variáveis do tipo char*/
typedef union tipo
{
    char alimento[30];
    char bebida[30];
    char eletronico[30];
}Tipo;
/*Defini uma struct e a nomeei como produto e declarei dentro dela 3 variáveis
A variável do tipo Tipo, acessa a union*/
typedef struct produto
{
    char nome[30];
    float preco;
    Tipo tipo;
}Produto;
/*No escopo principal declarei a variável do tipp Produto que acessa a struct
Pedi ao usuário para informar o nome do produto, o preço e o tipo do produto
No final vai mostrar o nome, o preço e se o produto é um alimento, uma bebida ou um eletrônico.*/
int main(void){
    Produto produto;

    printf("Qual o nome do produto: ");
    scanf(" %[^\n]s", produto.nome);
    printf("Qual o preço do produto: ");
    scanf("%f", &produto.preco);
    printf("Qual o tipo do produto: ");
    scanf(" %[^\n]s", produto.tipo.alimento);

    printf("Nome: %s\npreco: %f\nTipo: %s\n", produto.nome, produto.preco, produto.tipo.alimento);
    return 0;
}