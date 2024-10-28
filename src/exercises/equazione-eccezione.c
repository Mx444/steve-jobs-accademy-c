#include <math.h>
#include <stdio.h>


int main()
{
    float a, b, c, delta, x1, x2;

    printf("Inserisci il valore di a: ");
    scanf("%f", &a);
    printf("Inserisci il valore di b: ");
    scanf("%f", &b);
    printf("Inserisci il valore di c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("L'equazione non e' di secondo grado\n");
    }
    else
    {
        delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            printf("L'equazione non ha soluzioni reali\n");
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("L'equazione ha una soluzione reale: x = %f\n", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("L'equazione ha due soluzioni reali: x1 = %f, x2 = %f\n", x1,
                   x2);
        }
    }

    return 0;
}