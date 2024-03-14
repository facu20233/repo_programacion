#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 20

int main()
{
    char nombre[TAMA], apellido[TAMA]; 
    char arreAux[30];
    int cont = 0;

    printf("Ingrese un nombre: ");
    gets(nombre);
    
    printf("Ingrese un apellido: ");
    gets(apellido); 

    for (int i = 0; apellido[i] != '\0'; i++) //\0 es la marca final
    {
        arreAux[i] = apellido[i];
        cont++;
    }
    
    arreAux[cont] = ',';
    cont++;
    arreAux[cont] = ' '; 
    cont++;

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        
        arreAux[cont] = nombre[i];
        cont++;
    }
    
    puts(arreAux);
        
    return 0;
}
//terminado