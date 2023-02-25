#include <stdio.h>
#include <stdlib.h>

/* nesta função vai imprimir a matriz*/
void imprima(char **matriz, int m, int n) {
  int i, j;
  for (i = 0; i < m; i++) {
    printf("\n");
    for (j = 0; j < n; j++)
      printf("%c ", matriz[i][j]);
  }
  printf("\n");
}
/*nesta função vai receber um caracter e vai repara se x é 1 ou x é 0*/
int Terra(char x){ 
  return (x == '\0' || x == '.') 
    ? 1 : 0; 
} 
/*nesta função vai haver a comparação da matriz passando por cada vetor e vendo onde esta a costa*/
int retornaCosta(char **matriz, int m, int n) {
  int costas = 0, i, j;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (Terra(matriz[i][j]) == 1) 
        continue;
      if (i == 0 || i == m - 1) { 
        costas++; 
        continue;
      }
      if (Terra(matriz[i][j + 1]) == 1 || Terra(matriz[i][j - 1]) == 1 || Terra(matriz[i + 1][j]) == 1 || Terra(matriz[i - 1][j]) == 1) {
        costas++;
      }
    }
  }
  return costas;
}
/*no escopo principal vou pedir a quantidade de linha e de coluna
aloco um ponteiro para ponteiro e apos aloco uma matriz*/
int main(void) {
  int M, N;
  int i, j;
  printf("Defina as linhas: \n"); 
  scanf(" %d", &M);
  printf("Defina as colunas: \n"); 
  scanf(" %d", &N);
  char **matriz = (char **)malloc(M * sizeof(char *)); 
  if (matriz == NULL) {
    printf("ERRO!");
    exit(1);
  }
  for (i = 0; i < M; i++) {
    matriz[i] = (char *)malloc(N * sizeof(char)); 
  }
/*vou pedir cada um dos caracteres da matriz*/
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      scanf(" %c", &matriz[i][j]);
    }
  }
  imprima(matriz, M, N);
  printf("Costas: %i\n", retornaCosta(matriz, M, N));
  /*vou liberar a alocaçao dos vetores e do pponteiro*/
  for (i = 0; i < M; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
