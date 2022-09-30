#include <stdio.h>
#include <string.h>
#define TAM 10

int main()
{
  char nome[TAM];
  char nome2[TAM];

  puts("Abaixo será realizado uma comparação entre strings e será informado se elas são idênticas:\n");

  printf("Digite um único nome abaixo:\n");
  fgets(nome, TAM, stdin);
  printf("Digite outro único nome abaixo:\n");
  fgets(nome2, TAM, stdin);

  int valor = strcmp(nome, nome2);

  valor == 0 ? printf("Os dois nomes digitados são iguais") : printf("Nomes diferentes foram digitados");
  return 0;
}