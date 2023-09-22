#include "data.h"
#include <stdio.h>

void InicializaDataParam(int dia, int mes, int ano, tData *data);

void LeData(tData *data)
{
    scanf("%d %d %d", &data->dia, &data->mes, &data->ano);
}

void ImprimeData(tData *data)
{
    printf("'%02d/%02d/%d'", data->dia, data->mes, data->ano);
}

int EhBissexto(tData *data)
{
    int ano = data->ano;
    if (ano % 4 == 0)
        if (ano % 100 == 0)
            if (ano % 400 == 0)
                return 1;
            else
                return 0;
        else
            return 1;
}

int InformaQtdDiasNoMes(tData *data)
{
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes = data->mes - 1, ano = data->ano;

    if (mes == 2 && EhBissexto(data))
        return 29;
    else
        return diasPorMes[mes];
}

void AvancaParaDiaSeguinte(tData *data)
{
    data->dia++;
    if (data->dia > InformaQtdDiasNoMes(data))
    {
        data->dia = 1;
        data->mes++;
        if (data->mes > MESES_ANO)
        {
            data->mes = 1;
            data->ano++;
        }
    }
}

int EhIgual(tData *data1, tData *data2)
{
    if (data1->dia == data2->dia && data1->mes == data2->mes && data1->ano == data2->ano)
        return 1;
    else
        return 0;
}
