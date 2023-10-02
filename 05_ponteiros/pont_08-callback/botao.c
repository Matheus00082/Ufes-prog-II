#include "botao.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

botao cria_botao(char *texto, char *cor, int fonte, int tipo, void (*executa)(void))
{
    botao b;
    strcpy(b.texto, texto);
    strcpy(b.cor, cor);
    b.fonte = fonte;
    b.tipo = tipo;
    b.executa = executa;
    return b;
}
void altera_texto(botao *b, char *novo_texto)
{
    if (strlen(novo_texto) > MAX_TEXTO)
    {
        printf("ERRO - Maximo de caracteres excedido.\n");
        exit(1);
    }
    strcpy(b->texto, novo_texto);
}
void altera_cor(botao *b, char *nova_cor)
{
    if (strlen(nova_cor) > MAX_COR)
    {
        printf("ERRO - Maximo tamanho de cor atigindo.\n");
        exit(1);
    }
    strcpy(b->cor, nova_cor);
}
void altera_fonte(botao *b, int nova_fonte)
{
    if (nova_fonte < 1)
    {
        printf("ERRO - Tamanho da fonte deve ser um nomero positivo maior que zero\n");
        exit(1);
    }
    b->fonte = nova_fonte;
}
void altera_tipo(botao *b, int novo_tipo)
{
    if (novo_tipo != CLICK && novo_tipo != LONG_CLICK && novo_tipo != HOVER)
    {
        printf("ERRO - Tipo não definido\n");
        exit(1);
    }
    b->tipo = novo_tipo;
}
void desenha_botao(botao b, int i)
{
    printf("--------\n");
    printf("- Botao [%d]:\n", i);
    printf("(%s|%s|%d|%d)\n", b.texto, b.cor, b.fonte, b.tipo);
    printf("--------\n");
}

void executa_botao(botao b)
{
    if (b.tipo == CLICK)
    {
        printf("- Executando o botao com evento click");
    }
    else if (b.tipo == LONG_CLICK)
    {
        printf("- Executando o botao com evento long click");
    }
    else if (b.tipo == HOVER)
    {
        printf("- Executando o botao com evento hover");
    }
    else
    {
        printf("ERRO: vento nao existente");
        exit(1);
    }
}