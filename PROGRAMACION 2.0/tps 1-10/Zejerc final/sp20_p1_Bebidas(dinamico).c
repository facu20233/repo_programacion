#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Estructura para representar a los clientes
struct
{
    char nombre[50];
    char cuil[15];
    char mail[50];
    int cantidad_sucursales;
} typedef Cliente;

struct
{
    char nombre[50];
    char categoria[20];
    float precio;
    char fecha_caducidad[20];
    int stock;
    Cliente clientes[5]; // Máximo 5 clientes por producto
} typedef Producto;

void cargarDatos(Producto *productos, int cantidad_productos);
void listarClientesCervezaBrabante(Producto *p_productos, int cantidad_productos);
void aumentarPrecioMenos300Unidades(Producto *p_productos, int cantidad_productos);


int main()
{
    
    int cantidad_productos;
    Producto *productos; //puedo hacer un "arreglo"

    printf("ingrese cantidad productos a cargar\n");
    scanf("%d", &cantidad_productos);
    fflush(stdin);

    // productos = malloc(cantidad_productos*sizeof(Producto));
    productos = (Producto*)malloc(cantidad_productos * sizeof(Producto));


    cargarDatos(productos, cantidad_productos);
    listarClientesCervezaBrabante(productos, cantidad_productos);
    aumentarPrecioMenos300Unidades(productos, cantidad_productos);

    return 0;
}

void cargarDatos(Producto *productos, int cantidad_productos)
{
    for (int i = 0; i < cantidad_productos; i++)
    {
        printf("------- cargar producto --------\n");

        printf("nombre\n");
        gets(productos[i].nombre);
        fflush(stdin);

        printf("categoria\n");
        gets(productos[i].categoria);
        fflush(stdin);

        printf("precio\n");
        scanf("%f", &productos[i].precio);
        fflush(stdin);

        printf("fecha_caducidad\n");
        gets(productos[i].fecha_caducidad);
        fflush(stdin);

        printf("stock \n");
        scanf("%d", &productos[i].stock);
        fflush(stdin);

        for (int j = 0; j < 1; j++) //**5
        {
            printf("------- cargar cliente --------\n");
            printf("nombre \n");
            gets(productos[i].clientes[j].nombre);
            fflush(stdin);

            printf("cuil \n");
            gets(productos[i].clientes[j].cuil);
            fflush(stdin);

            printf("mail\n");
            gets(productos[i].clientes[j].mail);
            fflush(stdin);

            printf("cantidad_sucursales (3)\n");
            scanf("%d", &productos[i].clientes->cantidad_sucursales);
            fflush(stdin);
        }
    }
}
// mas el cargado

void listarClientesCervezaBrabante(Producto *p_productos, int cantidad_productos)
{
    printf("------ Clientes -------\n");

    for (int i = 0; i < cantidad_productos; i++)
    {
        if (strcmp(p_productos[i].categoria, "Cerveza") == 0 && strcmp(p_productos[i].nombre, "Brabante") == 0)
        {
            for (int j = 0; j < 3; j++) //**
            {
                if (p_productos[i].clientes[j].cantidad_sucursales > 2)
                {
                    printf("Nombre: %s, CUIL: %s, Mail: %s\n",
                           p_productos[i].clientes[j].nombre,
                           p_productos[i].clientes[j].cuil,
                           p_productos[i].clientes[j].mail);
                }
            }
        }
    }
}

void aumentarPrecioMenos300Unidades(Producto *p_productos, int cantidad_productos)
{

    printf("\n----- precios con aumento ------\n");

    for (int i = 0; i < cantidad_productos; i++)
    {
        if (p_productos[i].stock < 300)
        {
            p_productos[i].precio *= 1.1;

            printf("Nombre: %s, Precio: %.2f, Stock: %d\n",
                   p_productos[i].nombre, p_productos[i].precio, p_productos[i].stock);
        }
    }
}
