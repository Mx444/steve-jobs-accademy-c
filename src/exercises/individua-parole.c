#include <stdio.h>
#define N 100

void stampaParole(char string[N])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            printf("%c", string[i]);
        }
        else
        {
            printf("\n");
        }
    }
}

void main()
{
    char string[N] = "Facciamo insieme questo esercizio";

    stampaParole(string);
}