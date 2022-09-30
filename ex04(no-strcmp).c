#include <stdio.h>
#include <string.h>
#define TAM 10

int main()
{
  char nome[TAM];
  char nome2[TAM];
  int aux = 0;

  printf("Digite um único nome abaixo:\n");
  fgets(nome, TAM, stdin);
  printf("Digite outro único nome abaixo:\n");
  fgets(nome2, TAM, stdin);

  int i = 0;

  // loop para que a tecla enter não seja levada em conta na hora de contar os caracteres
  while (nome[i] != '\0' && nome2[i] != '\0')
  {
    if (nome[i] == '\n')
    {
      nome[i] = '\0';
    }
    if (nome2[i] == '\n')
    {
      nome2[i] = '\0';
    }
    i++;
  }

  // strlen para descobrir quantos caracteres eu tenho
  int numero = strlen(nome);
  int numero2 = strlen(nome2);

  // loop para saber se os número de caracteres são iguais, caso sim, será feito a varredura de quais são os caracteres idênticos
  if (numero == numero2)
  {
    i = 0;
    while (nome[i] != '\0')
    {
      if (nome[i] == nome2[i])
      {
        aux++;
      }
      i++;
    }
  }

  // ternário pra saber se o valor de aux, que é adicionado a cada letra idêntica, é igual ao número de caracteres total
  aux == numero ? printf("Os nomes inseridos são iguais") : printf("Os nomes inseridos não são iguais");

  return 0;
}