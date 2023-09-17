#ifndef FRANQUIA_H
#define FRANQUIA_H

#include "constantes.h"

typedef struct tFranquia
{
    char nome[TAM_MAX_NOM];
    char conferencia[TAM_MAX_COSTA];
    int numVitoriasCasa;
    int numVitoriasFora;
    int numDerrotas;
} tFranquia;

tFranquia inicia_Franquia(tFranquia franquia);
tFranquia cadastra_Franquia(tFranquia franquia);
int soma_Vitorias(tFranquia franquia);
int soma_Derrotas(tFranquia franquia);
float porcentagem(int derrotas, int vitorias);
int compara_Nome(char *nome, tFranquia franquia);
int leste_Oeste(tFranquia franquia);
void imprimirFranquia(tFranquia franquia);

#endif