#ifndef TEMPO_H
#define TEMPO_H

typedef struct tempo{
	double tempoU,tempoS;
	struct rusage resources;
	struct timeval inicioU, inicioS, fimU, fimS;
}_tempo;

void iniciaTempo(_tempo *t);
void finalizaTempo(_tempo *t,double *tempoU, double *tempoS);
void zera_tempo(double *tempoUser, double *tempoSis);

#endif