/*Dato il file "articolo_giornale.txt" ricopiare le prime 30 parole su una
matrice 30x50 di char. Le parole vano ricopiate una per riga e vanno memorizzate
in formato stringa. Il programma infine stamperà le stringhe (una per riga)
memorizzate nella matrice*/

#include <stdio.h>

int main()
{
    FILE* file;
    char  c;
    char  matrice[30][50];
    int   i, j;

    file = fopen("../txt/articolo_giornale.txt", "r");
    if (file == NULL)
    {
        printf("Errore nell'apertura del file\n");
        return 1;
    }
}