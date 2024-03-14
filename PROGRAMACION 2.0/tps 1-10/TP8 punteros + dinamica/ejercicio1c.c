#include<stdio.h>
#include<stdlib.h>

int buscar(char *cad, char c, int *cant);
void insertar(char *cad, char *nueva, char c);

int main()
{
    char cad[20], caracter, *p_cad, nueva[20], *p_nueva = &nueva[0];
    int cant=0,*p_cant = &cant, retorno;
    
    printf("ingrese una cadena: ");
    gets(cad);

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);
    

    p_cad = &cad[0]; //le asigno el puntero a la cadena

    insertar(p_cad, p_nueva, caracter);

    puts(nueva);

    return 0;
}



int buscar(char *cad, char c, int *cant) // tiene que devolver valor de verdad nada mas
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

void insertar (char *cad, char *nueva, char c) // modifica
{
    while (*cad != '\0')
    {
        if (*cad == c)
        {
            *nueva = *cad;
            nueva++;
            *nueva = *cad;
            
        } else
        {
            *nueva = *cad;
        }

        nueva++;
        cad++;
    }

}