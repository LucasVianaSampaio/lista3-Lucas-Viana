#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 2
#define MX 10

int main()
{
  int matriz[TAM][TAM];
  int x, contador = 0;
  srand(time(NULL));

  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM; j++)
    {
      matriz[i][j] = rand() % MX;
    }
  }

  printf("Digite um número inteiro abaixo: \n");
  scanf("%d", &x);

  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM; j++)
    {
      matriz[i][j] == x ? contador++ : contador;
    }
  }

  for (int i = 0; i < TAM; i++)
  {
    printf("| ");
    for (int j = 0; j < TAM; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("|\n");
  }

  printf("O número de vezes que o valor digitado aparece na matriz acima é: %d", contador);

  return 0;
}