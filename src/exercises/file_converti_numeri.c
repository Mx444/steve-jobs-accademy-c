/*Scrivere un programma in C che interpreti i numeri a 4 cifre contenuti nel
 * file numeri.txt  e li trasformi in valori decimali stampandoli a video.*/

#include <stdio.h>

int main()
{
    FILE* file;
    int   num;

    file = fopen("../txt/numeri.txt", "r");
    if (file == NULL)
    {
        printf("Errore nell'apertura del file");
        return 1;
    }

    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }

    fclose(file);
    return 0;
}