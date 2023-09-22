#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void LeDadosParaVetor(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        scanf(" %d", &vet[i]);
    }
}

void ImprimeDadosDoVetor(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

void OrdeneCrescente(int *vet, int tam)
{
    int temp;
    int swapped = 0;

    for (int i = 0; i < tam - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < tam - 1 - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}