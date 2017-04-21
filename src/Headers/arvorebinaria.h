#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char chave[2];
    char valor[100];
    struct no* esq;
    struct no* dir;
}No;

No* cria_arvore();

//Armazena os dados do arquivo para armazenar na arvore.
int Inicia_arvore(char *argv, No *raiz);

//Cria o no e insere na arvore.
int Insere_Arvore(No *raiz, char *valor, char *chave);

#endif
