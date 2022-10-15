#include <stdio.h>
#define TAM 3

int main()
{
  int matriz[TAM][TAM];

  // entrada de dados
  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM; j++)
    {
      printf("Digite o valor da linha %d e da coluna %d: \n", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // apresenta a matriz desejada
  puts("A matriz 3x3 com os valores desejados é: \n");
  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM; j++)
      printf("%d ", matriz[i][j]);
    printf("\n");
  }

  // apresenta a diagonal principal
  puts("Os elementos da diagonal principal da matriz acima é: \n");
  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM; j++)
    {
      if (j == i)
      {
        printf("%d ", matriz[i][j]);
      }
    }
  }
  return 0;
}