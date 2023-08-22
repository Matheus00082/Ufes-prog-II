/* 
 * File:   revisao3.c
 * Author: matheus
 * Created on 20 de agosto de 2023, 17:14
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int livros, aux, cont = 0, zero = 0;

    scanf("%d", &livros);
    int identificadores[livros];

    for (int b = 0; b < livros; b++) {
        scanf(" %d", &identificadores[b]);
    }
    //organiza o array em uma ordem crescente
    for (int i = 0; i < livros - 1; i++) {
        for (int j = 0; j < livros - i - 1; j++) {
            if (identificadores[j] > identificadores[j + 1]) {
                int temp = identificadores[j];
                identificadores[j] = identificadores[j + 1];
                identificadores[j + 1] = temp;
            }
        }
    }
    //zera os valores que possui copias na biblioteca
    for (int b = 0; b < livros - 1; b++) {
        if (identificadores[b] == identificadores[b + 1]) {
            aux = identificadores[b];
            for (int i = 0; i < livros; i++) {
                if (aux == identificadores[i]) {
                    identificadores[i] = 0;
                }
            }
        }
    }
    //conta os zeros (quantos livros/copias há)
    for (int b = 0; b < livros; b++) {
        if (identificadores[b] == 0) {
            zero++;
        }
    }
    //verifica se todos tem copias, e imprime aqueles que não tem ou nenhum caso todos tenham
    for (int b = 0; b < livros; b++) {
        if (zero == livros) {
            printf("NENHUM");
            break;
        } else {
            if (identificadores[b] > 0) {
                printf("%d", identificadores[b]);
                if (b < livros - 1) {
                    printf(" ");
                }
            }
        }
    }
    //casos de teste não estão padronizados, metade termina com \0 outra metade não
    return 0;
}