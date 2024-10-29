#include <stdio.h>

void decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;

    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n            = n / 2;
        i++;
    }

    printf("Il numero binario e': ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Inserisci un numero decimale: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}