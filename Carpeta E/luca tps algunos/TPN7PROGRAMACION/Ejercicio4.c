#include <stdio.h>

int main ()
{
    char cad1[20],cad2[20],aux_cad[20];
    char *p_cad1, *p_cad2 = cad2, *paux_cad=aux_cad; //punteros
    int num, i = 0;

    printf("Ingrese una cadena de caracteres: ");
    gets(cad1);
    
    printf("Ingrese una cadena de caracteres: ");
    gets(cad2);

    printf("Ingrese un numero entero : ");
    scanf("%d",&num);

    p_cad1 = &cad1[num-1];

    while (*p_cad1 != '\0')
    {
        *paux_cad = *p_cad1;

        p_cad1++;
        paux_cad++;
    }

    p_cad1 = &cad1[num-1]; // volvemos al inicio del arreglo


    while (*p_cad2 != '\0')
    {
        *p_cad1 = *p_cad2;

        p_cad1++;
        p_cad2++;
    }
    paux_cad = aux_cad; //volvemos al inicio del arreglo

    while (*paux_cad != '\0')
    {
        *p_cad1 = *paux_cad;

        p_cad1++;
        paux_cad++;
    }

    puts(cad1);
     //Terminado!!

    

    return 0;
}