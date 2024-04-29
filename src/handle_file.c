#include <stdio.h>
#include <stdlib.h>
#include "handle_file.h"

char *lerArq(char *nome)
{
  FILE *ler = fopen(nome, "r");
  char letra;
  char *texto = (char *)malloc(sizeof(char) * 1000);
  int i = 0;
  while (fscanf(ler, "%c", &letra) != EOF)
  {
    texto[i] = letra;
    i++;
  }
  fclose(ler);
  return texto;
}

void escreverArq(char *nome, char *texto){
  FILE *escrever = fopen(nome, "w");
  fprintf(escrever, "%s", texto);
  fclose(escrever);
}