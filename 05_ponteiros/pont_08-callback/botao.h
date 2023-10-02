#ifndef _BOTAO_H
#define _BOTAO_H

#define MAX_BOTOES 10
#define MAX_TEXTO 30
#define MAX_COR 7 // HEXADECIMAL
#define CLICK 1
#define LONG_CLICK 2
#define HOVER 3

typedef struct
{
    char texto[MAX_TEXTO];
    char cor[MAX_COR];
    int fonte;
    int tipo;
    void (*executa)(void);
} botao;

botao cria_botao(char *texto, char *cor, int fonte, int tipo, void (*executa)(void));
void altera_texto(botao *b, char *novo_texto);
void altera_cor(botao *b, char *nova_cor);
void altera_fonte(botao *b, int nova_fonte);
void altera_tipo(botao *b, int novo_tipo);
void executa_botao(botao b);
void desenha_botao(botao b, int i);

#endif