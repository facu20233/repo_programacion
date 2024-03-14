#include <stdio.h>

int main(){
    int num1, num2, mayor, menor, sumaImpares;
    int pares=0, rango=0;

    printf("ingresar num1: ");
    scanf("%d",&num1);

    printf("ingresar num2: ");
    scanf("%d",&num2);


    if(num1>num2){
        mayor=num1;
    }else{
        menor=num1;
    }

    printf("numero mayor es: %d", mayor);
    printf("numero menor es: %d", menor);

    // while (mayor>menor)
    // {
    //     if( (menor/2)==0){
    //         pares++;
    //     }else{
    //         sumaImpares += menor;
    //     }
    //     rango++;
    //     menor++;
    // }

    for (int i = menor; menor <= mayor; i++)
    {
        if( (menor/2)==0){
            pares++;
        }else{
            sumaImpares += menor;
        }
        rango++;
        menor++;
    }


    printf("rango: %d", rango);
    printf("pares: %d", pares);
    printf("suma impares: %d", sumaImpares);
}

