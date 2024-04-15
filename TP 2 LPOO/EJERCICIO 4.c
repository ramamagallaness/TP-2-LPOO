/* 4 Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char viejoCaracter, nuevoCaracter;
    int i, j;

    printf("Ingresa una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    printf("Ingresa el caracter que deseas reemplazar: ");
    scanf(" %c", &viejoCaracter);

    printf("Ingresa el nuevo caracter: ");
    scanf(" %c", &nuevoCaracter);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == viejoCaracter) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            str[i] = nuevoCaracter;
        }
    }

    printf("La cadena modificada es: %s\n", str);

    return 0;
}
