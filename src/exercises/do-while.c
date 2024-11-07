#include <math.h>
#include <stdio.h>

void main()
{
    int scelta;
    int a, b;

    do
    {
        printf("1) Calcolare la media di due valori \n");
        printf("2) Scambiare i due valori memorizzati nelle variabili \n");
        printf("3) Dati i due valori dei cateti di un triangolo rettangolo, "
               "calcolare il valore dell'ipotenusa \n");
        printf("4) Dati due valori verificare se sono uguali altrimenti "
               "indicare il maggiore dei due \n");
        printf("Inserisci la tua scelta: ");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("Inserisci il primo valore: ");
            scanf("%d", &a);
            printf("Inserisci il secondo valore: ");
            scanf("%d", &b);
            printf("La media dei due valori e': %.2f\n", (a + b) / 2.0);
            break;
        case 2:
            printf("Inserisci il primo valore: ");
            scanf("%d", &a);
            printf("Inserisci il secondo valore: ");
            scanf("%d", &b);
            int temp = a;
            a        = b;
            b        = temp;
            printf("I valori scambiati sono: a = %d, b = %d\n", a, b);
            break;
        case 3:
            printf("Inserisci il primo valore (cateto): ");
            scanf("%d", &a);
            printf("Inserisci il secondo valore (cateto): ");
            scanf("%d", &b);
            printf("L'ipotenusa e': %.2f\n", sqrt(a * a + b * b));
            break;
        case 4:
            printf("Inserisci il primo valore: ");
            scanf("%d", &a);
            printf("Inserisci il secondo valore: ");
            scanf("%d", &b);
            if (a == b)
                printf("I valori sono uguali.\n");
            else if (a > b)
                printf("Il maggiore e': %d\n", a);
            else
                printf("Il maggiore e': %d\n", b);
            break;
        default:
            printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta < 1 || scelta > 4);
}
