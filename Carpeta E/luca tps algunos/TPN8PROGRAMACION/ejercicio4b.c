#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargarNotas(float *notas, int alumnos);
void calcularPromedio(float *notas, int alumnos, float *promedio, float *mayorNota);
void mejores(float *promedio, float *mayorNota, int materias);


int main()
{

    srand(time(NULL));

    int alumnosC, alumnosA, alumnosP;
    float *notasC, *notasA, *notasP, promedios[2], mayorNotas[2];

    printf("Ingrese la cantidad de alumnos que tiene la materia calculo: ");
    scanf("%d", &alumnosC);

    
    printf("Ingrese la cantidad de alumnos que tiene la materia Algebra: ");
    scanf("%d", &alumnosA);

    
    printf("Ingrese la cantidad de alumnos que tiene la materia Programacion: ");
    scanf("%d", &alumnosP);


    notasC = malloc(alumnosC * sizeof(float));
    notasA = malloc(alumnosA * sizeof(float));
    notasP = malloc(alumnosP * sizeof(float));


    cargarNotas(notasC,alumnosC); //cargamos las notas de calculo
    
    cargarNotas(notasA,alumnosA); //cargamos las notas de algebra
    
    cargarNotas(notasP,alumnosP); //cargamos las notas de prog

    calcularPromedio(notasC,alumnosC,&promedios[0],&mayorNotas[0]);//calc, el promedio y la mayor nota, y lo guardamos en los arreglos(promedios,mayorNotas)

    calcularPromedio(notasA,alumnosA,&promedios[1],&mayorNotas[1]);//´´ ´´ ´´
    
    calcularPromedio(notasP,alumnosP,&promedios[2],&mayorNotas[2]);//´´ ´´ ´´, preguntar si esta bien pasar la direccion de memoria asi, o hace falta si o si un puntero



    for (int i = 0; i < alumnosA; i++) //se muestran las notas, no es necesario, pero lo pongo igual
    {
        printf("\nnota: %f", notasA[i]);
    }
    

    printf("\nEl promedio las notas de la materia Calculo es: %f",promedios[0]);
    printf("\nLa nota mas alta de la materia Calculo es: %f",mayorNotas[0]);
    
    printf("\nEl promedio las notas de la materia Algebra es: %f",promedios[1]);
    printf("\nLa nota mas alta de la materia Algebra es: %f",mayorNotas[1]);
    
    printf("\nEl promedio las notas de la materia Programacion es: %f",promedios[2]);
    printf("\nLa nota mas alta de la materia Programacion es: %f",mayorNotas[2]);






    return 0;
}


void cargarNotas(float *notas, int alumnos)
{
    float random;

    for (int i = 0; i < alumnos; i++)
    {

        random = rand() % 11; // ver como hacer para poner las dos decimales

        *notas = random;
        notas++;
    }
}

void calcularPromedio(float *notas, int alumnos, float *promedio, float *mayorNota)
{
    *mayorNota = 0;

    for (int i = 0; i < alumnos; i++)
    {
        if (*notas > *mayorNota)
        {
            *mayorNota = *notas;
        }

        *promedio += *notas;
        notas++;
    }
    *promedio = *promedio / alumnos;
}


void mejores(float *promedio, float *mayorNota, int materias)
{
    int cont = 1;
    float mejorPromedio, mejorNota;

    for (int i = 0; i < materias; i++)
    {
        if (*promedio > mejorPromedio)
        {
            mejorPromedio = *promedio;
        }
        if (*mayorNota > mejorNota)
        {
            mejorNota = *mayorNota;
        }
        
        promedio++;
        mejorNota++;
    }

    printf("La materia que tiene mejor nota es: ");
    printf("la materia que tiene mejor promedio es: ");

}

//ver como hacer esta ultima parte