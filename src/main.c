#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CesarCifra.h"
#include "handle_file.h"



int main(int argc, char *argv[])
{
  char *nome = argv[1];
  int chave = atoi(argv[2]);
  char *tipo = argv[3];
  char *texto = lerArq(nome);
  if(strcmp(tipo, "-d") == 0 || strcmp(tipo, "dcript") == 0)
  {
    for(int i=0; i < strlen(texto); i++)
    {
      texto[i] = descifrar(texto[i], chave);
    }
  }
  else if (strcmp(tipo, "-c" ) == 0|| strcmp(tipo, "cript") == 0)
  {
    for(int i = 0; i < strlen(texto); i++)
    {
      texto[i] = cifrar(texto[i], chave);
    }
  }
  else {
    printf("Nenhum tipo de criptografia informado !\n");
    exit(EXIT_FAILURE);
  }
  printf("%s\n", tipo);
  escreverArq(nome, texto);
  free(texto);
  return 0;
}
