#include <stdio.h>

int main()
{
    int i;
    int numeroVoti;
    int voto = 0;
    int acc;
    printf("Quanti voti vuoi inserire?\n");
    scanf("%d", &numeroVoti);
    for (i = 0; i < numeroVoti; i++)
    {
        printf("Inserisci il voto \n");
        scanf("%d", &acc);
        voto += acc;
    }
    printf("Media %f\n", (float) voto / numeroVoti);
    return 0;
}