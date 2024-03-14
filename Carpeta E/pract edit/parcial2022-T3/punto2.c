#include <stdio.h>

int buscar(char *punt, int *cant_oe);

int main(){


    printf("hola mundo \n");
    int cant_oe=0, palabras;
    char cadena[30];
    char *punt;
    

    punt = &cadena[0];


    printf("ingrese cadena (ej: el poema de la poesia) \n");
    gets(cadena);

    // funciones
    palabras = buscar(punt, &cant_oe);

    printf("cantidad oe: %d \n", cant_oe);
    printf("cantidad palabras con mas de 3 cararcteres: %d \n", palabras);


    return 0;
}

int buscar(char *punt, int *cant_oe)
{
    int cant_caract=0;
    int cant_mayor3=0;

    char *paux = punt;
    
    while (*punt != '\0')
    {
         while (*punt != '\0' && *punt != ' '){

            cant_caract++;

            if (*punt == 'o')
            {
                punt++;
                cant_caract++;
                if (*punt == 'e' && *punt != ' ')
                {
                    
                    *cant_oe++;
                    // punt++;
                }
            }
            punt++;
         }
         if (cant_caract > 3)
                {
                    cant_mayor3++;
                }
         cant_caract = 0;
         if (*punt == ' ')
         {
            punt++;
         }
         
    }
    return cant_mayor3;
  
    

    // while (*punt_palabra != '\0')
    // {
    //     while (*punt_palabra != '\0' && *punt_palabra != ' ')
    //     {
    //         cant_caract++;
    //         punt_palabra++;
    //     }

    //     if (cant_caract > 3)
    //     {
    //         cant_mayor3++;
    //         cant_caract = 0;
    //     }else
    //     {
    //         cant_caract = 0;
    //     }
        
    //     if (*punt_palabra == ' ')
    //     {
    //         *punt_palabra++;
            
    //     }
    // }
    

}
