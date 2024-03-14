#include <stdio.h>

// sub estructuras arriba

struct autores
{
    char apellido[30];
    char nombre[30];

} typedef autores;
//typedef struct autores autores; / otra forma

struct fecha
{
    int dia;
    int mes;
    int anio;
    
};  typedef struct fecha fecha;

// Estructura principal

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

}; 

typedef struct libro libro;

libro cargar();

void mostrar(libro lib);


int main()
{   
    libro librito;
    
    librito = cargar();
    mostrar(librito);
}


libro cargar()
{
    libro lib;

    printf("Ingrese el titulo: ");
    fflush(stdin); //limpiar
    gets(lib.titulo);
    
    printf("Ingrese editorial: ");
    fflush(stdin);
    gets(lib.editorial);
    
    printf("Ingrese el edicion: ");
    scanf("%d", &lib.edicion);

    printf("Ingrese fecha de publicacion: ");
    scanf("%d %d %d",&lib.fecPubli.dia,&lib.fecPubli.mes,&lib.fecPubli.anio); //ver
    
    printf("Ingrese el nombre del autor: ");
    fflush(stdin);
    gets(lib.autor.nombre);
    
    printf("Ingrese el apellido del autor: ");
    fflush(stdin);
    gets(lib.autor.apellido);

    printf("Ingrese el ISBN: ");
    scanf("%d",&lib.isbn);
    
    
    printf("Ingrese categoria: ");
    fflush(stdin);
    scanf("%c",&lib.categoria);

    printf("Ingrese la cantidad de ejemplares: ");
    scanf("%d",&lib.ejemplares);

    return lib;
}

void mostrar(libro lib)
{
    puts("Los datos cargados del libro es: ");

    printf("\nEl titulo es: ");
    puts(lib.titulo);

    printf("\nEl editorial es: ");
    puts(lib.editorial);

    printf("\nLa edicion es: %d", lib.edicion);

    printf("\nLa fecha de publicacion es: %d / %d / %d", lib.fecPubli.dia,lib.fecPubli.mes,lib.fecPubli.anio);

    printf("\nEl nombre del autor es: ");
    puts(lib.autor.nombre);

    printf("\nEl apellido del autor es: ");
    puts(lib.autor.apellido);
    
    printf("\nEl ISBN es: %d",lib.isbn); // ver

    printf("\nLa categoria es: %c",lib.categoria);

    printf("\nLa cantidad de ejemplares es: %d",lib.ejemplares);

}