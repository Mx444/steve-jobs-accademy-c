#include <stdio.h>

void main(){
    int n;
    printf("Inserisci un numero binario: ");
    scanf("%d", &n);
    int decimale = 0;
    int potenza = 1;
    while (n > 0){
        decimale += (n % 10) * potenza;
        n /= 10;
        potenza *= 2;
    }
    printf("Il numero decimale e': %d\n", decimale);
}