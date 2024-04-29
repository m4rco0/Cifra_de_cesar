#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#ifndef CIFRA_DE_CESAR
#define CIFRA_DE_CESAR

#define ALFABETO "abcdefghijklmnopqrstuvwxyz"
#define ALF_TAM 26
char cifrar(char c, int chave);
char descifrar(char c, int chave);
#endif