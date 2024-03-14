#include <stdio.h>

void buscar(char *punt);

int main()
{

    printf("hola mundo \n");

    // char cadena[20];
    char cadena[50] = "hoy es martoes soloeado";
    char *punt;

    punt = &cadena[0];

    printf("ingrese cadena \n");
    // gets(cadena);

    // funciones
    buscar(punt);

    return 0;
}

void buscar(char *punt)
{
    int cant_oe = 0;
    int cant_caract = 0;
    int palabras_mayorA3 = 0;

    // hoy es martes soloeado
    while (*punt != '\0') //oracion
    {
        while (*punt != '\0' && *punt != ' ') //palabra
        {
            cant_caract++;

            if (*punt == 'o')
            {
                punt++;

                if (*punt == 'e')
                {
                    cant_caract++;
                    cant_oe++;
                    punt++;
                }
            }

            if (cant_caract > 3)
            {
                palabras_mayorA3++;
                cant_caract = 0;
            }
            else
            {
                punt++;
            }
        }

        if (*punt == ' ')
        {
            punt++;
            cant_caract = 0;
        }
    }
    
    printf("cantidad oe: %d \n", cant_oe);
    printf("cantidad palabras con mas de 3 cararcteres: %d \n", palabras_mayorA3);
}
