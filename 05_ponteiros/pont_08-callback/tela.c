#include "tela.h"
#include "botao.h"
#include <stdlib.h>
#include <stdio.h>

tela cria_tela(int haltura, int largura)
{
    tela t;
    t.haltura = haltura;
    t.largura = largura;
    t.qtd_botoes = 0;
    return t;
}

void reistra_botao(tela *t, botao b)
{
    if (t->qtd_botoes > MAX_BOTOES)
    {
        printf("- WARNING : nao cab mais boteoes\n");
        exit(1);
    }
    else
    {
        t->botoes[t->qtd_botoes] = b;
        t->qtd_botoes++;
    }
}

void desenha_tela(tela t)
{
    printf("##################\n");
    for (int i = 0; i < t.qtd_botoes; i++)
    {
        desenha_botao(t.botoes[i], i);
        printf("\n");
    }
    printf("##################\n");
}

void event_listener(tela t)
{
    int acao;
    printf("- Escolha sua acao");
    scanf("%d", &acao);
    if (acao > t.qtd_botoes)
    {
        printf("WARNING - Botao nao cadastrado\n");
        exit(0);
    }
    executa_botao(t.botoes[acao]);
}