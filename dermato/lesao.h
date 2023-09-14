#ifndef _lesao
#define _lesao

#include "constantes.h"

typedef struct
{
    char id[TAM_MAX_IDEN];
    char diagnostico[TAM_MAX_DIAG];
    char regiao[TAM_MAX_REGIAO];
    int porcentagem;
    char cartaoSus[TAM_MAX_CARTAO_SUS];
}tLesao;

tLesao inicia_lesao();

#endif