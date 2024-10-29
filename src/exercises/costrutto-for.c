#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("Il numero e': %d\n", i);
        if (i == 5)
        {
            printf("Il numero e' 5\n");
            break;
        }
    }
}