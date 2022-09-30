#include <stdio.h>
#include <string.h>
#define TAM 10

int main()
{
  char nome[TAM];
  char newnome[TAM];
  int i, j, n;

  printf("Digite seu nome abaixo e ele será apresentado na forma inversa:\n");
  fgets(nome, TAM, stdin);

  n = strlen(nome);

  j = n - 1;

  for (i = 0; i < n; i++)
  {
    newnome[i] = nome[j];
    j -= 1;
  }
  newnome[i] = '\0';

  printf("O nome que você digitou foi: %s\n", nome);
  printf("O nome em sua forma invertida é: %s", newnome);
  return 0;
}