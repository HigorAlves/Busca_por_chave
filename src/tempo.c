#include "headers/tempo.h"
#include <sys/time.h>
#include <sys/resource.h>

void zera_tempo(double *tempoUser, double *tempoSis){
  *tempoUser = 0;
  *tempoSis = 0;
}

/* FUNÇAO GETRUSAGE DO SACHETO */
void iniciaTempo(_tempo *t){
	//Inicia a contagem de tempo do usuario e sistema.
	getrusage(RUSAGE_SELF, &(t->resources));
	t->inicioU = t->resources.ru_utime;
	t->inicioS = t->resources.ru_stime;
}

void finalizaTempo(_tempo *t,double *tempoU, double *tempoS){
	// Finaliza a contagem de tempo do usuario e sistema.
	getrusage(RUSAGE_SELF, &(t->resources));
	t->fimU = t->resources.ru_utime;
	t->fimS = t->resources.ru_stime;

	// Calcula o tempo do usuario.
	*tempoU = (double) (t->fimU.tv_sec - t->inicioU.tv_sec) + 1.e-6 * (double) (t->fimU.tv_usec - t->inicioU.tv_usec);

	// Calcula o tempo do sistema.
	*tempoS = (double) (t->fimS.tv_sec - t->inicioS.tv_sec) + 1.e-6 * (double) (t->fimS.tv_usec - t->inicioS.tv_usec);
}