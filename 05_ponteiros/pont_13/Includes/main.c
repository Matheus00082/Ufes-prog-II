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

    for (int i = 0; i < TAM_MAX_MSG; i++)
    {
        int temp = mensagemConcatenada[len - 1];

        for (int i = len - 1; i > 0; i--)
        {
            mensagemConcatenada[i] = mensagemConcatenada[i - 1];
        }

        mensagemConcatenada[0] = temp;

        for (int j = 0; j < len; j++)
        {
            printf("%c", mensagemConcatenada[j]);
        }
        printf("\033[H\033[J");
        usleep(500000);
    }
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