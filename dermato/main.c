#include <stdio.h>
#include "paciente.h"
#include "lesao.h"
#include "data.h"
#include "constantes.h"
#include <stdlib.h>

int main()
{
    char id;
    tPaciente regPacientes[QTD_MAX_PACIENTES];
    tLesao lesao;
    int qtdPacientes = 0, qtdLesoes = 0, cirurgias = 0, i = 0, mediaIdade = 0, somaIdade = 0;

    while (TRUE)
    {
        scanf(" %c", &id);

        if (id == 'P')
        {
            regPacientes[qtdPacientes] = inicia_paciente();
            qtdPacientes++;
        }
        else if (id == 'L')
        {
            qtdLesoes++;
            lesao = inicia_lesao();
            if (lesao.porcentagem > PERICULOSIDADE_MAX)
            {
                cirurgias++;
            }

            while (i < qtdPacientes)
            {
                regPacientes[i] = associa_lesao(lesao, regPacientes[i]);
                i++;
            }

            i = FALSE;
        }
        else if (id == 'F')
        {
            break;
        }
        else
        {
            printf("identificacao invalida\n");
            exit(1);
        }
    }

    i = 0;

    while (i < qtdPacientes)
    {
        somaIdade += calcularIdade(regPacientes[i].dataNasc);
        i++;
    }

    mediaIdade = (somaIdade / qtdPacientes);

    printf("TOTAL PACIENTES: %d\n", qtdPacientes);
    printf("MEDIA IDADE (ANOS): %d\n", mediaIdade);
    printf("TOTAL LESOES: %d\n", qtdLesoes);
    printf("TOTAL CIRURGIAS: %d\n", cirurgias);
    printf("LISTA DE PACIENTES:\n");
    ImprimirPacientes(regPacientes, qtdPacientes);

    return 0;
}
