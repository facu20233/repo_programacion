#include <stdio.h>
#include <ctype.h>

int main()
{

    char cadena[100];
    int i;
    char quinta;
    char *punt;

    puts("cadena minusculas");
    gets(cadena);

    puts("cadena consonantes mayusculas");
    

    for (i = 0; cadena[i] != '\0'; i++)
    { // hasta que sea distinto del final

        if (cadena[i] != 97 && cadena[i] != 101 && cadena[i] != 105 && cadena[i] != 111 && cadena[i] != 117)
        { // todas mayusculas menos minusculas
            printf("%c", toupper(cadena[i]));
        }
        else
        {
            printf("%c", cadena[i]);
        }
    }

    // 02

    // punt = cadena; //principio por defecto
    punt = &cadena[0];

    // 03

    printf("\n direccion punt:%c  ", &punt);
    printf("\n direccion arre[0]:%c ", punt);

    // 04

    punt = &cadena[5];

    printf("\n cont arre[4]: %c", *punt);

    // 05

    punt = cadena;

    punt = punt + 3;

    printf("\n cont punt+3: %c", punt);
    printf("\n cont punt+3: %c", *punt);

    // 06
    //  ???

    // 07
    // ???

    return 0;
}
