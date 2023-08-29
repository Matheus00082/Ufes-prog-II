#include <stdio.h>
#include <stdlib.h>

void scanner();
int SomaElementosPares(int *vet, int numElementos);

int main()
{
    int N, cont = 0;
    scanf("%d", &N);

    while (cont < N)
    {
        int QTD = 0;
        scanf("%d", &QTD);

        int vetor[QTD];
        for (int i = 0; i < QTD; i++)
        {
            scanf("%d", &vetor[i]);
        }

        int resultado = SomaElementosPares(vetor, QTD - 1);
        printf("%d\n", resultado);
        cont++;
    }
    return 0;
}

int SomaElementosPares(int *vet, int numElementos)
{
    int aux = 0;

    if (numElementos < 0)
    {
        return 0;
    }

    if (vet[numElementos] % 2 == 0)
    {
        aux = vet[numElementos];
    }

    return aux + SomaElementosPares(vet, numElementos - 1);
}