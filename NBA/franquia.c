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
    return franquia;
}

void imprimirFranquia(tFranquia franquia)
{
    printf("Nome da Franquia: %s\n", franquia.nome);
    printf("Conferência: %s\n", franquia.conferencia);
    printf("Número de vitórias em casa: %d\n", franquia.numVitoriasCasa);
    printf("Número de vitórias fora de casa: %d\n", franquia.numVitoriasFora);
    printf("Número de derrotas: %d\n", franquia.numDerrotas);
    printf("Aproveitamento: %d%%\n", franquia.aproveitamento);
}