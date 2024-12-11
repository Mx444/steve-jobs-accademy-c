#include <stdio.h>

int main() {

    FILE *file;
    char c;
    int count = 0;

    file = fopen("../txt/articolo_giornale.txt", "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == 'a') {
            c = fgetc(file);
            if (c == 'l') {
                c = fgetc(file);
                if (c == 'u') {
                    c = fgetc(file);
                    if (c == 'n') {
                        c = fgetc(file);
                        if (c == 'n') {
                            c = fgetc(file);
                            if (c == 'i') {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("Il numero di occorrenze della parola 'alunni' nel file e': %d\n", count);
    fclose(file);
    
    return 0;
}