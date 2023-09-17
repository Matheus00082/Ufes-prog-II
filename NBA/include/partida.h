#ifndef PARTIDA_H
#define PARTIDA_H

#include "constantes.h"

typedef struct tPartida
{
    char timeCasa[TAM_MAX_NOM];
    char timeVisita[TAM_MAX_NOM];
    int timaCasaPont;
    int timaVstaPont;
} tPartida;

tPartida inicia_Partida(tPartida partida);
void imprimirPartida(tPartida partida);

#endif