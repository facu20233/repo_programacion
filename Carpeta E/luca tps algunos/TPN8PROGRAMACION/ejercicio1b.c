#include<stdio.h>
void reempalzar(char *cad, int pos, char c);

int main()
{
    char cad[20], caracter, *p_cad;
    int cant=0,*p_cant = &cant, pos;

    printf("ingrese una cadena: ");
    gets(cad);

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);

    printf("Ingrese la posicion: ");
    scanf("%d",&pos);

    p_cad = &cad[0];

    reempalzar(p_cad, pos, caracter);

    puts(cad);

    return 0;
}


void reempalzar(char *cad, int pos, char c)
{
    cad = cad + pos;

    *cad = c;
}