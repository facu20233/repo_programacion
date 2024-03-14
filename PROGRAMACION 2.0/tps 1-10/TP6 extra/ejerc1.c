#include <stdio.h>

int esVocal(char frase);

int main(){ 

    char frase;
    char vocal='z';
    int cantDip=0;

    printf("ingresar frase:\n");
    // scanf("%c",&frase);

    // hoy es martes, 12 marzo
    while (frase != '.'){
        while (frase != ',')
        {
            if (vocal==frase)
            {
                cantDip++;
            }
            if (esVocal(frase)==1)
            {
                vocal = frase;
            }
        }
        printf("ingresar caracter:\n");
        scanf("%c",&frase);
    }
}

// funcion
int esVocal(char frase){
    switch (frase)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
    default:
        return 0;
    }
}