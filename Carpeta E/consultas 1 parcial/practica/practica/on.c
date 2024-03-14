#include <stdio.h>

int main(){
    int oncont=0;
    char frase, ant1=' ', ant2=' ';

    printf("ingrese frase: \n");
    scanf("%c",&frase);
// camion.
    while (frase !='.')
    {
        while (frase !=' ' && frase !='.')
        {
            ant1=ant2;
            ant2=frase;
            printf("%c",frase);
            scanf("%c",&frase);
        }
        if (ant1=='o' || ant2=='n')
        {
            oncont++;
        }
        if (frase==' ')
        {
            frase='#';
            ant1=ant2;
            ant2=frase;
            printf("%c",frase);
            scanf("%c",&frase);
        }
        
    }
    
    printf("\nfrases on: %d", oncont);
    



    // printf("hola: \n");

    return 0;
}