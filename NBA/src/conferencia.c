#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "conferencia.h"
#include "partida.h"
#include "franquia.h"
#include <stdlib.h>

tConferencia inicia_Conferencia_Leste(tConferencia conferencia)
{
    strcpy(conferencia.costa, "Leste");
    conferencia.vitoriasAcum = 0;
    conferencia.derrotasAcum = 0;
    conferencia.qtdTimes = 0;
    return conferencia;
}

tConferencia inicia_Conferencia_Oeste(tConferencia conferencia)
{
    strcpy(conferencia.costa, "Oeste");
    conferencia.vitoriasAcum = 0;
    conferencia.derrotasAcum = 0;
    conferencia.qtdTimes = 0;
    return conferencia;
}

tConferencia add_Franquia_Conferencia(tFranquia franquia, tConferencia conferencia)
{
    if (conferencia.qtdTimes < QTD_MAX_FRANQUIAS)
    {
        conferencia.times[conferencia.qtdTimes] = franquia;
        conferencia.qtdTimes++;
    }
    else
    {
        printf("A conferencia %s nao suporta mais times", conferencia.costa);
        exit(1);
    }
    return conferencia;
}

tConferencia conta_Vitorias(tPartida partida, tConferencia conferencia)
{
    int ganhou = 0, perdeu = 0, flag = 0;

    flag = quem_Ganhou(partida);

    for (int i = 0; i < conferencia.qtdTimes; i++)
    {
        ganhou = vencedor(partida, conferencia.times[i], flag);
        perdeu = perdedor(partida, conferencia.times[i], flag);

        if (ganhou == CASA)
        {
            conferencia.times[i].numVitoriasCasa++;
        }
        else if (ganhou == VSTA)
        {
            conferencia.times[i].numVitoriasFora++;
        }

        if (perdeu == VSTA)
        {
            conferencia.times[i].numDerrotas++;
        }
        else if (perdeu == CASA)
        {
            conferencia.times[i].numDerrotas++;
        }
    }
    return conferencia;
}

void imprimirConferencia(tConferencia conf)
{
    int i = 0;

    while (TRUE)
    {
        conf.vitoriasAcum += soma_Vitorias(conf.times[i]);
        conf.derrotasAcum += soma_Derrotas(conf.times[i]);

        i++;
        if (i == conf.qtdTimes)
        {
            break;
        }
    }

    printf("%s ", conf.costa);
    printf("%d ", conf.vitoriasAcum);
    printf("%d ", conf.derrotasAcum);
    printf("%.2f\n", conf.vitoriasAcum * 100.00 / (conf.vitoriasAcum + conf.derrotasAcum));
}