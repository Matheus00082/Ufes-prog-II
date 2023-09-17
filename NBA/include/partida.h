#ifndef PARTIDA_H
#define PARTIDA_H

#include "constantes.h"
#include "franquia.h"

typedef struct tPartida
{
    char timeCasa[TAM_MAX_NOM];
    char timeVisita[TAM_MAX_NOM];
    int timaCasaPont;
    int timaVstaPont;
} tPartida;

tPartida inicia_Partida(tPartida partida);
int vencedor(tPartida partida, tFranquia franquia, int flag);
int perdedor(tPartida partida, tFranquia franquia, int flag);
int quem_Ganhou(tPartida partida);
void imprimirPartida(tPartida partida);

#endif