/* 7. Realizar un programa que ingrese 5 palabras y devuelva la cadena mas
larga entre ellas */

#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][100];
    int i, longitud_maxima = 0;
    char palabra_mas_larga[100];

    for (i = 0; i < 5; i++) {
        printf("Ingrese la palabra %d: ", i + 1);
        scanf("%s", palabras[i]);

        if (strlen(palabras[i]) > longitud_maxima) {
            longitud_maxima = strlen(palabras[i]);
            strcpy(palabra_mas_larga, palabras[i]);
        }
    }

    printf("La palabra mas larga es: %s\n", palabra_mas_larga);
    return 0;
}

