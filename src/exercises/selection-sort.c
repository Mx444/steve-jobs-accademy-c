#include <stdio.h>

void main()
{
    int V[4] = {1, 3, 5, 2};
    int min, temp;

    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (V[j] < V[min])
            {
                min = j;
            }
        }
        temp   = V[i];
        V[i]   = V[min];
        V[min] = temp;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", V[i]);
    }
}