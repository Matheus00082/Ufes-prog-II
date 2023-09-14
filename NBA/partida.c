#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "partida.h"
#include <stdlib.h>

tPartida inicia_Partida(tPartida partida)
{
    char linha[100];

    fgets(linha, sizeof(linha), stdin);

    int lidos = sscanf(linha, "%32[^@] @ %32[^0-9] %d %d",
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

void imprimirPartida(tPartida partida)
{
    printf("Time da Casa: %s\n", partida.timeCasa);
    printf("Time Visitante: %s\n", partida.timeVisita);
    printf("Pontuação do Time da Casa: %d\n", partida.timaCasaPont);
    printf("Pontuação do Time Visitante: %d\n", partida.timaVstaPont);
}
