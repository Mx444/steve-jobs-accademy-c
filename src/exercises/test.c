#include <stdio.h>
#define V 20
void main()
{

    char s[V] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    int  i;
    for (i = 0; i < V; i++)
    {
        printf("%c", s[i]);
    }
}