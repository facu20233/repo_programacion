#include <stdio.h>

int palaon(char frase);

int main(){
    int oncont=0;
    char frase, ant1=' ', ant2=' ';

    printf("ingrese frase: \n");
    scanf("%c",&frase);
// camion.
    while (frase !='.')
    {
        if (palaon(frase)==1)
        {
            oncont++;
        }
        scanf("%c",&frase);
    }
    if (ant1=='o' && ant2=='n')
    {
        oncont++;
    }
        
    
    printf("frases on: %d\n", oncont);
    



    // printf("hola: \n");

    return 0;
}

int palaon(char frase){
    char ant1=' ', ant2=' ';

    while (frase !=' ')
        {
            ant1=ant2;
            ant2=frase;
            scanf("%c",&frase);
        }
        if (ant1=='o' && ant2=='n')
        {
            return 1;
        }
   

}