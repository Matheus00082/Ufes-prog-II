int string_length(char *str)
{
    int comprimento = 0;

    while (str[comprimento] != '\0')
    {
        comprimento++;
    }

    return comprimento;
}

void string_copy(char *src, char *dest)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void string_upper(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ' ';
        }
        i++;
    }
}

void string_lower(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ' ';
        }
        i++;
    }
}

void string_reverse(char *str)
{
    int i = 0, tam = string_length(str) - 1;
    while (i < tam / 2)
    {
        char aux;
        aux = str[i];
        str[i] = str[tam - i];
        str[tam - i] = aux;
        i++;
    }
}
