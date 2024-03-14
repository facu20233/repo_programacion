#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct 
{
    char especie[30];
    char categoria[30];
    char nombreVulgar[30]; //ver si se pude hacer otro refinamiento

} typedef datosEspecie; 



struct 
{
    datosEspecie datos;
    char clima[30];
    int cantidad;
    int reponer; //tiene que ser false

}typedef arbol;


void cargar(arbol *parboles, int cant);

void mostrarPorCategoria(arbol *parboles, int cant, char categoria[30]);

int actualizarReponer (arbol *parboles, int cant);

int main()
{
    arbol *parboles;
    int cant, actualizados;
    char categoria[30];

    printf("Ingrese la cantidad de arboles que decea cargar: ");
    scanf("%d",&cant);

    parboles = malloc(cant * sizeof(arbol));

    cargar(parboles,cant);

    printf("\nIngrese una cateegoria para mostrar los arboles que pertenezcan: ");
    fflush(stdin);
    gets(categoria);

    mostrarPorCategoria(parboles, cant, categoria); //fijarse que hay que mostrar los datos

    //actualizados = actualizarReponer(parboles,cant);

    //printf("La cantidad de Datos actualizados son: %d", actualizados);


    return 0;
}


void cargar(arbol *parboles, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese la especie: ");
        fflush(stdin);
        gets(parboles->datos.especie);

        printf("Ingrese la categoria: ");
        fflush(stdin);
        gets(parboles->datos.categoria);

        printf("Ingrese su nombre vulgar: ");
        fflush(stdin);
        gets(parboles->datos.nombreVulgar);

        printf("Ingrese el clima: ");
        fflush(stdin);
        gets(parboles->clima);

        printf("Ingrese la cantidad disponible en el almacen: ");
        scanf("%d",&parboles->cantidad);

        parboles->reponer = 0;
        
        parboles++;
    }    
}


void mostrarPorCategoria(arbol *parboles, int cant, char categoria[30])
{
    for (int i = 0; i < cant; i++)
    {
        if (strcmp(categoria,parboles->datos.categoria) == 0) //cambiar la categoria 
        {   
            if (parboles->cantidad >= 1)
            {
                printf("\nSe muestra"); //mostrar los datos
            }
        }
        
        
        parboles++;
    }
}


int actualizarReponer (arbol *parboles, int cant)
{
    int actualizados = 0;

    for (int i = 0; i < cant; i++)
    {
        if (parboles->cantidad < 5)
        {
            if (parboles->reponer==0)
            {
                
                parboles->reponer = 1; //SI
                actualizados++;
            }
            
        } else
        {
            if (parboles->reponer == 1) //NO
            {
                parboles->reponer = 0;
                actualizados++;
            }

        }
        
        
        parboles++;

    }
    
    return actualizados;

}
//probar la ultima funcion..