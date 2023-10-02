#include "rolagem.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define TAM_MAX_PAINEL 31

void rolando(char msg[NUM_MAX_MSGS][TAM_MAX_MSG], int *numMsgs)
{
    char mensagemConcatenada[TAM_MAX_MSG * NUM_MAX_MSGS];
    mensagemConcatenada[0] = '\0';

    for (int i = 0; i < *numMsgs; i++)
    {
        strcat(mensagemConcatenada, msg[i]);
    }

    int len = strlen(mensagemConcatenada);
    char painel[31];

    for (int i = 0; i < len; i++)
    {

        for (int i = 0; i < 31; i++)
        {
            painel[i] = mensagemConcatenada[i];

            if (len < 30 && i == len)
            {
                break;
            }
        }

        printf("\033[H\033[J%s\n", painel);
        int temp = mensagemConcatenada[0];

        for (int i = 0; i < len; i++)
        {
            mensagemConcatenada[i] = mensagemConcatenada[i + 1];
        }

        mensagemConcatenada[len - 1] = temp;
        sleep(1);
    }
    printf("\033[H\033[J");
}

int main()
{
    int qtd;
    printf("Quantidade de mensagens: ");
    scanf("%d", &qtd);
    getchar();
    FptrMsg corre = rolando;

    RolaMsg(corre, qtd, 5000);

    return 0;
}