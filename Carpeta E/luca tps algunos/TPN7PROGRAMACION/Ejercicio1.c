#include <stdio.h>
int main()
{
    int a,b,c; //numeros enteros
    int *p,*q;

    printf("Ingrese un numero entero: ");
    scanf("%d",&a);
    
    printf("Ingrese un numero entero: ");
    scanf("%d",&b);

    printf("%d , %d",a,b);

    p = &a;
    q = &b;

    printf("\n%d , %d", p,q); //contenido p,q
    
    printf("\n%d , %d",*p,*q); //contenido apuntado por p y q

    printf("\n%d, %d", &p,&q); //direcciones de memoria de p y q

    //6
    printf("\nIngrese un numero: ");
    scanf("%d",&c);

    printf("Valor de c: %d y su direccion de memoria : %d",c,&c);

    //7
    c = *p;

    printf("\nValor de a: %d Valor de c: %d",a,c);

    //8
    c = *p + *q;

    printf("\nValor de a: %d Valor de b: %d Valor de c: %d",a,b,c);

    //9

    *p = *p+1; // se incrementa el valor de a, probar

    //10

    p=p+1; //se incrementa en uno al numero de memoria, probar

    //11
    // las dos son equivalentes
    
    return 0;
}