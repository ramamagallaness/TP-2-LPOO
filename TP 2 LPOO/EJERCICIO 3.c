/* 3. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda). */

#include <stdio.h>
#include <string.h>

int i;

int esPalindromo(char cadena[]) {
    int longitud = strlen(cadena);
    for (i = 0; i < longitud/2; i++) {
        if (cadena[i] != cadena[longitud-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char cadena[100];
    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", cadena);
    if (esPalindromo(cadena)) {
        printf("La cadena es palindroma.\n");
    } else {
        printf("La cadena no es palindroma.\n");
    }
    return 0;
}


