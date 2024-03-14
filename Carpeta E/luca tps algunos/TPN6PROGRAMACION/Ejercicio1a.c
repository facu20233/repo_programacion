#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 4

int main()
{

    int arreNumero[30];
    int random, suma = 0, cant = 0;

    srand(time(NULL));  

    for (int i = 0; i < 20; i++)
    {
        random = rand() % 401;

        arreNumero[i] = random;


        printf("%d\n",arreNumero[i]);

    }

    for (int j = 0; j < 20; j += 2)
    {
        suma += arreNumero[j];

    }

    for (int k = 1; k < 20; k += 2)
    {
        if (arreNumero[k]%2 == 0)
        {
            cant++;
        }
        
    }
    
    printf("%d\n",suma);
    
    printf("%d\n",cant);
    
    


    return 0;
}
//terminado