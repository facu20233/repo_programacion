// ejemplo (cambiar contenido de variables)

#include <stdio.h>
#include <ctype.h>

int main (){
    char cadena[80];
    int i;

    puts("introducir una cadena de mayusculas");
    gets(cadena);

    puts("esta es la cadena en minuscula");

    for (i = 0; cadena[i] != '\0' ; i++){ 
        printf("%c", tolower(cadena[i]));
    }
    

    return 0;
}

// ejemplo (cambiar contenido de variables)

#include <stdio.h>
#include <ctype.h>

int main (){
    char cadena[80];
    int i;

    puts("introducir una cadena de mayusculas");
    gets(cadena);

    puts("esta es la cadena en minuscula");

    for (i = 0; cadena[i] != '\0' ; i++){ 
        printf("%c", tolower(cadena[i]));
    }
    

    return 0;
}