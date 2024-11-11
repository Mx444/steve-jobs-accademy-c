#include <stdio.h>
#define N 5

void main()
{
    int arr[N], temp;
    int scelta;
    int i;

    printf("--------------------\n");
    for (i = 0; i < N; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &arr[i]);
    }
    printf("--------------------\n");

    do
    {
        printf("1. Rotazione a destra\n");
        printf("2. Rotazione a sinistra\n");
        printf("3. Esci\n");
        printf("--------------------\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        printf("--------------------\n");

        if (scelta == 1)
        {
            temp = arr[N - 1];
            for (i = N - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
        }
        else if (scelta == 2)
        {
            temp = arr[0];
            for (i = 0; i < N; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[N - 1] = temp;
        }
        else
        {
            break;
        }

        for (i = 0; i < N; i++)
        {
            printf("Vettore : [%d] Posizione : [%d]\n", arr[i], i);
        }
        printf("--------------------\n");

    } while (scelta > 0 || scelta < 4);
}
