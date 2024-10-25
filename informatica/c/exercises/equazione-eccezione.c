#include <stdio.h>  
#include <math.h>

void main(){
    float a, b, c, delta, x1, x2;

    printf("Inserisci il valore di a: ");
    scanf("%f", &a);
    printf("Inserisci il valore di b: ");
    scanf("%f", &b);
    printf("Inserisci il valore di c: ");
    scanf("%f", &c);
    
    delta = b*b - 4*a*c;
    
    if(delta < 0){
        printf("L'equazione non ha soluzioni reali\n");
    }else if(delta == 0){
        x1 = -b/(2*a);
        printf("L'equazione ha una soluzione reale: x1 = %f\n", x1);
    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("L'equazione ha due soluzioni reali: x1 = %f, x2 = %f\n", x1, x2);
    }
}