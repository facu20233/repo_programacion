#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargarNotas(float *notas, int alumnos);
float calcularPromedio(float *notas, int alumnos, float *promedio);

int main()
{

    srand(time(NULL));
    int alumnos;
    float *notas, promedio = 0, mejorNota;

    printf("Ingrese la cantidad de alumnos que tiene: ");
    scanf("%d", &alumnos);

    notas = malloc(alumnos * sizeof(float));

    cargarNotas(notas,alumnos);

    mejorNota = calcularPromedio(notas,alumnos,&promedio);



    for (int i = 0; i < alumnos; i++) //se muestran las notas, no es necesario, pero lo pongo igual
    {
        printf("\nnota: %f", notas[i]);
    }
    
    
    printf("\nLa mejor nota es : %f",mejorNota);
    printf("\nEl promedio es : %f",promedio);

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


float calcularPromedio(float *notas, int alumnos, float *promedio)
{
    float mejorNota = 0;

    for (int i = 0; i < alumnos; i++)
    {
        if (*notas > mejorNota)
        {
            mejorNota = *notas;
        }

        *promedio += *notas;
        notas++;
    }
    *promedio = *promedio / alumnos;

    return mejorNota;
}

