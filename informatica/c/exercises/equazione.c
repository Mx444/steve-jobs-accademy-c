#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c;
    double delta, x1, x2;

    printf("Inserisci i coefficienti a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    
    printf("Le soluzioni dell'equazione sono: x1 = %f, x2 = %f\n", x1, x2);
}
