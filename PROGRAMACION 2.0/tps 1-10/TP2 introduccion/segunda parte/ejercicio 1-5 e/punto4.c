#include<stdio.h>

int main(){
    float nota1, nota2, nota3, promedio;

    printf("Ingrese las notas de Lengua, Matemàticas, Ciencias: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    promedio = (nota1 + nota2 + nota3)/3;

    printf("El Promedio es: %.2f", promedio);
    
    return 0;
}