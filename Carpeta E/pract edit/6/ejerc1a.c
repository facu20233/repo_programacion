#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
    int arreNumero[30]; //30 tamaño nomas
    int num;
    int sumaPa;
    int cantImp;
    srand(time(NULL));
    
    // 20 num

    for (int i = 0; i < 20; i++)
    {
        num = rand() % 401;
        arreNumero[i] = num;
        printf(" %d \n", arreNumero[i]);
    }
    // pares
    for (int j = 0; j < 20; j+2) // 0-19 
    {
        sumaPa += arreNumero[j]; //sumar valores, POSICION par
    }
    printf("suma = %d\n", sumaPa);

    // impares 
    for (int k = 0; k < 20; k=k+2)
    {
        if (arreNumero[k]%3 == 0)
        {
            cantImp++; //cant impares
        }
        printf("cant impares: %d \n", cantImp);
       
        return 0;
    }
    
    



}





// void cargarArreglo(){

// }

// void mostrarArreglo(){

// }

// void sumarycontarArreglo(){

// }

