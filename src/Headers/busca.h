#ifndef BUSCA_H
#define BUSCA_H

#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"
#include "quicksort.h"

void Busca_Sequencial(char *argv, char *chave_busca);

void Busca_Arvore(No *raiz, char *chave_busca);

void Busca_Binaria(char *chave_busca);

#endif
