#include <stdio.h>

void main (){
    int n;
    printf("Inserisci un numero decimale: ");
    scanf("%d", &n);
    printf("Il numero %d in binario e': ", n);
    for (int i = 31; i >= 0; i--){
        printf("%d", (n >> i) & 1);
    }
    printf("\n");

}