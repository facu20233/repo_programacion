#include <stdio.h>

int mostrar(char *p_cad, int *cVocales , int *cPalabras);
int esVocal(char caracter);

int main ()
{
    char cad[30], *p_cad = cad;

    int longitud = 0, vocales = 0, palabras = 1;
    int *p_longitud = &longitud, *p_vocales = &vocales , *p_palabras = &palabras; // punteros

    printf("Ingrese una frase: ");
    gets(cad); //ver si se puede hacer con malloc o en que casos se hace con malloc


    
    longitud = mostrar(cad, p_vocales, p_palabras); // se puede pasar el puntero o bien el nombre del arrego que hace referencia a la direccion de memoria

    printf("La longitud de la cadena es: %d",longitud);
    printf("\nLa cantidad de vocales es: %d",vocales);
    printf("\nLa cantidad de palabras es: %d",palabras);

    return 0;
}


int mostrar(char *p_cad, int *cVocales , int *cPalabras)
{
    int longitud = 0;

    while (*p_cad != '\0')
    {

        if (*p_cad == ' ')
        {
            *cPalabras += 1;
        }
        

        if (esVocal(*p_cad))
        {
            *cVocales += 1;
        }

        p_cad++;
        
        longitud++;
    }
    return longitud;
}

int esVocal(char caracter)
{
    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
        break;
    
    default:
        return 0;
        break;
    }
}