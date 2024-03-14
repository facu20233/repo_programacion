#include <stdio.h>

int buscar(char *punt, int *cant_oe);

int main(){

    char cadena[30];
    char punt_cadena;
    int cant_oe=0;
    int cant_palab3;

    punt_cadena = &cadena[0];

    printf("ingrese cadena (ej: el poema de la poesia) \n");
    gets(cadena);

    // modulo

    cant_palab3 = buscar(punt_cadena, &cant_oe);

    printf("cantidad hiatos: %d \n", cant_oe);

    printf("cantidad palabras: %d \n", cant_palab3);

    return 0;
}

int buscar(char *punt, int *cant_oe){
    int cant_caract=0;
    int cant_mayor3;

    while (*punt != '\0')
    {
        while (*punt != '\0' && *punt != ' ')
        {
            cant_caract++;
            if (*punt == 'o')
            {
                punt++;
                cant_caract++;
                if (*punt == 'e' && *punt != ' ')
                {
                    *cant_oe++;
                }
            }
            punt++;
        }

        if (cant_caract > 3)
        {
            cant_mayor3++;
        }

        if (*punt == ' ')
        {
            punt++;
        }
        
        
    }
    
    return cant_mayor3;
}