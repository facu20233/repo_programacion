#include <stdio.h>

int main()
{
    char profesorado;
    int categoria;
    float pago;
    int cuotas;

    printf("ingrese categoria:");
    scanf("%d", &categoria);

    // Categoria 1=inicial, 2=primario, 3=secundario, 4=superior
    switch (categoria)
    {
    case 1:
        pago = 4800;
        break;
    case 2:
        pago = 6250;
        break;
    case 3:
        pago = 6800;
        break;
    case 4:
    {
        printf("ingrese carrera:");
        fflush(stdin);
        scanf("%c", &profesorado);
        // SI PROFESORADO=A ED. FISICA
        if (profesorado == 'A')
        {
            pago = 7100;
            // SI PROFESORADO=B lENGUA
        }
        else if (profesorado == 'B')
        {
            pago = 8000;
            // SI PROFESORADO=C INGLES
        }
        else
        {
            pago = 9500;
        }
    }
    break;
    }

    printf("ingrese cant. cuotas:");
    scanf("%d", &cuotas);

    switch (cuotas)
    {
    case 1:
        pago = pago - (pago * 0.15);
        break;
    case 2:
        pago = pago + (pago * 0.10);
        break;
    case 3:
        pago = pago + (pago * 0.15);
        break;
    }
     
    printf("El monto total es:%.2f", pago);

}