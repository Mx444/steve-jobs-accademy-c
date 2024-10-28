#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("Il numero maggiore e': %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("Il numero maggiore e': %d\n", n2);
    }
    else if (n1 == n2 && n1 == n3)
    {
        printf("I tre numeri sono uguali %d , %d , %d\n", n1, n2, n3);
    }
    else
    {
        printf("Il numero maggiore e': %d\n", n3);
    }
}