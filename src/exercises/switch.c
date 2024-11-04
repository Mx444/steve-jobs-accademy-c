#include <stdio.h>

int main()
{
    int a;

    printf("Inserisci un numero da 1 a 5\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Uno\n");
        break;
    case 2:
        printf("Due\n");
        break;
    case 3:
        printf("Tre\n");
        break;
    case 4:
        printf("Quattro\n");
        break;
    case 5:
        printf("Cinque\n");
        break;
    default:
        printf("Numero non valido\n");
    }
}