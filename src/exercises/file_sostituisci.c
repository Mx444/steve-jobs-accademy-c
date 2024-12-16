#include <stdio.h>

int main()
{
    FILE* file;
    char  buffer[1000];
    int   i, count;

    file = fopen("../txt/articolo_giornale.txt", "r");
    if (file == NULL)
    {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    while (fgets(buffer, 1000, file) != NULL)
    {
        for (i = 0, count = 0; buffer[i] != '\0'; i++)
        {
            if (buffer[i] == 'a')
            {
                if (buffer[i + 1] == 'l' && buffer[i + 2] == 'u' &&
                    buffer[i + 3] == 'n' && buffer[i + 4] == 'n' &&
                    buffer[i + 5] == 'i')
                {
                    count++;
                }
            }
        }
    }
    return 0;
}