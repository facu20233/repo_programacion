#include <stdio.h>

int main (){
    int num1, num2;
    int num3, num4;
    int a,b;
    int *p, *q;          //punteros
    int c;

    printf("numero 1 \n ");
    scanf("%d",&num1);

    printf("numero 2 \n ");
    scanf("%d",&num2);

    a = num1;
    b = num2;

    printf("num1: %d \n ",a);
    printf("num2: %d \n ",b);

// 3

    p = &a;            //direccion memoria
    q = &b;

    printf("cont p: %d \n ",p); 
    printf("cont q: %d \n ",q);

// 4

    printf("cont apunt p: %d \n ",*p);
    printf("cont apunt q: %d \n ",*q);

// 5

    printf("memoria: %d \n ",&p);
    printf("memoria: %d \n ",&q);

// 6

    printf("numero 1 \n ");
    scanf("%d",&num3);

    c = num3;

    printf("cont c: %d \n ",c);
    printf("direccion: %d \n ",&c);

// 7

    p = &c;
    a = *p;

    printf("cont c: %d \n ",a);
    printf("cont c: %d \n ",c);

//8

    p = &a;         //direccion de memoria
    q = &b;

    c = *p + *q;    //contenido apuntado

    printf("cont a: %d \n ",a);
    printf("cont b: %d \n ",b);
    printf("cont c: %d \n ",c);

// 9
    *p=*p+1; 

// 10
    p=*p+1;

// 11
    p=&a;

    return 0;


}

