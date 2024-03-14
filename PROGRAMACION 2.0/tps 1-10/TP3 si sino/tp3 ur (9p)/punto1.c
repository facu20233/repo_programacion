#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Ingrese los lados del triangulo en cm:");
    scanf("%f %f %f",&a , &b, &c);

    if (a==b && a==c && b==c) {
        printf("Es triangulo equilatero \n");
    }else if (a==b || a==c || c==b) {
        printf("Es triangulo isosceles \n");
    }else {
        printf("Es triangulo escaleno \n");
    }

    float perimetro;
    perimetro=a+b+c;
    
    printf("Perimetro es: %.2f",perimetro);
}