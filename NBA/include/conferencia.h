#ifndef CONFERENCIA_H
#define CONFERENCIA_H

#include "franquia.h"
#include "partida.h"

typedef struct tConferencia
{
    char costa[TAM_MAX_COSTA];
    int vitoriasAcum;
    int derrotasAcum;
    tFranquia times[QTD_MAX_FRANQUIAS];
    int qtdTimes;
} tConferencia;

tConferencia inicia_Conferencia_Oeste(tConferencia conferencia);
tConferencia inicia_Conferencia_Leste(tConferencia conferencia);
tConferencia add_Franquia_Conferencia(tFranquia franquia, tConferencia conferencias);
tFranquia associarTimes(tFranquia temporadas, tConferencia conferencia);
tConferencia conta_Vitorias(tPartida partida, tConferencia conferencia);
void imprimirConferencia(tConferencia conf);

#endif