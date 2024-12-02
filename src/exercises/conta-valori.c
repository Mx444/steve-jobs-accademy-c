
// Dato un vettore precaricato di 20 numeri interi che possono assumere valori
// da 0 a 9, scrivere un programma che restituisca per ogni valore le occorrenze
// presenti nel vettore. Il programma stamperà:
// 1)  per ogni valore 0 - 9 le occorrenze trovate nel vettore
// 2) se vengono individuati valori fuori range stamperà il numero di valori
// fuori range

#include <stdio.h>
#define A 20
#define B 10
void main()
{
    int array[A] = {10, 0, 1, 1, 2, 2, 2, 3, 3, 4,
                    4,  4, 5, 6, 6, 7, 7, 8, 8, 9};

    int i, j;
    int conta[B]    = {0};
    int fuori_range = 0;

    for (i = 0; i < A; i++)
    {
        if (array[i] < 0 || array[i] > 9)
        {
            fuori_range++;
        }
        else
        {
            conta[array[i]] += 1;
        }
    }

    for (i = 0; i < B; i++)
    {
        printf("Occorrenze di %d: %d\n", i, conta[i]);
    }

    printf("Valori fuori range: %d\n", fuori_range);
}