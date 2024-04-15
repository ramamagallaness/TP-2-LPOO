/* 6. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo "roma" y "amor". */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i, len1, len2;

    printf("Ingresa la primera cadena de caracteres: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Ingresa la segunda cadena de caracteres: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Las cadenas ingresadas no son anagramas.\n");
    } else {
        for (i = 0; i < len1; i++) {
            count[(int)str1[i]]++;
            count[(int)str2[i]]--;
        }

        for (i = 0; i < 256; i++) {
            if (count[i] != 0) {
                printf("Las cadenas ingresadas no son anagramas.\n");
                return 0;
            }
        }

        printf("Las cadenas ingresadas son anagramas.\n");
    }

    return 0;
}
