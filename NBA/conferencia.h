#ifndef CONFERENCIA_H
#define CONFERENCIA_H

#include "constantes.h"

typedef struct tConferencia
{
    char costa[TAM_MAX_COSTA];
    int vitoriasAcum;
    int derrotasAcum;
    int aproveitamentoConf;
} tConferencia;

#endif