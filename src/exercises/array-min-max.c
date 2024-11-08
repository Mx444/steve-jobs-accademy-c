#include<stdio.h>

void main()
{
    int array[5];
    int min, max, min_pos, max_pos;
    float media;
    int somma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Il vettore inserito e': ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
        somma += array[i];
    }
    printf("\n");

    min = array[0];
    max = array[0];
    min_pos = 0;
    max_pos = 0;

    for (int i = 1; i < 5; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_pos = i;
        }
        if (array[i] > max)
        {
            max = array[i];
            max_pos = i;
        }
    }

    media = somma / 5.0;

    printf("Il valore minimo e': %d alla posizione %d\n", min, min_pos + 1);
    printf("Il valore massimo e': %d alla posizione %d\n", max, max_pos + 1);
    printf("La media dei valori e': %.2f\n", media);
}