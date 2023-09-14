#ifndef _data
#define _data

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

tData le_data();
int verificaDataValida(int dia, int mes, int ano);
int verificaBissexto(int ano);
int numeroDiasMes(int mes, int ano);
int calcularIdade(tData dataNasc);

#endif