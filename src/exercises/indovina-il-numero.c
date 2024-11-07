#include <stdio.h>

void main()
{
    int numeroDaIndovinare;
    int numeroInserito;
    int tentativi = 0;

    do
    {
        printf("Operatore 1 : Inserisci un numero da 1 a 9 \n");
        scanf("%d", &numeroDaIndovinare);
    } while (numeroDaIndovinare <= 0 || numeroDaIndovinare > 9);

    do
    {
        printf("Operatore 2 : Indovina il numero\n");
        scanf("%d", &numeroInserito);
        tentativi += 1;
    } while (numeroInserito != numeroDaIndovinare);

    printf("Numero da indovinare : %d\n", numeroDaIndovinare);
    printf("Numero inserito : %d\n", numeroInserito);
    printf("Numero tentativi : %d\n", tentativi);
}