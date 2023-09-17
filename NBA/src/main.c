#include <stdio.h>
#include "constantes.h"
#include "conferencia.h"
#include "partida.h"
#include "franquia.h"
#include "operacoes.h"
#include <stdlib.h>

int main()
{
    tFranquia franquia;
    tPartida partida;
    tConferencia conferencias[QTD_MAX_CONFERENCIAS];
    int escolha, idConf = 0;

    conferencias[RTN_LESTE] = inicia_Conferencia_Leste(conferencias[RTN_LESTE]);
    conferencias[RTN_OESTE] = inicia_Conferencia_Oeste(conferencias[RTN_OESTE]);

    while (TRUE)
    {
        escolha = diferencia_Partida_Franquia();
        // printf("escolha %d\n", escolha);
        if (escolha == 0)
        {
            partida = inicia_Partida(partida);
        }
        else if (escolha == 1)
        {
            franquia = cadastra_Franquia(franquia);
            idConf = leste_Oeste(franquia);
            add_Franquia_Conferencia(franquia, conferencias[idConf]);
        }
        else if (escolha == FIM)
        {
            break;
        }
    }

    return 0;
}