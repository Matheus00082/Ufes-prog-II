#include <stdio.h>
#include "vetor.h"

int Soma(int n1, int n2)
{
    return n1 + n2;
}

int Produto(int n1, int n2)
{
    return n1 * n2;
}

int main()
{
    Vetor vetor;
    int soma, produto;

    LeVetor(&vetor);
    soma = AplicarOperacaoVetor(&vetor, Soma);
    produto = AplicarOperacaoVetor(&vetor, Produto);

    printf("Soma: %d\n", soma - 1);
    printf("Produto: %d\n", produto);

    return 0;
}