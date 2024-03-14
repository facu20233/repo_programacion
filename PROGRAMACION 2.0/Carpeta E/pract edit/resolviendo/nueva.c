#include <stdio.h>

void nuevaCadena(char *punt_cad, char *punt_nue, char letra);

// -------

int main(){

    char cadena[20], cadena_nue[20], letra;
    char *punt_cad, *punt_nue;

    punt_cad = &cadena[0];
    punt_nue = &cadena_nue[0];

    printf("hola mundo \n");
    printf("ingrese cadena \n");
    gets(cadena);
    fflush(stdin);

    printf("ingrese letra \n");
    scanf("%c", &letra);

    // funcion
    nuevaCadena(punt_cad, punt_nue, letra);
    puts(cadena_nue);
    

    return 0;
}

// -------

void nuevaCadena(char *punt_cad, char *punt_nue, char letra){

    
    while (*punt_cad != '\0')
    {
        if (*punt_cad == letra)
        {
            *punt_nue = *punt_cad;
            punt_nue++;
            *punt_nue = *punt_cad;
        }else
        {
            *punt_nue = *punt_cad;
        }

        punt_cad++;
        punt_nue++;
        
    }
    

}