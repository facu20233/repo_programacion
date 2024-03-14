#include <stdio.h>

int main()
{
    int decimal,resto,cont = 0,cont1=0;
    int restos[20], arreBinario[20];

    printf("Ingrese un numero decimal: ");
    scanf("%d", &decimal);



    while (decimal != 0)
    {
        resto = decimal % 2;
        restos[cont] = resto;

        decimal = decimal / 2;  
        cont++; 
    }

    cont--;
    
    for (int i = cont; i >= 0; i--)
    {  
        arreBinario[cont1] = restos[i];

        printf("%d",arreBinario[cont1]);
        cont1++; 
    }
    
    
    return 0;
}
//TERMINADO! 
//Preguntar si esta bien el planteo
//y ver como se hace el algoritm, con la parte del hacer i..