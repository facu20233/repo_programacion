#include<stdio.h>


int main(){

    char frase,a,b;
    int palaOn=0;
    

    printf("Ingrese una oracion finalizada en un punto:");
    scanf("%c",&frase);
    


    while (frase != '.')
    {
        a = frase;         
            scanf("%c",&frase);
            
            b = frase;
        
           scanf("%c",&frase);
      
        if(frase == ' ' || frase =='.')
        {
            if ( a == 'o' && b == 'n')
            {
                palaOn++;
            }
        }
            

       
        if (frase != '.')
        {
            scanf("%c",&frase);
        }
        
        
        
    }



    printf("\nLa cantidad de palabras terminadas en on son:%d",palaOn);
    


    return 0;
}