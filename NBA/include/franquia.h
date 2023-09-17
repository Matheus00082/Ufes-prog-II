#ifndef FRANQUIA_H
#define FRANQUIA_H

#include "constantes.h"

typedef struct tFranquia
{
    char nome[TAM_MAX_NOM];
    char conferencia[TAM_MAX_CONF];
    int numVitoriasCasa;
    int numVitoriasFora;
    int numDerrotas;
} tFranquia;

tFranquia inicia_Franquia(tFranquia franquia);
tFranquia cadastra_Franquia(tFranquia franquia);
int leste_Oeste(tFranquia franquia);
void imprimir_Franquia(tFranquia franquia);

#endif