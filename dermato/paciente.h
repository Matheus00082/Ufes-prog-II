#ifndef _paciente
#define _paciente

#include "lesao.h"
#include "data.h"
#include "constantes.h"

typedef struct
{
char nome[TAM_MAX_NOM];
tData dataNasc;
char cartaoSus[TAM_MAX_CARTAO_SUS];
char gen;
int qtdLesoes;
tLesao lesao[QTD_MAX_LESOES];
}tPaciente;

tPaciente inicia_paciente();
tPaciente associa_lesao(tLesao lesao, tPaciente paciente);
void ImprimirPacientes(tPaciente *paciente, int numPacientes);

#endif