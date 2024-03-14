
// declarar

#include <stdio.h>

int main(){

    int arreglo1[30];

    return 0;
}

// uso constantes

#include <stdio.h>
#define TAMA 20 //tamaño

int main(){

    int arreglo1[TAMA];

    return 0;
}


// Ejemplos de Arreglos

#include <stdio.h>
#define TAMA 3 //tamaño

int main(){

    int arreglo1[5]; //rapido
    int arreglo2[TAMA]; //recomendado
    int arreglo3[] = {0,1,2,3,4};

    return 0;
}

// Ejemplos de Arreglos

#include <stdio.h>
#define TAMA 20 //tamaño

int main(){

    
    int arre2[TAMA], j=0; //recomendado

    printf("ingrrese 20 numeros");

    for (int i = 0; i < 5; i++)
    {
        printf("\n arre2[%d]:", i);
        scanf("%d", &arre2[i]);
    }
    
    return 0;
}


// por omision

#include <stdio.h>
#define TAMA 5 //tamaño
int arre2[TAMA];

int main(){

    printf("arreglo globañ");
    for (int j = 0; j < TAMA; j++)
    {
        printf("\n arre2[%d]=%d", j, arre2[j]);
    }
    
    
    return 0;
}


// por inicializacion explicita

#include <stdio.h>



int main(){

    int arre3[]={2,4,6};

    printf("arreglo globañ");
    for (int j = 0; j < TAMA; j++)
    {
        printf("\n arre3[%d]=%d", j, arre3[j]);
    }
    
    
    return 0;
}


// en tiempo de ejecucion

#include <stdio.h>
#define TAMA 5  


int main(){

    int arre1[TAMA];

    printf("ingrese 5 numeros");

    for (int j = 0; j < TAMA; j++)
    {
        printf("\n arre1[%d]", j);
        scanf("%f", &arre1[j]);
    }
    
    
    return 0;
}


// Inicialización explícita de una cadena

#include <stdio.h>
#define MAX 45  


int main(){

    char apellido[MAX] = {'P','e','r','e','z','\n',};
    char nombre[MAX] = "Marcelo";
    char unt[12] = {'U','n','i','v','e','r','s','i','d','a','d'};

    return 0;
}





