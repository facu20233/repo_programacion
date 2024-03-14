#include <stdio.h>

// declaracion
int sumando(int a, int b);

int main() {
    int num1 = 5, num2 = 3;

    // invoca
    int resultado = sumando(num1, num2);

    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}

// definicion
int sumando(int a, int b) {
    int suma;

    suma = a + b;

    return suma;
}
