#include <stdio.h>

int main()
{
    char cad;
    int cantA = 0, cantE = 0, cantO = 0, total;
    printf("Ingresar cadena de caracteres terminada en un punto: ");
    scanf("%c", &cad);
    // toda la cadena

    while (cad != '.')
    {
        switch (cad)
        {
        case 'a':
            cantA++;
            break;
        case 'e':
            cantE++;
            break;
        case 'o':
            cantO++;
            break;
        }
        scanf("%c", &cad);
    }

    total = cantO + cantA + cantE;

    printf("\nla cantidad total de vocales son: %i", total);
    printf("\nla cantidad de a son: %i", cantA);
    printf("\nla cantidad de e son: %i", cantE);
    printf("\nla cantidad de o son: %i", cantO);

    return 0;
}

/*
// gcc -Wall punto1.c -o punto1

cd "c:\Users\User\Desktop\PROGRAMACION 2.0\tps 1-10\TP4 iteracion\tp4 ur falta (7p)\" && gcc punto1.c -o punto1 && "c:\Users\User\Desktop\PROGRAMACION 2.0\tps 1-10\TP4 iteracion\tp4 ur falta (7p)\"punto1
*/
