#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "partida.h"
#include "franquia.h"
#include <stdlib.h>

tFranquia Cadastra_Franquia(tFranquia franquia)
{
    char linha[100];

    fgets(linha, sizeof(linha), stdin);
    int lidos = sscanf(linha, "%32[^' '] %5[^\n]\n", franquia.nome, franquia.conferencia);

    if (lidos != 2)
    {
        printf("Formato de Franquia inválido.\n");
        exit(1);
    }

    if (strcmp(franquia.conferencia, "LESTE") == 0)
    {
        strcpy(franquia.conferencia, LESTE);
    }
    else if (strcmp(franquia.conferencia, "OESTE") == 0)
    {
        strcpy(franquia.conferencia, OESTE);
    }

    franquia.numDerrotas = 0;
    franquia.numVitoriasCasa = 0;
    franquia.numVitoriasFora = 0;

    return franquia;
}

int leste_oeste(tFranquia franquia)
{
    if (strcmp(franquia.conferencia, LESTE) == 0)
    {
        return RTN_LESTE;
    }
    else if (strcmp(franquia.conferencia, OESTE) == 0)
    {
        return RTN_OESTE;
    }
    printf("Conferencia invalida\n");
    exit(1);
}

void imprimirFranquia(tFranquia franquia)
{
    printf("Nome da Franquia: %s\n", franquia.nome);
    printf("Conferência: %s\n", franquia.conferencia);
}