#include <stdio.h>
#define TAM 10

int main() {
  char nome[TAM];
  int i;
  int tam = 0;
  printf("Digite seu primeiro nome abaixo:\n");
  fgets(nome, TAM, stdin);

  i = 0;
  while (nome[i] != '\0') {
    if (nome[i] == '\n') {
      nome[i] = '\0';
    }
    i++;
  }

  i = 0;
  while (nome[i] != '\0') {
    tam++;
    i++;
  }
  printf("O número de caracteres digitado é %d:", i);
  return 0;
}