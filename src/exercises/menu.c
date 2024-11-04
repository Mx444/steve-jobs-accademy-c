#include <stdio.h>

void main()
{
    int scelta;
    int i, j;
    int lato;

    printf("1. Stampa un quadrato pieno\n");
    printf("2. Stampa un quadrato vuoto\n");
    printf("3. Stampa un triangolo rettangolo pieno\n");
    printf("4. Stampa un quadrato semipieno (tipo bicchiere)\n");
    printf("-----------------------------\n");
    printf("Inserisci la tua scelta: ");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 1:
        printf("Inserisci il lato del quadrato\n");
        scanf("%d", &lato);

        for (i = 0; i < lato; i++)
        {
            for (j = 0; j < lato; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        break;
    case 2:

        printf("Inserisci il lato del quadrato\n");
        scanf("%d", &lato);

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
        break;
    case 3:
        printf("Inserisci il lato del triangolo\n");
        scanf("%d", &lato);

        for (i = 0; i < lato; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    case 4:
        printf("Inserisci il lato del quadrato\n");
        scanf("%d", &lato);

        for (i = 0; i < lato; i++)
        {
            for (j = 0; j < lato; j++)
            {
                if (i == 0 || i > lato / 2 || j == 0 || j == lato - 1)
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
        break;
    default:
        break;
    }
}