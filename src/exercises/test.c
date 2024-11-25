#include <stdio.h>

int square(int x) { return x * x; }

void main()
{
    int test = square(5);
    printf("Square of 5 is %d\n", test);
}