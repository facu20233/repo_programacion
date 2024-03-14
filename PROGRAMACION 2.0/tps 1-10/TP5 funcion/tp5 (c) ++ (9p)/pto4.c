#include <stdio.h>

void anioBi(int anio1, int anio2);

int main()
{
    int anio1, anio2;

    printf("Ingrese el 1er año: \n");
    scanf("%d", &anio1);
    
    printf("Ingrese el 2do año: \n");
    scanf("%d", &anio2);

    anioBi(anio1, anio2);

    return 0;
}

void anioBi(int anio1, int anio2)
{
    int menor, mayor, contAB = 0;

    if (anio1 < anio2)
    {
        menor = anio1;
        mayor = anio2;
    }
    else if (anio2 < anio1)
    {
        menor = anio2;
        mayor = anio1;
    }
    else
    {
        printf("Los años son iguales.");
        if ((anio1 % 4 == 0 || anio1 % 400 == 0) && anio1 % 100 != 0)
        {
            printf("Es Año Bisiesto.");
        }
    }

    printf("Los anios Bisiestos son: \n");
    for (int i = menor; i <= mayor; i++)
    {
        if ((anio1 % 4 == 0 || anio1 % 400 == 0) && anio1 % 100 != 0)
        {
            contAB++;
            printf("%d,", i);
        }
    }
    printf("La cantidad de Anios Bisiestos entre %d y %d es: %d", menor, mayor, contAB);
}