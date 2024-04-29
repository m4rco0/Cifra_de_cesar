#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "src/CesarCifra.h"
#include "src/handle_file.h"

int main(int argc, char *argv[])
{
  char *nome = argv[1];
  char *texto = lerArq(nome);
  printf("%s", texto);
  escreverArq(nome, texto);
}
