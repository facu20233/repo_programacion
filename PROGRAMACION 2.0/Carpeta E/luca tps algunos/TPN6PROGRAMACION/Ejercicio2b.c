#include <stdio.h>

int main()
{
    int suma=0,numero;
    char nombreCompleto[40];

    printf("Ingrese un nombre completo: ");
    gets(nombreCompleto);


    for (int i = 0; nombreCompleto[i] != '\0' ; i++)
    {   
        
        if (nombreCompleto[i] == ' ')
        {   
            for (int j = i; nombreCompleto[j] != '\0'; j++)
            {
                nombreCompleto[j] = nombreCompleto[j+1];
            }
        }

        if (nombreCompleto[i]>=65 && nombreCompleto[i]<=90)
        {
            numero = nombreCompleto[i]; 
            suma += numero;  
        }
        
    }

    puts(nombreCompleto);
    printf("\nLa suma es %d: ",suma);

    //terminado
    // preguntar si esta bien como recorri el arreglo, o hy otra manera

    return 0;
}