#include<stdio.h>
#define TAMA 20

int mirarAlSur(char cad[]);

int main()
{
    char instrucciones[TAMA];
    int cantInst;

    printf("Ingrese una cadena de instrucciones: ");
    gets(instrucciones);

    cantInst = mirarAlSur(instrucciones);

    printf("\nLa cantidad de instrucciones para mirar al sur: %d",cantInst);



    return 0;
}
//TERMINADO..!

int mirarAlSur(char cad[])
{
    int i = 0, cant = 0, dire = 0;

    while (cad[i] != '\0' && dire != 2 && dire != -2)
    {
        if (cad[i] == 'H')
        {
            dire++;
            cant++;
        }
        if (cad[i] == 'A')
        {
            dire--;
            cant++;
        }
        i++;
    }
    
    if (dire != 2 && dire != -2)
    {
        cant = -1;
    }
    
    return cant;
}

