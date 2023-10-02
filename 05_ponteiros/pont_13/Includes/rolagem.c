#include <stdio.h>
#include <string.h>
#include "rolagem.h"

#define TAM_MAX_PAINEL 31

void RolaMsg(FptrMsg corre, int tamanhoDisplay, int tempoFim)
{

    char msg[tamanhoDisplay][TAM_MAX_MSG];

    for (int i = 0; i < tamanhoDisplay; i++)
    {
        printf("Digite a mensagem %d: ", i + 1);
        scanf("%[^\n]", msg[i]);
        getchar();
    }

    corre(msg, &tamanhoDisplay);
}