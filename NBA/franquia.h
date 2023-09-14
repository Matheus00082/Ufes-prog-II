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
    int aproveitamento;
} tFranquia;

tFranquia Cadastra_Franquia(tFranquia franquia);
void imprimirFranquia(tFranquia franquia);

#endif