#include <stdio.h>

void main () {
    int base;
    int altezza;
    int area;
    int perimetro;

    base=4;
    altezza=5;
    area = base*altezza;
    perimetro = (base+altezza)*2;
    
    printf("L'area di un rettangolo di base %d e altezza %d e' %d\n", base, altezza, area);
    printf("Il perimetro di un rettangolo di base %d e altezza %d e' %d\n", base, altezza, perimetro);
}