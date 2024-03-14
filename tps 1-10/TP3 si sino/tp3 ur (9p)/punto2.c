#include <stdio.h>

int main()
{
    float energia, ingresos;

    printf("Ingrese Consumo electrico:");
    scanf("%f", &energia);

    printf("Ingrese Ingresos brutos anuales:");
    scanf("%f", &ingresos);

    if (energia <= 3301 && ingresos <= 748382.08)
    {
        printf("Pertenece a la categoria A");
    }
    else if (energia <= 5000 && ingresos <= 1112459.83)
    {
        printf("Pertenece a la categoria B");
    }
    else if (energia <= 6701 && ingresos <= 1557443.76)
    {
        printf("Pertenece a la categoria C ");
    }
    else if (energia <= 10000 && ingresos <= 1934273.04)
    {
        printf("Pertenece a la categoria D");
    }
    else if (energia <= 20000 && ingresos <= 3416526.83)
    {
        printf("Pertenece a la categoria G");
    }
    else if (energia <= 20001 && ingresos <= 4229985.61)
    {
        printf("Pertenece a la categoria H");
    }
    else if (energia > 20000)
    {
        printf("Pertenece al Regimen General, supera kw");
    }
    else if (ingresos > 4229985.60)
    {
        printf("Pertenece al Regimen General, supera ingresos");
    }
}