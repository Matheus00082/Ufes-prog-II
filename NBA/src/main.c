#include <stdio.h>
#include "constantes.h"
#include "conferencia.h"
#include "partida.h"
#include "franquia.h"
#include "operacoes.h"
#include <stdlib.h>

int main()
{
    tFranquia franquia, temporada[31];
    tPartida partida;
    tConferencia conferencias[QTD_MAX_CONFERENCIAS];
    int escolha, idConf = 0, i = 0, j = 0;

    conferencias[RTN_LESTE] = inicia_Conferencia_Leste(conferencias[RTN_LESTE]);
    conferencias[RTN_OESTE] = inicia_Conferencia_Oeste(conferencias[RTN_OESTE]);

    while (TRUE)
    {
        escolha = diferencia_Partida_Franquia();

        if (escolha == 0)
        {
            partida = inicia_Partida(partida);
            conferencias[RTN_LESTE] = conta_Vitorias(partida, conferencias[RTN_LESTE]);
            conferencias[RTN_OESTE] = conta_Vitorias(partida, conferencias[RTN_OESTE]);
        }
        else if (escolha == 1)
        {
            franquia = cadastra_Franquia(franquia);
            temporada[i++] = franquia;
            idConf = leste_Oeste(franquia);
            conferencias[idConf] = add_Franquia_Conferencia(franquia, conferencias[idConf]);
        }
        else if (escolha == FIM)
        {
            break;
        }
    }

    /*while (j <= i)
    {
        x(temporada[j], conferencias[RTN_LESTE]);
        x(temporada[j], conferencias[RTN_OESTE]);

        imprimirFranquia(temporada[j]);
        j++;
    }*/

    imprimirConferencia(conferencias[RTN_LESTE]);
    imprimirConferencia(conferencias[RTN_OESTE]);

    return 0;
}