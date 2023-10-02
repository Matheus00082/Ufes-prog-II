#ifndef _TELA_H
#define _TELA_H

#include "botao.h"

typedef struct
{
    int haltura;
    int largura;
    botao botoes[MAX_BOTOES];
    int qtd_botoes;
} tela;

tela cria_tela(int haltura, int largura);
void reistra_botao(tela *t, botao b);
void event_listener(tela t);
void desenha_tela(tela t);

#endif