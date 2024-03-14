#include <stdio.h>

void notas(float pto1, float pto2, float pto3);

int main()
{
    float pto1, pto2, pto3;

    printf("Ingrese el puntaje del 1er Punto: \n");
    scanf("%f", &pto1);
    printf("Ingrese el puntaje del 2do Punto: \n");
    scanf("%f", &pto2);
    printf("Ingrese el puntaje del 3er Punto: \n");
    scanf("%f", &pto3);

    notas(pto1, pto2, pto3);

    return 0;
}

void notas(float pto1, float pto2, float pto3)
{
    float nota = 0;

    nota = (pto1 + pto2 + pto3)/3;

    if (pto1 >= 3.5 * 0.4 && pto2 >= 2.5 * 0.3 && pto3 >= 4 * 0.7 && nota >= 6)
    {
        printf("APROBADO!!!\n");
    }
    else
    {
        printf("Desaprobado..\n");
    }
    printf("Nota : %.1f", nota);
}