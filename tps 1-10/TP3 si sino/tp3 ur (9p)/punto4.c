#include <stdio.h> 

int main() 
{
    float carnes, pastas, verduras, forrajeria, lacteos, articulos, total;
    printf("Ingrese precio de la Carne a llevar:");
    scanf("%f", &carnes);

    printf("Ingrese precio de la Pastas y panificados a llevar:");
    scanf("%f",&pastas);
    
    printf("Ingrese precio de la Verduras y frutas a llevar:");
    scanf("%f",&verduras);

    printf("Ingrese precio de Productos de forrajeria a llevar:");
    scanf("%f",&forrajeria);

    printf("Ingrese precio de Lacteos y huevos a llevar:");
    scanf("%f",&lacteos);

    printf("Ingrese precio de Articulos de limpieza a llevar:");
    scanf("%f",&articulos);

    carnes=carnes-(carnes*0.15);
    pastas=pastas-(pastas*0.10);
    verduras=verduras-(verduras*0.5);
    forrajeria=forrajeria-(forrajeria*0.15);
    lacteos=lacteos-(lacteos*0.10);
    total=(carnes+pastas+verduras+forrajeria+lacteos+articulos);
    printf("El total es: %.2f", total);
}