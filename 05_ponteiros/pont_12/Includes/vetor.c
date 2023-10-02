#include <stdio.h>
#include "vetor.h"

void LeVetor(Vetor *vetor)
{
    scanf("%d\n", &vetor->tamanhoUtilizado);

    for (int i = 0; i < vetor->tamanhoUtilizado; i++)
    {
        scanf(" %d", &vetor->elementos[i]);
    }
}

int AplicarOperacaoVetor(Vetor *vetor, Operation op)
{
    int aux = 1;

    for (int i = 0; i < vetor->tamanhoUtilizado; i++)
    {
        aux = op(aux, vetor->elementos[i]);
    }

    return aux;
}
