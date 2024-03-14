#include<stdio.h>
#define PI 3.14

int main(){

    float altura, radio, volumen;

    printf("Ingrese la Atura del cilindro: ");
    scanf("%f", &altura);

    printf("Ingrese el radio del cilindro: ");
    scanf("%f", &radio);

    altura = altura * 100;
    radio = radio/100;

    volumen = PI * (radio * radio) * altura;
    
    printf("El Volumen del cilindro en Cm es: %.2f", volumen);

    return 0;
}