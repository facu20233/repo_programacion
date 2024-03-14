#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 4

void cargarArreglo(int arreglo[], int tama, int num1, int num2);
void mostrarArreglo(int arreglo[], int tama);
void sumaycontarArreglo(int arreglo[], int tama);

int main()
{

    int arreNumero[30];
    int valores, inicio, final;
    int random, suma = 0, cant = 0;

    srand(time(NULL)); //RANDOM?


    printf("Ingrese el numero de valores aletorios: ");
    scanf("%d",&valores);
    
    printf("Ingrese el primer numero del intervalo: ");
    scanf("%d",&inicio);
    
    printf("Ingrese el numero final del intervalo: ");
    scanf("%d",&final);

    cargarArreglo(arreNumero,valores,inicio,final);

    mostrarArreglo(arreNumero,valores);
    
    sumaycontarArreglo(arreNumero,valores);


    return 0;
}

void cargarArreglo(int arreglo[], int tama, int num1, int num2)
{
    int random, num; 

    for (int i = 0; i < tama; i++)
    {   
        num = num2 - num1; //formula para sacar el random verrrr parcial
        random = rand() % (num+1) + num1;
        arreglo[i] = random;
    }
}

void mostrarArreglo(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("%d\n",arreglo[i]);
    }
    
}

void sumaycontarArreglo(int arreglo[], int tama)
{
    int suma = 0, cant = 0 ;

    for (int j = 0; j < tama; j += 2)
    {
        suma += arreglo[j];
    }

    for (int k = 1; k < tama; k += 2)
    {
        if (arreglo[k]%2 == 0)
        {
            cant++;
        }
        
    }
    printf("La suma de las posiciones pares: %d",suma);
    
    printf("\nLa cantidad de numeros de numeros paren en posiciones impares: %d",cant);
}


//terminado 