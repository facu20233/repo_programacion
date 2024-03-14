#include <stdio.h>


struct autores
{
    char apellido[30];
    char nombre[30];

} typedef autores;
//typedef struct autores autores; // hay dos maneras de hacerlo

struct fecha
{
    int dia;
    int mes;
    int anio;
    
};  typedef struct fecha fecha;

struct libro
{
    char titulo[30];
    char editorial[30];
    int edicion;
    struct fecha fecPubli;
    struct autores autor;
    int isbn;
    char categoria;
    int ejemplares;
    libro *disponibles;  //puntero

}; typedef struct libro libro;




void cargar(libro *invent, int cant);

void mostrar(libro *invent, int cant);

void modificar(libro *invent, int cant);

void operacion(libro *invent, int cant, int isbn, int operacion, int cantidad);

//----

int main()
{   
    int cant,isbn,operacion,cantidad;
    libro inventario[30],*pinvent=inventario;

    printf("Ingrese la cantidad de publicaciones que decea ingresar: ");
    scanf("%d",&cant);

    //poner funciones.. 
    cargar(pinvent,cant);
    mostrar(pinvent,cant);
    modificar(pinvent,cant);

    printf("Ingrese isbn: ");
    scanf("%d",&isbn);

    
    printf("Ingrese opreacion: (1:suma, 0: resta)");
    scanf("%d",&operacion);

    
    printf("Ingrese los valores: ");
    scanf("%d",&cantidad);

    operaciones (pinvent,cant,isbn,operacion,cantidad);


    return 0;
}

//----


void cargar(libro *invent, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        
        printf("Ingrese el titulo: ");
        fflush(stdin);
        gets(invent->titulo);
        
        printf("Ingrese editorial: ");
        fflush(stdin);
        gets(invent->editorial);
        
        printf("Ingrese el edicion: ");
        scanf("%d", &invent->edicion);

        printf("Ingrese fecha de publicacion: ");
        scanf("%d %d %d",&invent->fecPubli.dia,&invent->fecPubli.mes,&invent->fecPubli.anio); //ver
        
        printf("Ingrese el nombre del autor: ");
        fflush(stdin);
        gets(invent->autor.nombre); //ver si salta error
        
        printf("Ingrese el apellido del autor: ");
        fflush(stdin);
        gets(invent->autor.apellido);

        printf("Ingrese el ISBN: ");
        scanf("%d",&invent->isbn);
        
        
        printf("Ingrese categoria: ");
        fflush(stdin);
        scanf("%c",&invent->categoria);

        printf("Ingrese la cantidad de ejemplares: ");
        scanf("%d",&invent->ejemplares);
        
        invent++;

    }
}

void mostrar(libro *invent, int cant)
{

    for (int i = 0; i < cant; i++)
    {
        
            puts("Los datos cargados del libro es: ");

            printf("\nEl titulo es: ");
            puts(invent->titulo);

            printf("\nEl editorial es: ");
            puts(invent->editorial);

            printf("\nLa edicion es: %d", invent->edicion);

            printf("\nLa fecha de publicacion es: %d / %d / %d", invent->fecPubli.dia,invent->fecPubli.mes,invent->fecPubli.anio);

            printf("\nEl nombre del autor es: ");
            puts(invent->autor.nombre);

            printf("\nEl apellido del autor es: ");
            puts(invent->autor.apellido);
            
            printf("\nEl ISBN es: %d",invent->isbn); // ver

            printf("\nLa categoria es: %c",invent->categoria);

            printf("\nLa cantidad de ejemplares es: %d",invent->ejemplares);
        
    }

}


void modificar(libro *invent, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        if (invent->isbn != 0)
        {
            invent->categoria = 'L'; //LIBRO
        } 
        if (invent->isbn == 0 && invent->editorial == "FACET") //strcmp
        {
            invent->categoria = 'T';
        }
        if (invent->isbn == 0 && invent->editorial != "FACET")
        {
            invent->categoria = 'R';
        }
        //probar si funciona
        invent++;
    }
    
}


void operacion(libro *invent, int cant, int isbn, int operacion, int cantidad)
{
    for (int  i = 0; i < cant; i++)
    {
        if (invent->isbn == isbn)
        {
            if (operacion == 1)
            {
                invent->ejemplares += cantidad;

            } else
            {
                if (invent->ejemplares < cantidad)
                {
                    printf("ERROR");
                } else
                {
                    invent->ejemplares -=cantidad;

                }
            }
            
        }
        
        invent++;

    }
    
}
