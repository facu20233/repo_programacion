#include <stdio.h>

struct destinatario
{
    char alumnos;
    char docentes;
    char directivos;
};


struct nivel
{
    char inicial;
    char primario;
    char secundario;
    char superior;
};


struct areas
{
    char lengua;
    char matematica;
    char cienciasN;
    char cienciasS;
    char robotica;
    char teatro;
    char musica;
};


struct dato
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

struct estado
{
    int noControlado;
    int controlado;
    int publicado;
};


struct educacion
{
    char nombre[30];
    struct destinatario destinatarios ;
    struct nivel niveles;
    struct areas area; 
    char descripcion[30]; 
    struct dato datos; 
    struct fecha fechas;
    struct estado estados; 
    
}typedef educacion; 


int main()
{   
    // libro librito;

    // libro libritos[4];
    
    // librito = cargar();
    // mostrar(librito);
 

    return 0;
}



// libro cargar()
// {
    
//     return 0;
// }


// void mostrar(libro lib)
// {
    

// }