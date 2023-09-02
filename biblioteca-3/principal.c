#include <stdio.h>
#include "data.h"

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;
    int retorno;

    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    printf("Primeira data: ");
    imprimeDataExtenso(dia1, mes1, ano1);

    printf("Segunda data: ");
    imprimeDataExtenso(dia2, mes2, ano2);

    retorno = comparaData(dia1, mes1, ano1, dia2, mes2, ano2);
    if (retorno < 0)
    {
        printf("A primeira data eh mais antiga\n");
    }
    else if (retorno == 0)
    {
        printf("As datas sao iguais\n");
    }
    else
    {
        printf("A segunda data eh mais antiga\n");
    }

    int difDias = calculaDiferencaDias(dia1, mes1, ano1, dia2, mes2, ano2);
    printf("Diferença em dias entre as datas: %d\n", difDias);
    return 0;
}