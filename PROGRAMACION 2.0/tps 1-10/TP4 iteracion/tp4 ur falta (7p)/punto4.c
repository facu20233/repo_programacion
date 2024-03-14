#include <stdio.h> 

int main(){
    int num, i, j, divisores=1, suma=0, cantPrimos=0;

    for  (i = 0; i <10; i++)
    {
        printf("ingrese el numero: ");
        scanf("%i", &num);

        for ( j = 2; j < num; j++)
        {
            if ((num % j) == 0)
            {
                divisores++;
                
            }
            
        }

        if (divisores == 1)
        {
            printf("hola");
            printf(" \n %i", num);
            cantPrimos++;
            suma += num;
        }
        
        
    }
    printf("%i", cantPrimos);
    


    return 0;

}