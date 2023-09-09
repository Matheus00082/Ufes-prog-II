#include <stdio.h>
#include "data.h"

int main()
{
    int dia, mes, ano;
    int retorno;

    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data informada: ");
    imprimeDataExtenso(dia, mes, ano);

    printf("O ano informado ");
    if (verificaBissexto(ano))
    {
        printf("eh bissexto\n");
    }
    else
    {
        printf("nao eh bissexto\n");
    }

    printf("O mes informado possui %d dias\n", numeroDiasMes(mes, ano));
    imprimeProximaData(dia, mes, ano);

    return 0;
}