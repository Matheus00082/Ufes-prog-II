#include <stdio.h>
#include "paciente.h"
#include "lesao.h"
#include "data.h"
#include "constantes.h"
#include <string.h>

tLesao inicia_lesao()
{
    tLesao lesao;
    scanf(" %[^\n]\n", lesao.cartaoSus);
    scanf(" %[^\n]\n", lesao.id);
    scanf(" %[^\n]\n", lesao.diagnostico);
    scanf(" %[^\n]\n", lesao.regiao);
    scanf(" %d", &lesao.porcentagem);
    return lesao;
}
