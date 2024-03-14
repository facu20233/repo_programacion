#include<stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int tiros;
    int *puntero;


    printf("Cuantos tiros va a realizar: ");
    scanf("%d",&tiros);

    puntero = (int *)malloc(tiros * sizeof(int));


    for (int i = 0; i < tiros; i++)
    {      
        printf("Ingrese el valor: ");
        scanf("%d", &puntero[i]);
        
    }

    
    for (int i = 0; i < tiros; i++)
    {
        printf("\npuntaje: %d", *puntero );
        puntero++;
    }
    
    
    //free(puntero); me salta erro cuando pongo el free

    return 0;
}