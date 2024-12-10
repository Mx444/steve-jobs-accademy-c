#include <stdio.h>

int main()
{
    FILE *nomi, *cognomi, *nominativi;
    char  buffer_nome[100], buffer_cognome[100];

    nomi    = fopen("../txt/nomi.txt", "r");
    cognomi = fopen("../txt/cognomi.txt", "r");
    if (nomi == NULL || cognomi == NULL)
    {
        printf("Impossibile aprire il file.\n");
        return 1;
    }

    nominativi = fopen("../txt/nominativi.txt", "w");
    if (nominativi == NULL)
    {
        printf("Impossibile creare il file");
        fclose(nomi);
        fclose(cognomi);
        return 1;
    }

    while (fgets(buffer_nome, 100, nomi) != NULL &&
           fgets(buffer_cognome, 100, cognomi) != NULL)
    {
        fprintf(nominativi, "%s %s\n", buffer_nome, buffer_cognome);
    }

    fclose(nomi);
    fclose(cognomi);
    fclose(nominativi);

    printf("File nominativi.txt generato con successo.\n");

    return 0;
}