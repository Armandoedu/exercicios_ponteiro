#include<stdio.h>
#include<stdlib.h>
/*Primeiro defini uma enum e a nomeei como Genero, contendo dentro dela coloquei a constante Masculino e a constante Feminino
Com masculino valendo 1 e feminino valendo 2*/
typedef enum genero{
    masculino=1,
    feminino=2
}Genero;
/*Defini uma struct e a nomeei como Pessoa
Dentro dela iniciei as variáveis Nome do tipo Char, Idade do tipo Inteiro e Genero do tipo Genero que vai acessar o enum*/
typedef struct pessoa
{
    char nome[50];
    int idade;
    Genero genero;
}Pessoa;
/*No ecopo principal declarei uma variável do tipo pessoa para acessar a struct
Pedi ao usuário para me informar o seu nome, a sua idade e seu genero
Após o usuário informar tudo vai mostrar seus dados*/
int main(void){
    Pessoa pessoa;
    printf("Digite seu nome: ");
    scanf(" %[^\n]s",pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Qual seu genero\nDigite 1) para masculino\nDigite 2) para feminino\n ");
    scanf(" %d", (int*)&pessoa.genero);

    printf("Nome: %s\nIdade: %d\n", pessoa.nome, pessoa.idade);

    pessoa.genero==masculino?printf("Masculino\n"):printf("Feminino");
    return 0;
}