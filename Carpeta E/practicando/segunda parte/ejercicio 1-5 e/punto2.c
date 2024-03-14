#include<stdio.h>

int main(){
    int num1, num2, suma, aux, resto;

    printf("hola como estas: ");
    printf("hola como estas: ");
    printf("hola como estas: ");
    printf("Ingrese un entero: ");
    scanf("%d", &num1);
    printf("Ingrese un entero: ");
    scanf("%d", &num2);

    printf("Numero 1: %d ", num1);
    printf("\nNumero 2: %d ", num2);

    suma = num1 + num2;

    printf("\nLa Suma es: %d", suma);

    aux=num1;
    num1=num2;
    num2=aux;

    printf("\nNumero 1: %d ", num1);
    printf("\nNumero 2: %d ", num2);

    resto = num2 % num1;

    printf("\nEl resto de la division es: %d", resto);
    printf("\nEl resto de la division es: %d", resto);
    printf("\nEl resto de la division es: %d", resto);
   

    return 0;

}