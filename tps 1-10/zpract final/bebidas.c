#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
    char nombre[20];
    char cuil[20];
    char mail[30];
    int cant_sucursales;
} typedef Cliente;

struct
{
    char nombre[20];
    char categoria[20];
    float precio;
    char fecha[30];
    int stock;
    Cliente cliente[5];
} typedef Producto;

void listarClientesCerveza(Producto *producto, int cant_Productos);
void aumentarMenos300unidades(Producto *producto, int cant_productos);
void cargar(Producto *p_producto, int cant_productoD);

int main()
{
    /*
        
    */

    // estatico (de prueba)
    printf("hola mundo \n");

    Cliente clientes[] = {
        {"cliente1", "2-23-1", "cliente1@mail", 4},
        {"cliente2", "2-23-2", "cliente2@mail", 2}};

    Producto Productos[] = {
        {"producto1", "categoria1", 1000, "8-11-17", 350, clientes[0]},
        {"producto2", "categoria2", 2000, "9-11-17", 250, clientes[1]},
        {"brahante", "cerveza", 2000, "9-11-17", 250, {clientes[0], clientes[1]}}};

    int cant_productos = sizeof(Productos) / sizeof(Productos[0]);

    listarClientesCerveza(Productos, cant_productos);
    aumentarMenos300unidades(Productos, cant_productos);

    // dinamico
    printf(" \n");
    Producto *p_producto;
    int cant_productosD;

    printf("ingrese cant prod \n");
    scanf("%d", &cant_productosD);
    fflush(stdin);

    malloc(cant_productosD * sizeof(Producto));

    cargar(p_producto, cant_productosD);
    listarClientesCerveza(p_producto, cant_productosD);
    aumentarMenos300unidades(p_producto, cant_productosD);

    return 0;
}

void cargar(Producto *p_producto, int cant_productoD)
{
    printf("----- cargar producto ------- \n");
    for (int i = 0; i < cant_productoD; i++)
    {
        printf("nombre: \n");
        gets(p_producto[i].nombre);
        fflush(stdin);
        printf("categoria: \n");
        gets(p_producto[i].categoria);
        fflush(stdin);
        printf("precio: \n");
        scanf("%.2f", p_producto[i].precio);
        printf("fecha: \n");
        fflush(stdin);
        gets(p_producto[i].fecha);
        for (int j = 0; j < 1; j++)
        {
            printf("----- cargar cliente ------- \n");
            printf("nombre: \n");
            gets(p_producto[i].cliente[j].nombre);
            fflush(stdin);
            printf("cuil: \n");
            gets(p_producto[i].cliente[j].cuil);
            fflush(stdin);
            printf("mail: \n");
            gets(p_producto[i].cliente[j].mail);
            fflush(stdin);
            printf("cantidad de sucursales: \n");
            scanf("%.2f", p_producto[i].cliente[j].cant_sucursales);
            fflush(stdin);
        }
    }
}

void listarClientesCerveza(Producto *producto, int cant_Productos)
{
    printf("---- listar --------- \n");
    for (int i = 0; i < cant_Productos; i++)
    {
        if (strcmp(producto[i].nombre, "brahante") == 0 && strcmp(producto[i].categoria, "cerveza") == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                if (producto[i].cliente[j].cant_sucursales > 2)
                {
                    printf("cliente: %s \n", producto[i].cliente[j].nombre);
                }
            }
        }
    }
}

void aumentarMenos300unidades(Producto *producto, int cant_productos)
{
    printf("---- realizar aumentos --------- \n");
    for (int i = 0; i < cant_productos; i++)
    {
        if (producto[i].stock < 300)
        {
            producto[i].precio *= 1.1;
            printf("nombre: %s, nuevo precio: %.2f \n", producto[i].nombre, producto[i].precio);
        }
    }
}

/*
brahante
cerveza
*/