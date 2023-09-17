#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "operacoes.h"

int diferencia_Partida_Franquia()
{
    char aux;
    scanf("%c ", &aux);

    if (aux == 'F')
    {
        return 1;
    }
    else if (aux == 'P')
    {
        return 0;
    }
    else if (aux == 'E')
    {
        return 2;
    }
    else
    {
        printf("Identificador nao cadastrado (%c)", aux);
        return -1;
    }
}