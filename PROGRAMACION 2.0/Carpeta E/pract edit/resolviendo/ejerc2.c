#include <stdio.h>

int buscar(char *punt);

// ---

int main(){
    char cadena[20];
    char *punt_cad;

    punt_cad = &cadena[0];

    printf("hola mundo \n");

    printf("ingrese cadena \n");
    gets(cadena);
    fflush(stdin);

    if (buscar(punt_cad)>0)
    {
        printf("hay errores");
    }else
    {
        printf("no hay errores");
    }
    
    

    return 0;
}

// ----

int buscar(char *punt){
int cantError=0;

    while (*punt != '\0' )
    {
        if (*punt == 'n')
        {
            punt++;
            if (*punt != 'v')
            {
                cantError++;
            }
        }else{
            punt++;
            if (*punt == 'v')
            {
                cantError++;
            }
            
        }
        
        
    }

    return cantError;
    
}
