#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct dado{
    char chave[2];
    char valor[100];
}Dados;

//Pega um pivo para o QuickSort
int particiona(Dados *dado, int fim, int inicio);

//Ordena tudo usando QuickSort
void QuickSort(Dados *dado, int fim, int inicio);

//Pega dados do arquivo e coloca na mem�ria
void Ordena_Arquivo(char *argv);

#endif