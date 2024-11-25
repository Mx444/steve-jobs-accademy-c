#include <stdio.h>
#define N 5

float media(int vett[N])
{
    float somma = 0;
    for (int i = 0; i < N; i++)
    {
        somma += vett[i];
    }
    return somma / N;
}

int minimo(int vett[N])
{
    int min = vett[0];
    for (int i = 1; i < N; i++)
    {
        if (vett[i] < min)
        {
            min = vett[i];
        }
    }
    return min;
}

int massimo(int vett[N])
{
    int max = vett[0];
    for (int i = 1; i < N; i++)
    {
        if (vett[i] > max)
        {
            max = vett[i];
        }
    }
    return max;
}

void main()
{

    int scelta;
    int i;
    int vett[N];

    for (i = 0; i < N; i++)
    {
        printf("Inserisci il %d numero: ", i + 1);
        scanf("%d", &vett[i]);
    }

    do
    {
        printf("1) Calcolo media\n");
        printf("2) Calcolo minimo\n");
        printf("3) Calcolo massimo\n");
        printf("4) Esci\n");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("La media e': %f\n", media(vett));
            break;
        case 2:
            printf("Il minimo e': %d\n", minimo(vett));
            break;
        case 3:
            printf("Il massimo e': %d\n", massimo(vett));
            break;
        case 4:
            break;
        }
    }

    while (scelta != 4);
}