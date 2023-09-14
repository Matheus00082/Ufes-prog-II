#include <stdio.h>
#include "paciente.h"
#include "lesao.h"
#include "data.h"
#include "constantes.h"
#include <string.h>

tData le_data()
{
    tData data;
    scanf("%d/%d/%d\n", &data.dia, &data.mes, &data.ano);
    return data;
}

int verificaDataValida(int dia, int mes, int ano)
{
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1)
    {
        return 0;
    }

    int diasNoMes = numeroDiasMes(mes, ano);

    return (dia <= diasNoMes);
}

int verificaBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int numeroDiasMes(int mes, int ano)
{
    if (mes < 1 || mes > 12)
    {
        return -1;
    }

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && verificaBissexto(ano))
    {
        return 29;
    }
    else
    {
        return diasPorMes[mes];
    }
}

int calcularIdade(tData dataNasc)
{
    int idade = ANO_ATUAL - dataNasc.ano;

    if (MES_ATUAL < dataNasc.mes || (MES_ATUAL == dataNasc.mes && DIA_ATUAL < dataNasc.dia))
    {
        idade--;
    }
    return idade;
}