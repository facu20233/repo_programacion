#include <stdio.h>

int main(){ 
    char cad; //pude ser una oracion caracter por caracter
    // inicializado
    int canta=0, cante=0, canto=0; //
    int total;

    // procesar
    printf("ingresar oracion:\n");
    scanf("%c",&cad);

    while ( cad != '.')
    {
        switch (cad)
        {
        case 'a':
            canta++;
            break;
        case 'e':
            canta++;
            break;
        case 'o':
            canta++;
            break;
        }
        scanf("%c",&cad);
    }

    // total
    total = canta+cante+canto;

    // mostrar
printf("cantidad total 'a,e,o': %d", total);
printf("cantidad total 'a': %d", canta);
printf("cantidad total 'e': %d", cante);
printf("cantidad total 'o': %d", canto);
}