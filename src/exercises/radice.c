#include <stdio.h>
#include <math.h>

void main(){
    float n, radice;

    printf("Inserisci un numero: ");
    scanf("%f", &n);

    if(n < 0){
        printf("Non e' possibile calcolare la radice quadrata di un numero negativo\n");
    }else{
        radice = sqrt(n);
        printf("La radice quadrata di %f e' %f\n", n, radice);
    }
}