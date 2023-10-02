#include <stdio.h>
#include "calculadora.h"

float soma(float num1, float num2) { return num1 + num2; }
float subtracao(float num1, float num2) { return num1 - num2; }
float multiplicacao(float num1, float num2) { return num1 * num2; }
float divisao(float num1, float num2) { return num1 / num2; }

int main()
{
    char charactere, continuar = 1;
    float num1, num2;

    while (continuar)
    {
        scanf("%c\n", &charactere);
        scanf("%f %f\n", &num1, &num2);

        switch (charactere)
        {
        case 'a':
            printf("%.2f + %.2f = %.2f\n", num1, num2, Calcular(num1, num2, soma));
            break;
        case 's':
            printf("%.2f - %.2f = %.2f\n", num1, num2, Calcular(num1, num2, subtracao));
            break;
        case 'm':
            printf("%.2f x %.2f = %.2f\n", num1, num2, Calcular(num1, num2, multiplicacao));
            break;
        case 'd':
            printf("%.2f / %.2f = %.2f\n", num1, num2, Calcular(num1, num2, divisao));
            break;
        case 'f':
            continuar = 0;
            break;

        default:
            break;
        }
    }
    return 0;
}