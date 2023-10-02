#include <stdio.h>
#include <string.h>
#include "pessoa.h"

tPessoa CriaPessoa()
{
    tPessoa pessoa;
    pessoa.nome[0] = '\0';
    pessoa.pai = NULL;
    pessoa.mae = NULL;
    return pessoa;
}

void LePessoa(tPessoa *pessoa)
{
    scanf("%[^\n]%*c", pessoa->nome);
}

int VerificaSeTemPaisPessoa(tPessoa *pessoa)
{
    if (pessoa->mae != NULL || pessoa->pai != NULL)
    {
        return 1;
    }
    return 0;
}

void ImprimePessoa(tPessoa *pessoa)
{
    if (VerificaSeTemPaisPessoa(pessoa))
    {
        printf("NOME COMPLETO: %s\n", pessoa->nome);

        if (pessoa->pai != NULL)
        {
            printf("PAI: %s\n", pessoa->pai->nome);
        }
        else
        {
            printf("PAI: NAO INFORMADO\n");
        }

        if (pessoa->mae != NULL)
        {
            printf("MAE: %s\n\n", pessoa->mae->nome);
        }
        else
        {
            printf("MAE: NAO INFORMADA\n\n");
        }
    }
}

void AssociaFamiliasGruposPessoas(tPessoa *pessoas)
{
    int pai = -5, mae = -5, filho = -5, qtd = -5;

    scanf("%d\n", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        scanf("mae: %d, pai: %d, filho: %d\n", &mae, &pai, &filho);

        if (pai >= 0)
        {
            pessoas[filho].pai = &pessoas[pai];
        }

        if (mae >= 0)
        {
            pessoas[filho].mae = &pessoas[mae];
        }
    }
}