#include <stdio.h>

int buscar(char *punt, int *cant_palab);

// ---------

int main(){

    char cadena[30];
    char *punt_cad;
    int cant_oe;
    int cant_palab=0;

    punt_cad = &cadena[0];

    // printf("hola mundo \n");

    printf("ingrese cadena (ej: el poema de la poesia ) \n");
    gets(cadena);

    // modulo
    cant_oe = buscar(punt_cad, &cant_palab);

    printf("cantidad hiatos: %d \n", cant_oe);
    printf("cantidad palabras mayor a 3 letras: %d \n", cant_palab);

    return 0;
}

// ----------

int buscar(char *punt, int *cant_palab){ //sin palabra anda
    int cant_oe=0;
    char *punt_aux = punt;
    int cant_caract=0; 

    while (*punt != '\0')
    {
        if (*punt == 'o')
        {
            punt++;
            if (*punt == 'e')
            {
                cant_oe++;
            }
            
        }
        punt++;
        
    }

    while (*punt_aux != '\0')
    {
        while (*punt_aux != '\0' && *punt_aux != ' ')
        {
            cant_caract++;
            punt_aux++;
        }

        if (cant_caract > 3)
        {
            cant_palab++;
        }
        
        cant_caract = 0;

        punt_aux++;
    }

    return cant_oe;
    
}