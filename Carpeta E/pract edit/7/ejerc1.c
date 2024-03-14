#include <stdio.h>

int main(){

    int num1, num2;
    int num3, num4;
    int a,b;
    int *p, *q; //punteros
    int c;

    printf("numero 1 \n");
    scanf("%d", &num1);

    printf("numero 2 \n");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    printf("num: %d \n", a);
    printf("num: %d \n", b);

    // 3

    p = &a; // lo apunta
    q = &b;

    printf("cont p: %d \n",p); // contiene por defecto
    printf("cont q: %d \n",q);

    // 4

    printf("cont p: %d \n",*p); //contenido
    printf("cont q: %d \n",*q);

    // 5

    printf("memoria: %d \n ", &p); //direccion memoria
    printf("memoria: %d \n ", &q);

    // 6

    printf("ingrese numero 3 \n ");
    scanf("%d", &num3);

    c = num3;

    printf("cont c %d \n", c); 
    printf("dire c %d \n", &c); 

    // 7

    p = &c; //apunto
    a = *p; //asigno puntero

    printf("cont a: %d \n", a);
    printf("cont c: %d \n", c);

    // 8

    p = &a;
    q = &b;

    c = *p + *q;

    printf("cont a: %d \n ",a);
    printf("cont b: %d \n ",b);
    printf("cont c: %d \n ",c);

    // 9

    *p = *p+1;

    // 10

    p = *p+1;

    // // 11

    p=&a;

    return 0;
}