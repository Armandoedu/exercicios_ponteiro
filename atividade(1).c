#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
char nome[50];
float salario;
int identificador;
char cargo[50];
}Funcionario;


void imprima(Funcionario *x, int quant){
int c;
for(c=0;c<quant;c++){
    printf("nome: %s\n", x[c].nome);
    printf("salario: %f\n", x[c].salario);
    printf("identificação: %d\n", x[c].identificador);
    printf("cargo:%s\n", x[c].cargo);
}
}
void maior(Funcionario *x, int quant){
int c,j=-1;
float maiors=0;

for(c=0;c<quant;c++){
    if(maiors< x[c].salario){
        maiors=x[c].salario;
    j++;
    }

}

printf("maior salario:%f\n", maiors);
printf("cargo:%s\n", x[j].cargo);
}

void menor(Funcionario *x, int quanto){
int c,j=-1;
float menors=1000000000;
char cargo[50];
for(c=0;c<quanto;c++){
    if(menors> x[c].salario){
        menors=x[c].salario;
      j++;  
    }
}

printf("menor salario:%f\n", menors);
printf("cargo:%s\n", x[j].cargo);
}


int main(void){

int quanf, c;
int mudar;
printf("quantos funcionarios:");
scanf("%d", &quanf);
Funcionario *info=(Funcionario*) malloc(quanf*sizeof(Funcionario));
if (info==NULL){
    printf("erro!");
    exit(1);
}   
for(c=0;c<quanf;c++){
    printf("digite nome:");
    scanf(" %[^\n]", info[c].nome);
    printf("digite salario:");
    scanf("%f", &info[c].salario);
    printf("digite identificador:");
    scanf("%d", &info[c].identificador);
    printf("digite cargo:");
    scanf(" %[^\n]", info[c].cargo);
}

imprima(info, quanf);
maior(info, quanf);
menor(info, quanf);
return 0;
}