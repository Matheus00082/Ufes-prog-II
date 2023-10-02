#include <stdio.h>
#include <string.h>
#include "pessoa.h"

int main()
{
    int qtd = 0;
    scanf("%d\n", &qtd);
    tPessoa pessoas[qtd];

    for (int i = 0; i < qtd; i++)
    {
        pessoas[i] = CriaPessoa();
        LePessoa(&pessoas[i]);
    }

    AssociaFamiliasGruposPessoas(pessoas);

    for (int i = 0; i < qtd; i++)
    {
        ImprimePessoa(&pessoas[i]);
    }

    return 0;
}