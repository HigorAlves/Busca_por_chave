#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "headers/buscasequencial.h"

void sequencia(){
    struct timeval inicio, final;
    int tmili;
    char chave[2], word[50], pesquisa[2];
    int comp = 0;
    
    //Vamos ler a chave desejada.
    printf("Insira a chave que deseja achar: ");
    scanf("%s", pesquisa);
    printf("\nChave inserida: %s, abrindo o arquivo para procura-la!\n", pesquisa);

    //Medida de tempo
    gettimeofday(&inicio, NULL);

    //Vamos abrir o arquivo.
    FILE *arq;
    arq = fopen ("base_final","r");
    if(arq == NULL){
        printf("Erro, não foi possivel abrir o arquivo!\n");
    }else{
        printf("Arquivo aberto com sucesso!\n");
    }
    
    //Agora procuramos o valor dentro do nosso arquivo de texto de forma sequencial.
    while(!feof(arq)){
        fscanf(arq, "%s %[^\n]s",chave,word);
        if (!strcmp(pesquisa,chave)) {
            printf("\nLinha %d \t Valor = %s\n",comp+1,word);
            break;
        }
        comp++;
    } 
    //Final da medição de tempo total
    gettimeofday(&final, NULL);
    tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    printf("Tempo Decorrido: %d\n", tmili); 
}