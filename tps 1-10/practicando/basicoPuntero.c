#include <stdio.h>

int main() {
    int x = 10;
    int *puntero;

    puntero = &x; 

    printf("El contenido de la variable x es: %d\n", x);
    printf("El contenido al que apunta el puntero es: %d\n", *puntero);
    printf("La dirección de memoria de la variable x es: %p\n", &x);
    printf("El puntero almacena la dirección de memoria: %p\n", puntero);

    return 0;
}

