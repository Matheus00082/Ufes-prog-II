#include <stdio.h>
#include "paciente.h"
#include "lesao.h"
#include "data.h"
#include "constantes.h"
#include <string.h>

tPaciente inicia_paciente()
{
    tPaciente paciente;
    scanf("%[^\n]\n", paciente.nome);
    paciente.dataNasc = le_data(paciente.dataNasc);
    scanf("%[^\n]\n", paciente.cartaoSus);
    scanf("%c", &paciente.gen);
    paciente.qtdLesoes = 0;
    return paciente;
}

tPaciente associa_lesao(tLesao lesao, tPaciente paciente)
{
    if ((!strcmp(lesao.cartaoSus, paciente.cartaoSus)) && paciente.qtdLesoes < QTD_MAX_LESOES)
    {
        paciente.lesao[paciente.qtdLesoes] = lesao;
        paciente.qtdLesoes++;
    }
    return paciente;
}

void ImprimirPacientes(tPaciente *pacientes, int numPacientes)
{
    int i = 0, j;

    while (i < numPacientes)
    {
        j = 0;

        printf("- %s -", pacientes[i].nome);

        while (j < pacientes[i].qtdLesoes)
        {
            printf(" %s", pacientes[i].lesao[j].id);
            j++;
        }

        i++;
    }
}