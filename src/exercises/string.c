#include <stdio.h>
#include <string.h>
#define N 100

void printfString(char string[N])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
}

int lenghtLib(char string[N]) { return strlen(string); }

int lenghtFunction(char string[N])
{
    int parole = 1;
    for (int i = 0; string[i] != ' '; i++)
    {
        parole += 1;
    }

    return parole;
}

void replaceFunction(char string[N])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a')
        {
            string[i] = 'e';
        }
        else if (string[i] == 'e')
        {
            string[i] = 'i';
        }
        else if (string[i] == 'i')
        {
            string[i] = 'o';
        }
        else if (string[i] == 'o')
        {
            string[i] = 'u';
        }
        else if (string[i] == 'u')
        {
            string[i] = 'a';
        }
    }
}

void main()
{

    char string[N] = "oggi e' una bella giornata";

    printfString(string);
    printf("\n");

    printf("string.h lib : %d", lenghtLib(string));
    printf("\n");

    printf("lenghtFunction : %d", lenghtFunction(string));
    printf("\n");

    replaceFunction(string);
    printf("\n");

    printfString(string);
    printf("\n");
}