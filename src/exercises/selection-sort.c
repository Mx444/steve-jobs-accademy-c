#include <stdio.h>
#define N 10

void main()
{
    int vett[N] = {2, 5, 7, 10, 9, 8, 4, 1, 0, 6};
    int i, j;
    int min;
    int temp;
    printf("[ ");
    for (i = 0; i < N - 1; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
        {
            if (vett[j] < vett[min])
            {
                min = j;
            }
        }
        temp      = vett[i];
        vett[i]   = vett[min];
        vett[min] = temp;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", vett[i]);
    }
    printf("] ");
}