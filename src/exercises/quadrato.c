#include <stdio.h>

void main()
{
    int  i, j;
    int  lato;
    char quadrato;

    printf("Vuoi stampare un quadrato pieno? [Y/N]\n");
    scanf("%c", &quadrato);
    printf("Inserisci il lato del quadrato\n");
    scanf("%d", &lato);

    if (quadrato == 'Y')
    {
        for (i = 0; i < lato; i++)
        {
            for (j = 0; j < lato; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (quadrato == 'N')
    {

        for (i = 0; i < lato; i++)
        {
            for (j = 0; j < lato; j++)
            {
                if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }

            printf("\n");
        }
    }
    else
    {
        printf("Inserisci Y o N\n");
    }
}