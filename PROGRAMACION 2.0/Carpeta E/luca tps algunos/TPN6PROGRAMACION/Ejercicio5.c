#include <stdio.h>
#include<string.h>

int main()
{
    char palabra[20],guiones[20],letra;

    int cont = 0, longitud, intentos = 3,encontrado=0,noEncontrado=0;


    printf("Ingrese una palabra: ");
    gets(palabra);
    
    while (palabra[cont] != '\0')
    {
        guiones[cont] = '-';
        cont++;
    }
    
    puts(guiones);
    
    longitud = strlen(palabra);
    //printf("%d",longitud);


    while (encontrado != longitud && intentos != 0)
    {
        printf("\nIngrese una letra: ");
        fflush(stdin);
        scanf("%c",&letra);

        for (int i = 0; i < longitud; i++)
        {
            if (letra == palabra[i])
            {
                guiones[i] = letra;
                encontrado++;
            } else
            {
                noEncontrado++;
            }
        }
        if (noEncontrado == longitud)
        {
            intentos--;
        }
        noEncontrado = 0;
        
        puts(guiones);
        printf("\nIntentos: %d",intentos);
        
    }


    if (encontrado == longitud)
    {
        printf("\nAdivino la palabra");
    } else
    {
        printf("\nAgoto todos los intentos");
    }
    
    //terminado..
    
    

    return 0;
}