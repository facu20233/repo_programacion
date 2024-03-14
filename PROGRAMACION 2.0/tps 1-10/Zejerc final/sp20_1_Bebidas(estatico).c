#include <stdio.h>
#include <string.h>

struct
{
    char nombre[50];
    char cuil[15];
    char mail[50];
    int cantidad_sucursales;
} typedef Cliente;

// principal
struct
{
    char nombre[50];
    char categoria[20];
    float precio;
    char fecha_caducidad[20]; //**
    int stock;
    Cliente clientes[5]; // Máximo 5 clientes por producto
} typedef Producto;

void listarClientesCervezaBrabante(Producto *p_productos, int cantidad_productos);
void aumentarPrecioMenos300Unidades(Producto *p_productos, int cantidad_productos);

int main()
{
    Cliente clientes[] = {
        {"Cliente1", "12345678901", "cliente1@mail.com", 3},
        {"Cliente2", "12345678902", "cliente2@mail.com", 5}
    };

    Producto productos[] = {
        {"Brabante", "Cerveza", 10.5, "01/01/2025", 500, {clientes[0], clientes[1]}},

        {"Vino Tinto", "Vinos", 15.75, "01/01/2024", 200, {clientes[0]}}};

    int cantidad_productos = sizeof(productos) / sizeof(productos[0]);

    // modulos
    listarClientesCervezaBrabante(productos, cantidad_productos);
    aumentarPrecioMenos300Unidades(productos, cantidad_productos);

    return 0;
}

// puntero porque paso (&productos[0])
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
