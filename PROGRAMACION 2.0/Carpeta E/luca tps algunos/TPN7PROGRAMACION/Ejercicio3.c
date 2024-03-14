#include <stdio.h>

int main()
{
    int arre[]={1,3,4,6}; // hay una funcion para saber el tamaño del arreglo stlen?
    char *punt = &arre[0];

    while (*punt != '\0')
    {
        printf("hola");
        punt++;
    }
    

    return 0;
}