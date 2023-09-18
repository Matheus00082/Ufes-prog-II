#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "partida.h"
#include "franquia.h"
#include <stdlib.h>

tFranquia cadastra_Franquia(tFranquia franquia)
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

int leste_Oeste(tFranquia franquia)
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

int compara_Nome(char *nome, tFranquia franquia)
{
    int rtn;
    rtn = strcmp(nome, franquia.nome);
    return rtn;
}

int compara_Nome_franq(tFranquia franq, tFranquia franquia)
{
    int rtn;
    rtn = strcmp(franq.nome, franquia.nome);
    return rtn;
}

float porcentagem(int derrotas, int vitorias) { return (100.0 * vitorias) / (vitorias + derrotas); }

int soma_Vitorias(tFranquia franquia)
{
    int soma = 0;
    soma = franquia.numVitoriasCasa + franquia.numVitoriasFora;
    return soma;
}

int soma_Derrotas(tFranquia franquia)
{
    return franquia.numDerrotas;
}

tFranquia conta_Pontos_VC(tFranquia franquia)
{
    franquia.numVitoriasCasa++;
    return franquia;
}

tFranquia conta_Pontos_VV(tFranquia franquia)
{
    franquia.numVitoriasFora++;
    return franquia;
}

tFranquia conta_Pontos_D(tFranquia franquia)
{
    franquia.numDerrotas++;
    return franquia;
}

void imprimirFranquia(tFranquia franquia)
{
    float porcento = porcentagem(franquia.numDerrotas, (franquia.numVitoriasCasa + franquia.numVitoriasFora));
    printf("%s ", franquia.nome);
    printf("%s ", franquia.conferencia);
    printf("%d %d %.2f %d %d\n", franquia.numVitoriasCasa + franquia.numVitoriasFora, franquia.numDerrotas, porcento, franquia.numVitoriasCasa, franquia.numVitoriasFora);
}