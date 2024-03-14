
#include<stdio.h>
int main(){
    int consumo;
    float ingreso;
    char categoria;

    printf("ingrese consumo: ");
    scanf("%d", consumo);
    printf("ingrese ingreso bruto: ");
    scanf("%f", consumo);

    switch (categoria)
    {
    case 1: 
        printf("pertenece a la categoria A");

    
        break;
    case 2:
        printf("pertenece a la categoria B");
        

        break;
    case 3:
        printf("pertenece a la categoria C");
        

        break;
    case 4:
        printf("pertenece a la categoria D");

        break;
    case 5:
        printf("pertenece a la categoria G");

        break;
    case 6:
        printf("pertenece a la categoria H");

        break;
    case 7:
        printf("pertenece al Regimen General, supera ingresos");

        break;
    case 8:
        printf("pertenece al Regimen General, supera kw");

        break;
    
    default:
        break;
    }

}







