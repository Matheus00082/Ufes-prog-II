#include <stdio.h>

void LeNumeros(int *array, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        scanf(" %d", &array[i]);
    }
}

void EncontraMaiorMenorMedia(int *array, int tamanho, int *maior, int *menor, float *media)
{
    for (int i = 0; i < tamanho; i++)
    {
        *media += array[i];
        if (array[i] > *maior)
        {
            *maior = array[i];
        }

        if (array[i] < *menor)
        {
            *menor = array[i];
        }
    }
    *media = *media/tamanho;
}