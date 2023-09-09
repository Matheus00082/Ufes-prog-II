#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int verificaDataValida(int dia, int mes, int ano)
{
    if ((mes > 0 && mes < 13) && ano > 0 && dia > 0)
    {
        return (dia <= numeroDiasMes(mes, ano));
    }
    else
    {
        return 0;
    }
}

void imprimeMesExtenso(int mes)
{
    if (mes == 1)
    {
        printf("Janeiro");
    }
    else if (mes == 2)
    {
        printf("Fevereiro");
    }
    else if (mes == 3)
    {
        printf("Março");
    }
    else if (mes == 4)
    {
        printf("Abril");
    }
    else if (mes == 5)
    {
        printf("Maio");
    }
    else if (mes == 6)
    {
        printf("Junho");
    }
    else if (mes == 7)
    {
        printf("Julho");
    }
    else if (mes == 8)
    {
        printf("Agosto");
    }
    else if (mes == 9)
    {
        printf("Setembro");
    }
    else if (mes == 10)
    {
        printf("Outubro");
    }
    else if (mes == 11)
    {
        printf("Novembro");
    }
    else if (mes == 12)
    {
        printf("Dezembro");
    }
}

void imprimeDataExtenso(int dia, int mes, int ano)
{
    if (verificaDataValida(dia, mes, ano))
    {
        printf("%d de ", dia);
        imprimeMesExtenso(mes);
        printf(" de %d\n", ano);
    }
    else
    {
        printf("Data inválida\n");
    }
}

int verificaBissexto(int ano)
{
    if (ano % 4 == 0)
        if (ano % 100 == 0)
            if (ano % 400 == 0)
                return 1;
            else
                return 0;
        else
            return 1;
}

int numeroDiasMes(int mes, int ano)
{
    if (mes == 2)
    {
        return verificaBissexto(ano) + 28;
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        return 31;
    }
    else
    {
        return 30;
    }
}

int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    if (ano1 > ano2)
        return 1;
    if (ano1 < ano2)
        return -1;
    if (mes1 > mes2)
        return 1;
    if (mes1 < mes2)
        return -1;
    if (dia1 > dia2)
        return 1;
    if (dia1 < dia2)
        return -1;
    return 0;
}

int calculaDiasAteMes(int mes, int ano)
{
    int totalDias = 0;
    for (int a = 1; a <= mes; a++)
    {
        totalDias += numeroDiasMes(mes, ano);
    }
}

int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    int totalDias1 = dia1 + calculaDiasAteMes(mes1, ano1) + (ano1 * 365) + (ano1 / 4) - (ano1 / 100) + (ano1 / 400);
    int totalDias2 = dia2 + calculaDiasAteMes(mes2, ano2) + (ano2 * 365) + (ano2 / 4) - (ano2 / 100) + (ano2 / 400);
    return abs(totalDias1 - totalDias2);
}