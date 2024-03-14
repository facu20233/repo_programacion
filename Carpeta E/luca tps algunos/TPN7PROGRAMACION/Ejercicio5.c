#include <stdio.h>

int main()
{
    int posicion;
    long dni;
    char tabla[30] = "TRWAGMYFPDXBNJZSQVHLCKE", *p_tabla = tabla, letra;

    printf("Ingrese su DNI: ");
    scanf("%d",&dni);


    posicion = (dni % 23);
    p_tabla += posicion;

    letra = *p_tabla;

    printf("Su NIF es: %c%d",letra,dni);

    //TERMINADO
    // ver en consulta si esta bien la manera..
    return 0;
}