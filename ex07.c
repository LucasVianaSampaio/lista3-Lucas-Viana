#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main()
{
  srand(time(NULL));
  int num[TAM];
  int i;
  int soma = 0;
  int multi = 1;

  for (i = 0; i < TAM; i++)
  {
    num[i] = rand() % 20;
    soma += num[i];
    multi *= num[i];
  }

  puts("Os números selecionados foram:\n");

  for (i = 0; i < TAM; i++)
  {
    printf("%d\n", num[i]);
  }

  printf("A média aritmérica dos números gerados é: %.2f\n", (float)soma / TAM);
  printf("A média geométrica dos números gerados é: %.2f", pow(multi, 1 / 3));

  return 0;
}