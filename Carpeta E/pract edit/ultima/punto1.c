#include <stdio.h>

int buscar(char *punt, int *palabras);

int main(){


    printf("hola mundo \n");
    int cant_oe;
    char cadena[30];
    char *punt;
    int palabras=0;
    

    punt = &cadena[0];


    printf("ingrese cadena (ej: el poema de la poesia) \n");
    gets(cadena);

    // funciones
    cant_oe = buscar(punt, palabras);

    printf("cantidad oe: %d \n", cant_oe);
    printf("cantidad palabras con mas de 3 cararcteres: %d \n", &palabras);


    return 0;
}

int buscar(char *punt, int *palabras)
{
    int cant_caract=0;
    int cant_mayor3=0;
    int cant_oe=0;

    char *punt_x = punt; // aux
    
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


    while (*punt_x != '\0')
    {
        while (*punt_x != '\0' && *punt_x != ' ')
        {
            cant_caract++;
            punt++;
        }

        if (cant_caract > 3)
        {
            cant_mayor3++;
        }
        
        cant_caract = 0;

        punt_x++;
    }

    return cant_oe;
  
    

}
