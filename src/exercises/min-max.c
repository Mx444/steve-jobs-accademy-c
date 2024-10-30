#include <stdio.h>

int main()
{
    int i, num, min, max;
    for (i = 0; i < 8; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (i == 0)
        {
            min = num;
            max = num;
        }
        else
        {
            if (num < min)
            {
                min = num;
            }
            if (num > max)
            {
                max = num;
            }
        }
    }

    printf("Minimo: %d\n", min);
    printf("Massimo: %d\n", max);
}