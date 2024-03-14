#include <stdio.h>
#include <ctype.h>

void mostrarCancion(char cancion, char vocal);
int esVocal(char cancion);

int main()
{
    char cancion, vocal;

    printf("Ingrese la vocal: \n");
    scanf("%c", &vocal);
    vocal = tolower(vocal); // minuscula

    printf("Ingrese la estrofa de la cancion completa: \n");
    scanf("%c", &cancion);

    mostrarCancion(cancion, vocal);

    return 0;
}

void mostrarCancion(char cancion, char vocal)
{
    int cantV = 0, cantMayus = 0;

    while (cancion != '.')
    {
        if (isupper(cancion))
        { // para ver si es mayuscula
            cantMayus++;
            cancion = tolower(cancion); // poner en minuscula
        }
        if (esVocal(cancion) == 1)
        {
            cantV++;
            cancion = vocal;
        }
        printf("%c", cancion);
        scanf("%c", &cancion);
    }

    printf("\n Cantidad de vocales: %d\n", cantV);
    printf("Cantidad de Mayusculas: %d", cantMayus);
}

int esVocal(char cancion)
{
    if (cancion == 'a' || cancion == 'e' || cancion == 'i' || cancion == 'o' || cancion == 'u' || cancion == 'A' || cancion == 'E' || cancion == 'I' || cancion == 'O' || cancion == 'U')
    {
        return 1;
    }
}