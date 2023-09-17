#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "partida.h"
#include "franquia.h"
#include <stdlib.h>

tPartida inicia_Partida(tPartida partida)
{
    char linha[100];

    fgets(linha, sizeof(linha), stdin);

    int lidos = sscanf(linha, "%32[^' '] @ %32[^' '] %d %d",
                       partida.timeVisita,
                       partida.timeCasa,
                       &partida.timaVstaPont,
                       &partida.timaCasaPont);

    if (lidos != 4)
    {
        printf("Formato de jogo inválido.\n");
        exit(1);
    }

    return partida;
}

int quem_Ganhou(tPartida partida)
{
    if (partida.timaVstaPont > partida.timaCasaPont)
    {
        return VSTA; // visitante ganhou
    }
    return CASA; // casa ganhou
}

int vencedor(tPartida partida, tFranquia franquia, int flag)
{
    int rtnc = compara_Nome(partida.timeCasa, franquia);
    int rtnv = compara_Nome(partida.timeVisita, franquia);

    if (flag == CASA && rtnc == 0)
    {
        return CASA; // ganhou em casa
    }
    else if (flag == VSTA && rtnv == 0)
    {
        return VSTA; // ganhou visitando
    }
    return 0;
}

int perdedor(tPartida partida, tFranquia franquia, int flag)
{
    int rtnc = compara_Nome(partida.timeCasa, franquia);
    int rtnv = compara_Nome(partida.timeVisita, franquia);

    if (flag == VSTA && rtnc == 0)
    {
        return CASA; // perdeu em casa
    }
    else if (flag == CASA && rtnv == 0)
    {
        return VSTA; // perdeu visitando
    }
    return 0;
}

void imprimirPartida(tPartida partida)
{
    printf("Time da Casa: %s\n", partida.timeCasa);
    printf("Time Visitante: %s\n", partida.timeVisita);
}
