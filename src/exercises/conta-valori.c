#include <stdio.h>
#define V 20
#define D 10

void main()
{
    int array[V] = {10, 10, 1, 1, 2, 2, 2, 3, 3, 4,
                    4,  4,  5, 6, 6, 7, 7, 8, 2, 19};

    int i, j;
    int conta[D]    = {0};
    int fuori_range = 0;

    for (i = 0; i < V; i++)
    {
        if (array[i] < 0 || array[i] >= D)
        {
            fuori_range += 1;
        }

        for (j = 0; j < D; j++)
        {
            if (array[i] == j)
            {
                conta[j] += 1;
            }
        }
    }

    for (i = 0; i < D; i++)
    {
        printf("Occorrenze di %d: %d\n", i, conta[i]);
    }

    printf("Valori fuori range: %d\n", fuori_range);
}