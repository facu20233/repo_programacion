#include<stdio.h>


int main(){

    char frase,a,b;
    int palaOn=0;
    

    printf("Ingrese una oracion finalizada en un punto:");
    scanf("%c",&frase);
    // camion.  /  camion rojo.
    


    while (frase != '.')
    {
        while (frase != ' ' && frase !='.')
        {
            

           if (frase == 'o')
           { 
            
                scanf("%c",&frase);

                if (frase == 'n' )
                {
                        
                        
                    scanf("%c",&frase);
                    if (frase == ' ' || frase == '.')
                    {
                        palaOn++;
                    }
                
                } else
                {
                    scanf("%c",&frase);
                }
            
            
           } else
           {
             scanf("%c",&frase);
           }
           
           
            
            
        }

       
        if (frase != '.')
        {
            scanf("%c",&frase);
        }
        
        
        
    }



    printf("\nLa cantidad de palabras terminadas en on son:%d",palaOn);
    


    return 0;

    /*a = frase;         
            scanf("%c",&frase);
            
            b = frase;
        
           scanf("%c",&frase);*/

           /* if ( a == 'o' && b == 'n')
        {
            palaOn++;
        }*/

}