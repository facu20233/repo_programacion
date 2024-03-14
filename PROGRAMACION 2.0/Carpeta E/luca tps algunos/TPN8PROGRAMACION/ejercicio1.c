#include<stdio.h>

int buscar(char *cad, char c, int *cant);

int main()
{
    char cad[20], caracter, *p_cad;
    int cant=0,*p_cant = &cant, retorno;

    printf("ingrese una cadena: ");
    gets(cad);

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);

    p_cad = &cad[0];

    retorno = buscar(p_cad, caracter, p_cant);

    printf("cantidad: %d",*p_cant);

    return 0;
}



int buscar(char *cad, char c, int *cant)
{
    while (*cad != '\0')
    {
        if (*cad == c)
        {
            *cant +=1;
            
        }

        cad++;
    }
    if (*cant>0)
    {
        return 1;
    }
    

}