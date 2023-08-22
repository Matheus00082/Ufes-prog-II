/* 
 * File:   revisao2.c
 * Author: matheus
 *
 * Created on 20 de agosto de 2023, 16:43
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int largura, lim = 1, aux = 0, cont = 1;

    scanf("%d", &largura);

    for (int a = lim; a <= largura; a++) {
        while (aux < lim) {
            printf("%d ", cont);
            cont++;
            aux++;
        }
        printf("\n");
        aux = 0;
        lim++;
    }

    return 0;
}

