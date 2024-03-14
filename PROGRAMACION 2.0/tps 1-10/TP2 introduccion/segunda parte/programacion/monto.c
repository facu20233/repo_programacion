#include <stdio.h>
#define IVA 0.21

int main()
{
    float monto, precio;

    precio = 325.50;                      // declaro variables.
    monto = precio + (IVA * precio);      // calculo monto a pagar

    printf("Monto a pagar= %f\n", monto); // muestro en pantalla
    
    return 0;
}

// gcc -E monto.c -o monto.i
// gcc -S monto.i -o monto.s
// gcc -c monto.s -o monto.o
// gcc monto.o -o monto