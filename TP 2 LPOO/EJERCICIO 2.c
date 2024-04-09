/* 2. Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario. */

#include <stdio.h>
#include <string.h>

int main() {
    int i, count = 0;
    char str[100];

    printf("Escriba una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("Numero de vocales en la cadena: %d\n", count);

    return 0;
}



