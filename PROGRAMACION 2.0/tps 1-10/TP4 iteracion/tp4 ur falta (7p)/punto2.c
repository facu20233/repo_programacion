#include <stdio.h>
int main(){
    int num1, num2, cantNum=0, cantPar=0, sumaImpar=0, menor, mayor;

    printf("Ingrese 2 numeros: ");
    scanf("%i %i", &num1, &num2);

    if(num1 < num2){
        menor= num1;
        mayor= num2;
    } else {
        menor = num2;
        mayor = num1;
    }
  //  while(menor <= mayor){
    do{
        cantNum++;
        if ((menor % 2) == 0)
        {
            cantPar++;
        } else {
            sumaImpar = sumaImpar + menor;
        }
        menor++;
    }while(menor <= mayor);
   //}
    printf("La cantidad de numeros entre %i y %i es: %i", num1, num2, cantNum);
    printf("\nLa cantidad de pares entre %i y %i es: %i", num1, num2, cantPar);
    printf("\nLa suma entre los impares: %i", sumaImpar);
    return 0;
}

