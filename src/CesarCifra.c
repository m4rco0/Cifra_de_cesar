#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "CesarCifra.h"

char cifrar(char c, int chave)
{
    return c + chave;
}
char descifrar(char c, int chave)
{
    return c - chave;
}