#include<stdio.h>
#include<stdlib.h>
//defini o enum como meses, colocando os meses do ano com janeiro valendo 1, e assim sucessivamente até dezembro.
typedef enum meses{
    jan=1, fev=2, mar=3, abril=4, maio=5, jun=6, jul=7, ago=8, set=9, out=10, nov=11, dez=12
}Meses;
//defini a struct como data, colocando as variaveis dia, data e mes do tipo Meses levando à enum.
typedef struct data
{
    int dia;
    int ano;
    Meses mes;
}Data;
/*no escopo criei uma variável do tipo Data para a variável poder acessar a struct
Pedi ao usuário para me informar o dia, o mês e o ano.
A variável mes vai acessar o enum
*/
int main(){
    Data data;
    printf("Qual o dia: ");
    scanf("%d", &data.dia);
    printf("Qual o mes:\nDigite o numero do mes\n");
    scanf("%d",(int*) &data.mes);
    printf("Qual o ano: ");
    scanf("%d", &data.ano);
/*O switch vai servir para acessar o enum e da o mês correto para o usuário.
No final vai mstrar o dia, mês e ano no formato dd/mm/aa*/
    switch (data.mes)
    {
    case 1:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 2:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 3:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 4:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 5:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 6:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 7:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 8:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 9:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 10:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 11:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    case 12:
        printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
        break;
    default: printf("data inexistente!");
        break;
    }
    return 0;
}