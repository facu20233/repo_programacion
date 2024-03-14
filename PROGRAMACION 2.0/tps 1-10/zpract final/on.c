#include <stdio.h>

void calcular(char *p);

int main(){

    printf("hola mundo \n");

    char cadena[30]="hoy es marton";
    char *p;

    p = &cadena[0];
    calcular(p);

    // -----

    char cadena_D[30];

    printf("ingrese cadena \n");
    gets(cadena_D);

    p = &cadena_D[0];

    calcular(p);



    return 0;
}

void calcular(char *p){
    int cant_on=0;
    int cant_Mayor3 = 0;
    int cant_caracteres = 0;

    while (*p != '\0') //oracion
    {
        while (*p != '\0' && *p != ' ') //palabras
        {
            cant_caracteres++;

            if (*p == 'o')
            {
                p++;
                if (*p == 'n')
                {
                    cant_on++;
                    p++;
                }

            }

            if (cant_caracteres > 3)
            {
                cant_Mayor3++;
                cant_caracteres=0;
            }
            
            p++;
        }

        if (*p == ' ')
        {
            p++;
            cant_caracteres=0;
        }  
    }

    printf("cantidad palabras terminaddas on: %d \n", cant_on);
    printf("cantidad palabras mayor que 3: %d \n", cant_Mayor3);
    
    //  
}