#include <stdio.h>
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

void mostrarProductos(venta *punteroVenta);
int main()
{
    //inicializo productos por separado
    producto p1 = {"Galaxy A13", 60999};
    producto p2 = {"Z Flip 4", 242999};
    producto p3 = {"Galaxy A53", 136999};
    producto p4 = {"13-bb0003la", 229999};
    producto p5 = {"14-cf2535la", 180999};
    producto p6 = {"15-dy2054la", 219998};

    //armo arreglos de productos y declaro punteros para manejarlos
    producto sansumg[3] = {p1, p2, p3};
    producto *psansumg;
    psansumg = sansumg;

    producto Hp[3] = {p4, p5, p6};
    producto *pHp;
    pHp = Hp;

    //declaro arreglo general y completo la inicializacion final
    venta mercaderia[] = {{"sansumg", "Celulares", 3, psansumg}, 
                          {"HP", "Notebook", 3, pHp}};

    venta *punteroVenta;

    punteroVenta = mercaderia;
    
    mostrarProductos(punteroVenta);
    return 0;
}


void mostrarProductos(venta *punteroVenta){
    puts("*****************ARREGLO DE MERCADERIA*****************");
    for (int i = 0; i < 2; i++)
    {
        printf("\n----------------------------------\n");
        printf("----MARCA => %s \n", punteroVenta->marca);
        printf("----CATEGORIA => %s \n", punteroVenta->categoria);
        printf("----STOCK => %d \n", punteroVenta->stock);
        printf("----PRODUCTOS DISPONIBLES----- \n");
        for (int j = 0; j < punteroVenta->stock; j++)
        {
            printf("Categoria: %s\n", punteroVenta->disponibles[j].modelo);
            printf("Precio: %.2f \n", punteroVenta->disponibles[j].precio);
        }
        punteroVenta++;
    }
    puts("------------------------------------------------");
}