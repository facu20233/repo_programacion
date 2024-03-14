#include <stdio.h>

void main(){
    int num1,num2,total=0,max=0,min=0;
    int dif=0,par=0;
    printf("Escribir un numero: ");
    scanf("%d",&num1);
    printf("Escribir otro numero: ");
    scanf("%d",&num2);
    if (num1>num2){
        max = num1;
        min = num2;
    }else if (num2>num1){
        max = num2;
        min = num1;
    }else{
        printf("No hay numeros entre %d y %d",num1,num2);
    }
    dif = (max+1)-min;
    printf("\nHay %d numeros entre %d y %d",dif,max,min);
    max+=1;
    while (max>min){
        if ((max%2)==0){
            par++;
        }else{
            total += max;
        }
        max-=1;
    }
    printf("\nHay %d numeros pares",par);
    printf("\nLa suma de los impares entre %d y %d es: %d",num1,num2,total);
}