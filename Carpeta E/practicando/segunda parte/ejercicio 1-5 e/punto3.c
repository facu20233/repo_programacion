#include<stdio.h>
#define IVA 1.21

int main(){
    float precio, descuento, precioSinIva, precioConIva;

    printf("safjiuagfg0f: ");
    printf("Ingrese el precio: ");
    scanf("%f", &precio);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &descuento );

    precioSinIva = precio - (precio * descuento/100) ;
    precioConIva = precioSinIva * IVA;

    printf("El Precio Final sin IVA es: %.2f", precioSinIva);
    
    printf("\nEl Precio Final con IVA es: %.2f", precioConIva);


    return 0;
}