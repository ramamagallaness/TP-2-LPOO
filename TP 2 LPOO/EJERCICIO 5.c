/* 5. Realiza un programa que reemplace todas las apariciones de un carácter en una cadena de caracteres ingresada por el usuario
 por otro carácter también ingresado por el usuario. */
 
#include <stdio.h>
#include <string.h>

void CaracterReemplazado(char *str, char viejoCaracter, char nuevoCaracter) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == viejoCaracter) {
            str[i] = nuevoCaracter;
        }
    }
}

int main() {
    char str[100];
    char viejoCaracter, nuevoCaracter;

    printf("Ingresa una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    printf("Ingresa el caracter que deseas reemplazar: ");
    scanf(" %c", &viejoCaracter);

    printf("Ingresa el nuevo caracter: ");
    scanf(" %c", &nuevoCaracter);

    CaracterReemplazado(str, viejoCaracter, nuevoCaracter);

    printf("La cadena modificada es: %s\n", str);

    return 0;
}



