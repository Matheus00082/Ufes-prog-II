#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "operacoes.h"

int diferencia_Partida_Franquia()
{
    char aux;
    scanf(" %c\n", &aux);
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
        printf("Identificador nao cadastrado (F/P)");
        exit(1);
    }
}