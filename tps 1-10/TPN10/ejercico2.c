#include <stdio.h>


// struct autores
// {
//     char apellido[30];
//     char nombre[30];

// } typedef autores;
// //typedef struct autores autores; // hay dos maneras de hacerlo

struct fecha
{
    int dia;
    int mes;
    int anio;
    
};  typedef struct fecha fecha;

struct datos
{
    int CBU;
    float saldo;
    
};  typedef struct datos datos;

struct banco
{
    char apellido[30];
    char nombre[30];
    int dni;
    struct fecha nacimiento;
    int contraseña;
    struct datos cuenta;

}; typedef struct banco banco;


void cargar(banco *invent, int cant);

int main()
{   
    banco inventario[30],*pinvent=inventario;

    return 0;
}


void cargar(banco *invent, int cant)
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