#include<stdio.h>
#include <time.h>
#include <stdlib.h>

void cargarTiros(int *puntos, int tiros);
int calcularGanancia(int *puntos, int tiros);

int main()
{
    int tiros, random, plataGastada, plataGanada, saldoFinal;
    int *puntos;

    srand(time(NULL));


    printf("Cuantos tiros va a realizar: ");
    scanf("%d",&tiros);

    puntos = (int *)malloc(tiros * sizeof(int));


    cargarTiros(puntos, tiros);

    plataGanada = calcularGanancia(puntos, tiros); // si lo ponemos despues del for no me tira
    plataGastada = tiros * 100;

    saldoFinal = plataGanada - plataGastada;

    for (int j = 0; j < tiros; j++) //mostramos los puntos obtenidos
    {
        printf("\npuntaje: %d", *puntos);
        puntos++;
    }

    printf("\nLa plata gastada es: %d",plataGastada);

    printf("\nLa plata ganada es: %d",plataGanada);

    printf("\nEl saldo final del jugador es: %d",saldoFinal);

    return 0;
}


void cargarTiros(int *puntos, int tiros)
{
    int random;

    for (int i = 0; i < tiros; i++)
    {   
        random = rand() % 11;

        *puntos = random;
        puntos++; // preguntar, si al incrementar el puntero en la funcion no hay que volver a la direccion en el main, aca nos aparece que el incremento en la funcion no afecta o no aumenta en el main..
    }
}


int calcularGanancia(int *puntos, int tiros)
{
    int ganancia = 0;

    for (int i = 0; i < tiros; i++)
    {
        switch (*puntos)
        {
        case 10:
            ganancia += 500;
            break;
        case 9:
            ganancia += 200;
            break;
        case 8:
            ganancia += 100;
            break;
        case 7:
            ganancia += 50;
            break;
        
        default:
            ganancia+=0;
            break;
        }
        
        puntos++;
    }
    return ganancia;
}
//TERMINADO! preguntar lo que esta en los comentarios