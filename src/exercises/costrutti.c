#include <stdio.h>
#include <stdbool.h>

void main(){
    int n = 10;
    bool greater = n > 5;

    if(!greater) printf("n non è maggiore di 5\n");
    else printf("n è maggiore di 5\n");
}