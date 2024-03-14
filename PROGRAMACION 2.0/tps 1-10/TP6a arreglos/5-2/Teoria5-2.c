
// ejemplo gets puts

#include <stdio.h>
#define TAMA 50


int main(){

    char nombre[TAMA];

    printf("ingrese su nombre");
    gets(nombre);

    printf("el nombre ingresado es");
    puts(nombre);

    return 0;
}


// ejemplo gets puts

#include <stdio.h>
#define TAMA 10

void Inicalizar (int arre[TAMA], int cant);
void Inicalizar (int arre[TAMA], int cant);

int main(){
    int arre[TAMA];
    int cant;

    printf("ingrese cant element menor a 10: ");
    scanf("%d", &cant);

    Inicalizar (arre,cant);
    Inicalizar (arre,cant);

    for (int i= 0; i< cant; i++)
    {
        printf("\n arre[%d] = %d", i, arre[i]);
    }
    

    return 0;
}

void CargarArreglo(int arre[TAMA], int cant){
    int i;
    for (i = 0; i <cant; i++)
    {
        arre[i]=i*3;
    }
    
}

void Inicalizar (int arre[TAMA], int cant){
    int i;
    for (i = 0; i < cant; i++)
    {
        arre[i]=0;
    }
    
}

// ejemplo clase

#include <stdio.h>
#define MAX 20

int contarVocales(char arre[]);

int main(){
    char cadena[MAX];
    int cantidad;
    printf("ingrese una cadena: ");
    gets(cadena);
    cantidad = contarVocales(cadena);
    printf("vocales: %d", cantidad);

    return 0;
}

int contarVocales(char arre[]){
    int cant=0;

    for (int i = 0; i < arre[i] != '\0'; i++)
    {
        switch (arre[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cant++;
            break;        
        }
    }

    return cant;
    
}


    








