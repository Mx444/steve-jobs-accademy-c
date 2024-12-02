#include <stdio.h>
#define A 20
#define B 10
void main()
{
    int array[A] = {10, 10, 1, 1, 2, 2, 2, 3, 3, 4,
                    4,  4,  5, 6, 6, 7, 7, 8, 8, 19};

    int i, j;
    int conta[B]    = {0};
    int fuori_range = 0;

    for (i = 0; i < A; i++)
    {
        if (array[i] < 0 || array[i] > 9)
        {
            fuori_range++;
        }

        conta[array[i]] += 1;
    }

    for (i = 0; i < B; i++)
    {
        printf("Occorrenze di %d: %d\n", i, conta[i]);
    }

    printf("Valori fuori range: %d\n", fuori_range);
}