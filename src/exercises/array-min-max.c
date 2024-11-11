#include <stdio.h>
#define N 5

void main()
{

    int arr[N];
    int min, max, posmin, posmax;
    int acc = 0;
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &arr[i]);
    }

    printf("--------------------\n");

    for (i = 0; i < N; i++)
    {
        printf("Vettore : [%d] Posizione : [%d]\n", arr[i], i);

        if (i == 0)
        {
            min    = arr[i];
            posmin = i;
            max    = arr[i];
            posmax = i;
        }
        else
        {
            if (arr[i] < min)
            {
                min    = arr[i];
                posmin = i;
            }
            if (arr[i] > max)
            {
                max    = arr[i];
                posmax = i;
            }
        }
        acc += arr[i];
    }

    printf("--------------------\n");
    printf("Minimo:  [%d] , Posizione: [%d]\n", min, posmin);
    printf("Massimo: [%d] , Posizione: [%d]\n", max, posmax);
    printf("--------------------\n");
    printf("Media: %2.f\n", (double) acc / N);
}