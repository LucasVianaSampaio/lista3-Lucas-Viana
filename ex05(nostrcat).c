#include <stdio.h>
#include <string.h>
#define TAM 20

int main()
{
  char nome[TAM];
  char sobrenome[TAM];
  char juncao[TAM];

  printf("Digite seu nome:\n");
  fgets(nome, TAM, stdin);
  printf("Digite seu sobrenome:\n");
  fgets(sobrenome, TAM, stdin);

  // loop para descartar o enter na conta dos caracteres
  int i = 0;
  while (nome[i] != '\0' && sobrenome[i] != '\0')
  {
    if (nome[i] == '\n')
    {
      nome[i] = '\t';
    }

    if (sobrenome[i] == '\n')
    {
      sobrenome[i] = '\0';
    }
    i++;
  }

  int j;
  for (i = 0; i < strlen(nome); i++)
  {
    juncao[i] = nome[i];
  }

  for (j = 0; j < strlen(sobrenome); j++)
  {
    juncao[strlen(nome) + j] = sobrenome[j];
  }

  printf("%s", juncao);
  return 0;
}