#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct{
    char modelo[MAX];
    float precio;
} typedef producto;


struct{
    char marca[MAX];
    char categoria[MAX];
    int stock;
    producto *disponibles;  
} typedef venta;

void mostrarProductos(venta productos[2]);
int main()
{
    venta productos[2];
    for (int j = 0; j < 2; j++)
    {
       printf("Ingrese la marca del producto:");
        gets(productos[j].marca);
        printf("Ingrese la categoria del producto:");
        gets(productos[j].categoria);
        printf("Ingrese el stock:");
        scanf("%d", &productos[j].stock);
        productos[j].disponibles = malloc(productos[j].stock * (sizeof(producto)));

        fflush(stdin);
        for (int i = 0; i < productos[j].stock; i++)
        {
            printf("Ingrese el modelo del producto:");
            gets(productos[j].disponibles[i].modelo);
            fflush(stdin);
            printf("Ingrese el precio del producto:");
            scanf("%f", &productos[j].disponibles[i].precio);
            fflush(stdin);

        }
    }
    
    mostrarProductos(productos);
    
    return 0;
}

void mostrarProductos(venta productos[2])
{
    puts("*****************MERCADERIA*****************");
    for (int i = 0; i < 2; i++)
    {
       printf("----MARCA => %s \n", productos[i].marca);
        printf("Categoria: %s\n", productos[i].categoria);
        printf("----STOCK => %d \n", productos[i].stock);

        printf("----PRODUCTOS DISPONIBLES----- \n");
        for (int j = 0; j < productos[i].stock; j++)
        {
            printf("Modelo: %s\n", productos[i].disponibles[j].modelo);
            printf("Precio: %.2f \n", productos[i].disponibles[j].precio);
           
        }
        free(productos[i].disponibles);//LIBERO LA MEMORIA "SOLICITADA"
        puts("------------------------------------------------");
    }
}

