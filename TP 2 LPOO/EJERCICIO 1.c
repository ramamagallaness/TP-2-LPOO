/* 1. Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla. */

#include <stdio.h>

int main() {
    char nombre[50];

  printf("Ingresa tu nombre: ");

  scanf("%s", nombre);

  printf("Hola, %s! Bienvenido al programa.\n", nombre);

  return 0;
}

