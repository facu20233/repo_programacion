#include <stdio.h>

int main(){

    int num1,num2,mayor,menor;

    printf("num1 \n");
    scanf("%d",&num1);
    printf("num2 \n");
    scanf("%d",&num2);

    if (num1>num2)
    {
        mayor=num1;
        menor=num2;
    }else if (num2>num1)
    {
        mayor=num2;
        menor=num1;
    }
    
    while (mayor>=menor)
    {
        if ((menor%50)==0)
        {
            printf("premio \n");
        }
        menor++;
        printf("%d",menor);
        scanf("%d",&menor);

    }
    
    


    // printf("hola");
    return 0;
}
