#include <stdio.h>

int main() {
    int opcion, num1, num2, resultado;

    printf("Selecciona una operacion:\n");
    printf("1. \n");
    printf("2. \n");
    printf("3. \n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("hola ");
            break;
        case 2:
            printf("chau ");
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
