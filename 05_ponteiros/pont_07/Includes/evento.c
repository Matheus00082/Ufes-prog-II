#include "evento.h"
#include <stdio.h>

void cadastrarEvento(Evento *eventos, int *numEventos)
{
    scanf(" %[^\n]\n", eventos[*numEventos].nome);
    scanf("%d %d %d", &eventos[*numEventos].dia, &eventos[*numEventos].mes, &eventos[*numEventos].ano);
    (*numEventos)++;
    printf("Evento cadastrado com sucesso!\n");
}

void exibirEventos(Evento *eventos, int *numEventos)
{
    printf("Eventos cadastrados:\n");
    for (int i = 0; i < *numEventos; i++)
    {
        printf("%02d - %s - %02d/%02d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

void trocarDataEvento(Evento *eventos, int *numEventos)
{
    int indice = 0;
    scanf("%d\n", &indice);
    scanf("%d %d %d\n", &eventos[indice].dia, &eventos[indice].mes, &eventos[indice].ano);
    printf("Data modificada com sucesso!\n");
}

void trocarIndicesEventos(Evento *eventos, int *indiceA, int *indiceB, int *numEventos)
{
    Evento aux;
    aux = eventos[*indiceA];
    eventos[*indiceA] = eventos[*indiceB];
    eventos[*indiceB] = aux;
    printf("Eventos trocados com sucesso!\n");
}