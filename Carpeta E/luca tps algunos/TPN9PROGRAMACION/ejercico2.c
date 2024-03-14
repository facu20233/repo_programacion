#include <stdio.h>
#include <string.h>


struct datos
{
    char nombre[30];
    char apellido[30];
};


struct fecha
{
    int dia;
    int mes;
    int anio;
};


struct educacion
{
    char nombre[30];
    char destinatarios[30];
    char nivel[30];
    char area[30]; 
    char descripcion[30]; 
    struct datos datos; 
    struct fecha fecha;
    int estado; 
    
}typedef educacion; 


void cargar(educacion arre[20],int cant);
void modificar();


int main()
{

    int cant;
    educacion articulos[20];


    printf("Ingrese la cantidad de articulos que decea cargar: ");
    scanf("%d",&cant);
    
    for (int i = 0; i < cant; i++)
    {
        cargar(articulos, cant);
    }
    //falta ,mostrar

    return 0;
}


void cargar(educacion arre[20],int cant);
{

    printf("Ingrese el nombre del articulo: ");
    fflush(stdin);
    gets(arre.nombre);

    printf("Ingrese destinarios: "); //ver
    fflush(stdin);
    gets(arre.destinatarios);

    printf("Ingrese el nivel: "); // ver
    fflush(stdin);
    gets(arre.nivel);

    
    printf("Ingrese el area: "); //ver
    fflush(stdin);
    gets(arre.area);

    printf("Ingrese la descripcion(resumen): ");
    fflush(stdin);
    gets(arre.descripcion);

    
    printf("Ingrese el nombre de quien controla el articulo: ");
    fflush(stdin);
    gets(arre.datos.nombre);

    printf("Ingrese el apellido de quien controla el articulo: ");
    fflush(stdin);
    gets(arre.datos.apellido);

    
    printf("Ingrese la fecha de control: ");
    scanf("%d %d %d", &arre.fecha.dia, &arre.fecha.mes, &arre.fecha.anio);

    printf("Ingrese el estado del articulo: (0:no controlado,1: controlado,2:publicado)");
    scanf("%d", &arre.estado);

}



void modificar(educacion arre[], int cantidad)
{
    educacion aux;

    printf("Criterio para modificar: ");

    
    printf("Ingrese el nivel: "); // ver
    fflush(stdin);
    gets(aux.nivel);

    printf("Ingrese el area: "); //ver
    fflush(stdin);
    gets(aux.area);
    
    printf("Ingrese destinarios: "); //ver
    fflush(stdin);
    gets(aux.destinatarios);


    printf("Ingrese el estado del articulo: (0:no controlado,1: controlado,2:publicado)");
    scanf("%d", &aux.estado);

    for (int i = 0; i < cantidad; i++)
    {
        if (strcmp(arre[i].nivel,aux.nivel) == 0 && strcmp(arre[i].area,aux.area) == 0 && strcmp(arre[i].destinatarios,aux.destinatarios) == 0 )
        {
            arre[i].estado = aux.estado;

        } else
        {
            printf("Error");
        }
        
    }
}

//ver que si se puden cargar los arreglos en funciones..
//terminada la logica, ver como hacer la prueba inicializando el arreglo, asi no toma tanto tiempo
// ver las funciones hacer el siguiente tp