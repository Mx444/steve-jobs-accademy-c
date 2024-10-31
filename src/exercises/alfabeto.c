#include <stdio.h>

void main()
{
    int  i;
    int  ascii_maiuscolo = 65;
    int  ascii_minuscolo = 97;
    char alfabeto;

    printf("Vuoi stampare alfabeto maiuscolo ? [Y/N]\n");
    scanf("%c", &alfabeto);

    if (alfabeto == 'Y')
    {
        for (i = 0; i < 26; i++)
        {
            printf(" %c", ascii_maiuscolo);
            ascii_maiuscolo++;
        }
    }
    else if (alfabeto == 'N')
    {
        for (i = 0; i < 26; i++)
        {
            printf(" %c", ascii_minuscolo);
            ascii_minuscolo++;
        }
    }
    else
    {
        printf("Inserisci Y o N\n");
    }
}
