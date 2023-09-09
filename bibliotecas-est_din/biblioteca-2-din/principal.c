#include <stdio.h>
#include "matrix_utils.h"

void operacoes(int opcao, int linhas1, int colunas1, int matrix1[linhas1][colunas1], int linhas2, int colunas2, int matrix2[linhas2][colunas2]);

int main()
{
    int opcao, linhas1, colunas1, linhas2, colunas2;

    scanf("%d %d", &linhas1, &colunas1);
    int matrix1[linhas1][colunas1];
    matrix_read(linhas1, colunas1, matrix1);

    scanf("%d %d", &linhas2, &colunas2);
    int matrix2[linhas2][colunas2];
    matrix_read(linhas2, colunas2, matrix2);

    while (1)
    {
        printf("1 - Somar Matrizes\n");
        printf("2 - Subtrair Matrizes\n");
        printf("3 - Multiplicar Matrizes\n");
        printf("4 - Multiplicacao de uma matriz por um escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: ");
        scanf("%d", &opcao);
        if (opcao == 6)
        {
            break;
        }
        operacoes(opcao, linhas1, colunas1, matrix1, linhas2, colunas2, matrix2);
    }
    return 0;
}

void operacoes(int opcao, int linhas1, int colunas1, int matrix1[linhas1][colunas1], int linhas2, int colunas2, int matrix2[linhas2][colunas2])
{
    int retorno = -1, aux = -1;
    int resultado[linhas1][colunas1];
    int matriz_transposta1[colunas1][linhas1];
    int matriz_transposta2[colunas2][linhas2];

    switch (opcao)
    {
    case 1:
        retorno = possible_matrix_sum(linhas1, colunas1, linhas2, colunas2);
        if (retorno > 0)
        {
            matrix_add(linhas1, colunas1, matrix1, linhas2, colunas2, matrix2, resultado);
            matrix_print(linhas1, colunas1, resultado);
        }
        else
        {
            printf("Tamanhos das matrizes incompatíveis\n");
        }
        break;

    case 2:
        retorno = possible_matrix_sub(linhas1, colunas1, linhas2, colunas2);
        if (retorno > 0)
        {
            matrix_sub(linhas1, colunas1, matrix1, linhas2, colunas2, matrix2, resultado);
            matrix_print(linhas1, colunas1, resultado);
        }
        else
        {
            printf("Tamanhos das matrizes incompatíveis\n");
        }
        break;

    case 3:
        retorno = possible_matrix_multiply(colunas1, linhas2);
        if (retorno > 0)
        {
            matrix_multiply(linhas1, colunas1, matrix1, linhas2, colunas2, matrix2, resultado);
            matrix_print(linhas1, colunas2, resultado);
        }
        else
        {
            printf("Tamanhos das matrizes incompatíveis para multiplicação\n");
        }
        break;

    case 4:
        int escalar;
        scanf("%d %d", &escalar, &aux);
        if (aux == 1)
        {
            scalar_multiply(linhas1, colunas1, matrix1, escalar);
            matrix_print(linhas1, colunas1, matrix1);
            break;
        }
        else
        {
            scalar_multiply(linhas2, colunas2, matrix2, escalar);
            matrix_print(linhas2, colunas2, matrix2);
            break;
        }

    case 5:
        scanf("%d", &aux);
        if (aux == 1)
        {
            transpose_matrix(linhas1, colunas1, matrix1, matriz_transposta1);
            matrix_print(colunas1, linhas1, matriz_transposta1);
            break;
        }
        else
        {
            transpose_matrix(linhas2, colunas2, matrix2, matriz_transposta2);
            matrix_print(colunas2, linhas2, matriz_transposta2);
            break;
        }

    default:
        printf("Opcao invalida\n");
    }
}