#include<stdio.h>

void mostrarCancion(char cancion, char vocal);
char esVocal(char cancion);

int main(){
    char cancion, vocal, anterior;
    
    printf("Ingrese la estrofa:");
    scanf("%c", &cancion);
    printf("Ingrese la vocal:");
    fflush(stdin);
    scanf("%c", &vocal);

    mostrarCancion(cancion, vocal);

    return 0;
}

void mostrarCancion(char cancion, char vocal){
    
    while (cancion != '.')
    {
        if (esVocal(cancion)=='s')
        {
            cancion = vocal;
        } 

        printf("%c", cancion);
        scanf("%c",  &cancion);
        
    }
    
}

char esVocal(char cancion){
    char anterior;
    if (cancion == 'a' || cancion == 'e' || cancion == 'i' || cancion == 'o' || cancion == 'u')
    {
        anterior='s';
    } else
    {
        anterior='n';
    }
    return anterior;
    
}