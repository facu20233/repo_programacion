// #include <stdio.h>
// #define IVA 0.21
// int main(void)
// {
// float monto, precio; precio=325.50; //declaro variables.
// monto= precio + (IVA * precio); //calculo monto a pagar
// printf ("Monto a pagar= %f\n",monto); //muestro en pantalla
// return 0;
// }

// 1. Incrementando y decrementando 

// #include <stdio.h>

// int main(void)
// {
//     int incremento, decremento;
//     printf("ingrese 2 valores enteros");
//     scanf("%d %d", &incremento, &decremento);
   
//     incremento++; //1
//     incremento = incremento+1; //2
//     decremento--;
//     decremento = decremento-1;

//     printf("variabe INCREMENTO: %d \n", incremento);
//     printf("variabe DECREMENTO: %d \n", decremento);

// }

// 2. Operando

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("ingrese numero");
    scanf("%d", &num1);
    printf("ingrese numero");
    scanf("%d", &num2);
    printf("num1, num2"); 
    int suma;
    suma = num1+num2;
    printf("suma");
    num1 = num2;
    num2 = num1;
    printf("num1, num2");
    // MOD("num1,num2");
    // printf("MOD");
}






