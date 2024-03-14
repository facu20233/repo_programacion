#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int buscar(char *cad, char c, int *cant);
void insertar(char *cad, char *nueva, char c);

int main()
{
    char cad[20], caracter, *p_cad, *p_nueva;
    int cant=0,*p_cant = &cant, retorno, total=0;
    
    p_cad = &cad[0];

    printf("ingrese una cadena: ");
    gets(cad);

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);
    
    

    retorno = buscar(cad,caracter,p_cant);

    total = strlen(cad) + cant + 1; 
    printf("%d",total);

    p_nueva = malloc(total * sizeof(char)); 

    insertar(p_cad, p_nueva, caracter);
    puts(p_nueva);

    free(p_nueva);



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

void insertar (char *cad, char *nueva, char c)
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