#include <stdio.h>

int buscar(char *punt, int *cant_mayor3);

// ----------------------------------------

int main(){


    char cadena[20];
    char *punt_cad;
    int cant_mayor3=0, hiatos;

    punt_cad = &cadena[0];

    printf("ingrese cadena (ej: el poema de la poesia) \n");
    gets(cadena);
    fflush(stdin);

    // printf("hola mundo \n");

    // modulos
    hiatos = buscar(punt_cad, &cant_mayor3);

    // mostrar
    printf("cantidad de hiatos: %d \n", hiatos);
    printf("cantidad de palabras mayor a 3 letras: %d \n", cant_mayor3);
    


    return 0;
}

// ----------------------------------------

int buscar(char *punt, int *cant_mayor3){
    int cant_oe=0;
    int cant_caract=0;
    // char *punt_aux = punt;

    
    while (*punt != '\0') 
    {
        while (*punt != '\0' && *punt != ' ')
        { 
            cant_caract++;

            if (*punt == 'o')
            {
                punt++;
                if (*punt == 'e')
                {
                    cant_caract++;
                    cant_oe++;
                }

                // if (*punt != ' ')
                // {
                //     cant_caract++;
                // }
                
                
            }
            punt++;
        }

        if (cant_caract > 3)
        {
           cant_mayor3++;
        }
        
        
        cant_caract = 0;
        

        punt++;
    }


    

    return cant_oe;
    
}