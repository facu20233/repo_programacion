#include <stdio.h>
int main(){
    char cad;
    int cantEsp=0, cantVocal=0, cantNum=0;

    printf("Ingresar cadena: ");
    scanf("%c", &cad);

    if (cad != '.' && (cad == 'a' || cad=='e' || cad=='i' || cad=='o' || cad=='u') )
    {
       cantVocal++;
    }
    

    while (cad != '.')
    {
        if (cad == ' ')
        {
            cantEsp++;
            scanf("%c", &cad);
            if (cad == 'a' || cad=='e' || cad=='i' || cad=='o' || cad=='u')
            {
                cantVocal++;
            }else{
                 if ((48 <= cad)  && (cad <= 56))
                {
                cantNum++;
                }  
        
            }
            
        }else {
            if ((48 <= cad)  && (cad <= 56))
            {
                cantNum++;
            }  
        }
        scanf("%c", &cad);
    }
    printf("\nLa cantidad de espacio: %i", cantEsp);
    printf("\nCantidad de Vocales: %i", cantVocal);
    printf("\nCantidad de Numeros: %i", cantNum);
    return 0;
    
}