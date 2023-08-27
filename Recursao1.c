#include <stdio.h>
#include <stdlib.h>

void ImprimeInvertido(char *string);
void scanner(char *string);

int main()
{
    char string[1001];
    scanner(string);
    ImprimeInvertido(string);
    return 0;
}

void scanner(char *string)
{
    int i = 0;
    while (i < 1001 && scanf("%c", &string[i]) != EOF)
    {
        i++;
    }
}

void ImprimeInvertido(char *string)
{
    static int i = 0, j;

    if (string[i] == '\0')
    {
        return;
    }
//juliana
    if (string[i] == ' ')
    {
        j = i - 1;
        while (string[j] != ' ' && j >= 0)
        {
            printf("%c", string[j]);
            j--;
        }
        printf(" ");
    }
    i++;
    ImprimeInvertido(string);
}
