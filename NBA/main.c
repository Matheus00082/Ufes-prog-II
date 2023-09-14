#include <stdio.h>
#include "constantes.h"
#include "partida.h"
#include "franquia.h"
#include "operacoes.h"
#include <stdlib.h>

int main()
{
    tFranquia franquia;
    tPartida partida;
    if (!diferencia_Partida_Franquia())
    {
        partida = inicia_Partida(partida);
        imprimirPartida(partida);
    }
    else if (diferencia_Partida_Franquia())
    {
        franquia = Cadastra_Franquia(franquia);
        imprimirFranquia(franquia);
    }
    else if (diferencia_Partida_Franquia() == FIM)
    {
        printf(" ");
    }
    return 0;
}