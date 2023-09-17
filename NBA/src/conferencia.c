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

tConferencia add_Franquia_Conferencia(tFranquia franquia, tConferencia conferencias)
{
    if (conferencias.qtdTimes < QTD_MAX_FRANQUIAS)
    {
        conferencias.times[conferencias.qtdTimes] = franquia;
        conferencias.qtdTimes++;
    }
    else
    {
        printf("A conferencia %s nao suporta mais times", conferencias.costa);
        exit(1);
    }
}
