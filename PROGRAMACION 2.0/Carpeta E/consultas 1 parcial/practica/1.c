#include <stdio.h>
#include <ctype.h>

int esVocal(char vocal);
void mostarCancion(char cancion,char vocal);


int main(){
    // declara
    char cancion, vocal;

    printf("ingrese 1 vocal: \n");
    scanf("%c", &vocal);

    vocal = tolower(vocal);

    printf("Ingrese la estrofa de la cancion completa: \n");
    scanf("%c", &cancion);

    mostarCancion(cancion,vocal);

    return 0;
}



int esVocal(char cancion){

    switch(cancion){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return (1);
        break;
    }
}

void mostarCancion(char vocal, char cancion){
    int cantM=0, cantV=0;

    while (cancion != '.')
    {
        if (isupper(cancion)){
            cantM++;
            cancion = tolower(cancion);
        }
        if (esVocal(cancion) == 1){
            cantV++;
            cancion=vocal;
        }
        printf("%c", cancion);
        scanf("%c", &cancion);
    }
    printf("\n Cantidad de vocales: %d\n", cantV);
    printf("Cantidad de Mayusculas: %d", cantM);
    
}

