#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main()
{
  int vet[TAM], i, maior = 0;
  int menor = 0;
  srand(time(NULL));

  for (i = 0; i < TAM; i++)
  {
    vet[i] = rand() % 100;
  }

  maior = vet[0];
  for (i = 1; i < TAM; i++)
  {
    vet[i] > maior ? maior = vet[i] : vet[i];
  }

  menor = vet[0];
  for (i = 1; i < TAM; i++)
  {
    vet[i] < menor ? menor = vet[i] : vet[i];
  }

  puts("A seguir estão todos os 15 valores:");
  for (i = 0; i < TAM; i++)
  {
    printf("%d\t", vet[i]);
  }
  printf("\nO maior valor é: %d\n", maior);
  printf("O menor valor é: %d\n", menor);
  printf("A soma do maior vetor, %d, com o menor vetor %d, é: %d", maior, menor, maior + menor);

  return 0;
}