#include <stdio.h>
#define N 100

int contaParole(char string[N])
{
    int parole = 0;

    if (string[0] != ' ' && string[0] != '\0')
    {
        parole = 1;
    }

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ' && string[i - 1] == ' ')
        {
            parole += 1;
        }
    }

    return parole;
}

void main()
{
    char string[N] = "IDA Pro";

    printf("Parole stringa : %d", contaParole(string));
}