#include <stdio.h>
#include "string_utils.h"
#include <stdlib.h>

int main()
{
    char caractere;
    int tamanho = 0, capacidade = 10, opcao = 0, length, flag = 0;
    char *destino;
    char *origem = (char *)malloc(capacidade * sizeof(char));

    if (origem == NULL)
    {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    while ((caractere = getchar()) != '\n')
    {
        if (tamanho >= capacidade - 1)
        {
            capacidade += 1;
            origem = (char *)realloc(origem, capacidade * sizeof(char));

            if (origem == NULL)
            {
                printf("Erro na realocação de memória.\n");
                return 1;
            }
        }
        origem[tamanho] = caractere;
        tamanho++;
    }

    origem[tamanho] = '\0';
    destino = (char *)malloc(tamanho * sizeof(char));

    while (1)
    {
        printf("1 - Tamanho da string\n");
        printf("2 - Copiar string\n");
        printf("3 - Converter string para letras maiúsculas\n");
        printf("4 - Converter string para letras minúsculas\n");
        printf("5 - Imprimir string ao contrário\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: ");

        scanf("%d", &opcao);

        if (opcao == 1)
        {
            length = string_length(origem);
            printf("Tamanho da string: %d\n", length);
        }
        else if (opcao == 2)
        {
            string_copy(origem, destino);
            printf("String copiada: %s\n", destino);
        }
        else if (opcao == 3)
        {
            string_upper(origem);
            printf("String convertida para maiusculas: %s\n", origem);
        }
        else if (opcao == 4)
        {
            string_lower(origem);
            printf("String convertida para minusculas: %s\n", origem);
        }
        else if (opcao == 5)
        {
            string_reverse(origem);
            printf("String invertida: %s\n", origem);
        }
        else if (opcao == 6)
        {
            break;
        }
        printf("\n");
    }

    free(origem);
    free(destino);

    return 0;
}