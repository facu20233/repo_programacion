// Inicialización de punteros

#include <stdio.h>

int main (){
    int prim;
    int*punt_num = &prim;
}

// ejemplo (cambiar contenido de variables)

#include <stdio.h>

int main (){
    int prim = 10, seg = 20, temp;
    int *punt_num;

    *punt_num = seg;
    temp = *punt_num;

    *punt_num = seg;
    seg = temp;

    printf("despues - prim: %d, seg:%d, seg:%d", prim,seg);

    return 0;
}

// Asignaciones con Punteros

#include <stdio.h>

int main (){
    int num;
    int *punt;

    num = 101;
    punt = &num;


    printf("la direccion es: %p\n", punt);

    printf("El valor de x es: %p}d\n",*punt);
    
    return 0;
}