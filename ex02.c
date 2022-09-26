#include <stdio.h>
#define TAM 10

int main()
{
  char nome[TAM];
  char letra;
  int aux = 0;

  printf("Digite o seu nome:\n");
  fgets(nome, TAM, stdin);
  printf("Digite uma letra qualquer:\n");
  scanf("%c", &letra);

  for (int i = 0; i < TAM; i++)
  {
    nome[i] == letra ? aux = 1 : nome[i];
  }
  aux == 1 ? printf("O nome digitado contém a letra inserida") : printf("O nome digitado não contém a letra inserida");
  return 0;
}