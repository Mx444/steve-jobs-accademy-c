#include <stdio.h>

void main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {

        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("I valori inseriti sono: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}