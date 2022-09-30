#include <stdio.h>
#include <string.h>
#define TAM 20

int main()
{
  char nome[TAM];
  char sobrenome[TAM];

  printf("Digite seu nome:\n");
  fgets(nome, TAM, stdin);
  printf("Digite seu sobrenome:\n");
  fgets(sobrenome, TAM, stdin);

  // loop para que a tecla enter não seja levada em consideração
  int i = 0;
  while (nome[i] != '\0' && sobrenome[i] != '\0')
  {
    if (nome[i] == '\n')
    {
      nome[i] = '\0';
    }

    if (sobrenome[i] == '\n')
    {
      sobrenome[i] = '\0';
    }
    i++;
  }
  strcat(nome, sobrenome);

  printf("Seu nome concatenado é:\n");
  printf("%s", nome);

  return 0;
}