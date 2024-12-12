#include <stdio.h>

int main()
{
    FILE* file;
    FILE* new_file;
    char  c;

    file = fopen("../txt/articolo_giornale_1.txt", "r");
    if (file == NULL)
    {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    new_file = fopen("../txt/articolo_giornale_new.txt", "w");
    if (new_file == NULL)
    {
        printf("Errore creazione file\n");
        return 1;
    }

    while ((c = fgetc(file)) != -1)
    {
        if (c == 'a')
        {
            c = fgetc(file);
            if (c == 'l')
            {
                c = fgetc(file);
                if (c == 'u')
                {
                    c = fgetc(file);
                    if (c == 'n')
                    {
                        c = fgetc(file);
                        if (c == 'n')
                        {
                            c = fgetc(file);
                            if (c == 'i')
                            {
                                fputc('a', new_file);
                                fputc('l', new_file);
                                fputc('l', new_file);
                                fputc('i', new_file);
                                fputc('e', new_file);
                                fputc('v', new_file);
                            }
                        }
                    }
                }
            }
        }
        fputc(c, new_file);
    }
    fclose(file);
    fclose(new_file);

    return 0;
}