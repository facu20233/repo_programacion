#include <stdio.h>
#include <stdlib.h>

int main() {
    int *puntero; 

    // Asignamos memoria dinámica para un entero
    puntero = (int *)malloc(sizeof(int)); 

    if (puntero == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1; 
    }

    *puntero = 42;

    printf("Valor almacenado en la memoria dinámica: %d\n", *puntero);

    // Liberamos la memoria asignada dinámicamente
    free(puntero);

    return 0;
}
