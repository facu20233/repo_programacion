#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char cad[100];
    gets(cad);
    char *punt;

    punt = cad; //1era manera
    //punt = &cad[0]; 2da manera


    while (*punt != '\0')
    {
        if (*punt != 97 && *punt != 101 && *punt != 105 && *punt != 111 && *punt != 117 )
        {
            *punt = toupper(*punt);
        }
        punt++;
    }

    punt = cad;
    
    printf("\nLa direccion de la variable punt es: %d",&punt); //3.1, falta el 3.2
    printf("\nContenido de la quinta selda del arreglo: %c",cad[4]); //4
    printf("\nContendio de la quinta selda del arreglo: %c",*(punt+4)); 

    //ver 6 y 7 
    return 0;
}