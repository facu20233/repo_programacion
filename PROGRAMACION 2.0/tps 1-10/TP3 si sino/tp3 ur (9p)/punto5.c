#include <stdio.h>

int main()
{
    float precio, reintegro;
    int edad;
    char cuil, domicilio, cuenta;
    char comprobante;

    printf("Ingrese precio de viaje:");
    scanf("%f", &precio);

    printf("ingrese su edad:");
    scanf("%d", &edad);

    printf("Posee CUIL O CUIT?\n");
    scanf("%c", &cuil);

    printf("Posee domicilio en Argentina?\n");
    scanf("%c", &domicilio);

    printf("Posee cuenta Mi argentina con (NIVEL 3)?\n");
    scanf("%c", &cuenta);

    if (edad > 18 && cuil == 'V' && domicilio == 'V' && cuenta == 'V')
    {
        if (precio >= 10000)
        {
            reintegro = precio - (precio * 0.50);
        }
        else if (precio > 200000)
        {
            reintegro = precio - 100000;
        }
    }

    if (comprobante == 'B')
    {
        printf("Transporte");
    }
    
    else if (comprobante == 'C')
    {
    }
    if (comprobante == 'B' || comprobante == 'C' || comprobante == 'T')
        ;
}