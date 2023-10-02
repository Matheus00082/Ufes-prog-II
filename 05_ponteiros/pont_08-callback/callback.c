#include <stdio.h>
#include "botao.h"
#include "tela.h"

void salva_dados()
{
    printf("- Botao de salvar dados ativado\n");
}

void exclui_dados()
{
    printf("- Botao de excluir dados ativado\n");
}

void abrir_menu_opcoes()
{
    printf("- Botao de opcoes ativado\n");
}

int main()
{
    botao salve = cria_botao("Salvar", "FFF", 12, CLICK, salva_dados);
    botao some = cria_botao("Excluir", "ABC", 13, LONG_CLICK, exclui_dados);
    botao escolha = cria_botao("Menu", "AAA", 14, HOVER, abrir_menu_opcoes);
    tela t = cria_tela(20, 40);

    reistra_botao(&t, salve);
    reistra_botao(&t, some);
    reistra_botao(&t, escolha);

    desenha_tela(t);
    event_listener(t);

    return 0;
}