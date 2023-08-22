/*  File:   main.c
 * Author: mvbsouza
 * Created on August 17, 2023, 10:03 AM
 */

#define coordenadas 2
#define sequencia 4

#include <stdio.h>
#include <stdlib.h>

//escaneia a posicao inicial e final

void scaner(int *coord) {
    for (int k = 0; k < coordenadas; k++) {
        scanf("%d", &coord[k]);
    }
    scanf("%*c");
}

int main(int argc, char **argv) {
    char ordem[sequencia];
    int l, c, posicao[coordenadas], final[coordenadas];
    // linhas (l) e colunas (c)
    // posicao[coordenadas] - posicao do jogador durante o jogo
    scanf("%d %d\n", &l, &c);

    int labirinto[l][c];

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &labirinto[i][j]);
        }
        scanf("%*c");
    }

    scaner(posicao);
    printf("(%d,%d) ", posicao[0], posicao[1]);
    posicao[0]--;
    posicao[1]--;
    scaner(final);

    scanf("%s", ordem);

    while (1) {
        int flag = 0;
        for (int k = 0; k < sequencia; k++) {
            /*avalia se existe um próximo movimento valido dentro do labirinto 
             *de acordo com a prioridade*/
            if (ordem[k] == 'B') {
                if (posicao[0] < l - 1 && (labirinto[posicao[0] + 1][posicao[1]] == 0)) {
                    labirinto[posicao[0]][posicao[1]] = 1;
                    posicao[0]++;
                    printf("(%d,%d) ", posicao[0] + 1, posicao[1] + 1);
                    break;
                } else {
                    flag++;
                }
            } else if (ordem[k] == 'C') {
                if (posicao[0] > 0 && (labirinto[posicao[0] - 1][posicao[1]] == 0)) {
                    labirinto[posicao[0]][posicao[1]] = 1;
                    posicao[0]--;
                    printf("(%d,%d) ", posicao[0] + 1, posicao[1] + 1);
                    break;
                } else {
                    flag++;
                }
            } else if (ordem[k] == 'D') {
                if (posicao[1] < c - 1 && (labirinto[posicao[0]][posicao[1] + 1] == 0)) {
                    labirinto[posicao[0]][posicao[1]] = 1;
                    posicao[1]++;
                    printf("(%d,%d) ", posicao[0] + 1, posicao[1] + 1);
                    break;
                } else {
                    flag++;
                }
            } else if (ordem[k] == 'E') {
                if (posicao[1] > 0 && (labirinto[posicao[0]][posicao[1] - 1] == 0)) {
                    labirinto[posicao[0]][posicao[1]] = 1;
                    posicao[1]--;
                    printf("(%d,%d) ", posicao[0] + 1, posicao[1] + 1);
                    break;
                } else {
                    flag++;
                }
            }
        }
        if ((flag == 4) || ((posicao[0] == final[0] - 1) && (posicao[1] == final[1] - 1))) {
            break;
        }
    }

    return 0;
}