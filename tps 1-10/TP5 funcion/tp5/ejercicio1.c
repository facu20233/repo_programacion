#include <stdio.h>

// declaration
int esVocal(cancion);
void mostrarCancion(cancion,vocal);

int main(){ 


    char cancion;
    char vocal;
    int vocales=0;
    int mayusculas=0;

    printf("ingresar caracter:\n");
    scanf("%c",&cancion);
    printf("ingresar vocal:\n");
    scanf("%c",&vocal);

    while (cancion != '.')
    {
        vocales = vocales + esVocal(cancion);
        printf("cantidad de vocales: %d",vocales);

        if (mayusculas)
        {
            mayusculas = mayusculas + 1;
            printf("cantidad de mayusculas: %d",mayusculas);
            // cancion = minuscula;
        }
        mostrarCancion(cancion,vocal);

        printf("ingresar caracter:\n");
        scanf("%c",&cancion);
    }
}

// definicion
int esVocal(cancion);
void mostrarCancion(cancion,vocal);

// funcion
int esVocal(cancion){
    switch (cancion)
    {
    case 'a':
        return (1);
        break;
    case 'e':
        return (1);
        break;
    case 'i':
        return (1);
        break;
    case 'o':
        return (1);
        break;
    case 'u':
        return (1);
        break;
    
    default:
        return(0);
        break;
    }
}

// procedimiento
void mostrarCancion(cancion,vocal){
    if (esVocal(cancion))
    {
        printf("vocal %c: ",vocal);
    }else
    {
        printf("cancion %c: ",cancion);
    }
}