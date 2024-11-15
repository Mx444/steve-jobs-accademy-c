#include <stdio.h>
#define N 10

void main()
{
    int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v1[N], v2[N], v3[N];
    int i;

    for (i = 0; i < N / 2; i++)
    {
        v1[i]         = v[i + N / 2];
        v1[i + N / 2] = v[i];
    }

    for (i = 0; i < N; i++)
    {
        v2[i] = v[N - i - 1];
    }

    for (i = 0; i < N; i++)
    {
        if (v[i] % 2 == 0)
            v3[i] = 1;
        else
            v3[i] = 0;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("\n");
}