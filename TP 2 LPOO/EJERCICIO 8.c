/* 8. Realizar un programa en el cual el usuario primero ingrese una oración
la cual puede estar en mayúscula o minúscula o de manera alternada
y luego pueda seleccionar que realice las siguientes acciones
a) Mostrar la oración toda en mayúscula
b) Mostrar la oración todo en minúsculas
c) Mostrar la oración alternando una mayúscula y una minúscula
D) Mostrar la oración comenzando todas las palabras con mayúscula */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char oracion[100];
    printf("Ingresa una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);
    oracion[strcspn(oracion, "\n")] = 0;

    int opcion;
    printf("Selecciona una opcion:\n");
    printf("1. Mostrar en mayuscula\n");
    printf("2. Mostrar en minuscula\n");
    printf("3. Mostrar alternando mayuscula y minuscula\n");
    printf("4. Mostrar comenzando las palabras en mayuscula\n");
    scanf("%d", &opcion);

    if(opcion == 1) {
        for(int i = 0; oracion[i]; i++) {
            oracion[i] = toupper(oracion[i]);
        }
        printf("Oracion en mayuscula: %s\n", oracion);
    } else if(opcion == 2) {
        for(int i = 0; oracion[i]; i++) {
            oracion[i] = tolower(oracion[i]);
        }
        printf("Oracion en minuscula: %s\n", oracion);
    } else if(opcion == 3) {
        for(int i = 0; oracion[i]; i++) {
            if(i % 2 == 0) {
                oracion[i] = toupper(oracion[i]);
            } else {
                oracion[i] = tolower(oracion[i]);
            }
        }
        printf("Oracion alternando mayusculas y minusculas: %s\n", oracion);
    } else if(opcion == 4) {
        int capitalizar = 1;
        for(int i = 0; oracion[i]; i++) {
            if(isalpha(oracion[i])) {
                if(capitalizar) {
                    oracion[i] = toupper(oracion[i]);
                    capitalizar = 0;
                } else {
                    oracion[i] = tolower(oracion[i]);
                }
            } else {
                capitalizar = 1;
            }
        }
        printf("Oracion con palabras en mayuscula: %s\n", oracion);
    } else {
        printf("Opcion invalida\n");
    }

    return 0;
}
