#include <stdio.h>

void main()
{
    int acc   = 0;
    int V1[4] = {1, 3, 5, 2};
    int V2[4] = {1, 8, 2, 3};
    int V3[4];

    printf("Somma vettori : \n");
    for (int i = 0; i < 4; i++)
    {
        V3[i] = V1[i] + V2[i];
        printf("%d ", V3[i]);
    }

    printf("\n");
    printf("Prodotto scalare : \n");

    for (int i = 0; i < 4; i++)
    {
        V3[i] = V1[i] * V2[i];
        printf("%d ", V3[i]);
        acc += V3[i];
    }

    printf("\n");
    printf("Somma prodotto :\n");
    printf("%d ", acc);
}