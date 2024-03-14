#include <stdio.h>
#include <stdlib.h>

struct fechas
{
    int dia;
    int mes;
    int anio;
};

struct pasajeros
{
    char apellido[20];
    char nombre[20];
    int dni;
    float costo;
};




struct aerolineasArg
{
    int numVuelo;
    char origen[20];
    char destino[20];
    struct fechas fecha;
    int cantAsientos;
    struct pasajeros pasajero
}; typedef struct aerolineasArg aerolineasArg;

// 

void cargar(aerolineasArg *punt_aero);
void listar(aerolineasArg *punt_aero);
void descontar(aerolineasArg *punt_aero);

// -------

int main(){
    int cantAsient;
    aerolineasArg arreAerolineas[20], *punt_aero = arreAerolineas;

    printf("hola mundo \n");

    printf("ingrese cantidad de asientos \n");
    scanf("%d", &punt_aero->cantAsientos);
    fflush(stdin);

    // funciones
    cargar(punt_aero);
    listar(punt_aero);
    descontar(punt_aero);

    return 0;
}

// ---------

void cargar(aerolineasArg *punt_aero){
    

int cant;
cant=punt_aero->cantAsientos;

    for (int i = 0; i < cant; i++)
    {
        printf("-----------------carga datos[%d] ----------------- \n",i);

        // printf("numero vuelo (ej: 11)\n");
        // scanf("%d", punt_aero->numVuelo);
        // fflush(stdin);

        printf("origen (ej: tuc) \n");
        gets(punt_aero->origen);
        fflush(stdin);

        printf("destino (ej: cor) \n");
        gets(punt_aero->destino);
        fflush(stdin);

        // printf("fecha vuelo (ej: 11-11-11)\n");
        // scanf("%d %d %d", &punt_aero->fecha.dia, &punt_aero->fecha.mes, &punt_aero->fecha.anio);
        // fflush(stdin);

        // // printf("cantidad asientos \n");

        // printf("apellido pasajero \n");
        // gets(punt_aero->pasajero.apellido);
        // fflush(stdin);

        // printf("nombre pasajero \n");
        // gets(punt_aero->pasajero.nombre);
        // fflush(stdin);

        // printf("dni pasajero \n");
        // scanf("%d", &punt_aero->pasajero.dni);
        // fflush(stdin);

        printf("costo pasaje \n");
        scanf("%f", &punt_aero->pasajero.costo);
        fflush(stdin);
        
        punt_aero++;
    }
    

}

void listar(aerolineasArg *punt_aero){

int cant;
cant=punt_aero->cantAsientos;

    printf("-------------------listar------------------- \n");

    for (int i = 0; i < cant; i++)
    {   

        if (strcmp(punt_aero->origen, "tuc")==0 && strcmp(punt_aero->destino, "cor")==0) //ok, ok
        {
            printf("[%d] numero veulo: %d \n",i,punt_aero->numVuelo); 
        }else
        {
            // printf("[%d] no \n",i); 
        }
        
        punt_aero++;
    }
    

}


void descontar(aerolineasArg *punt_aero){

int cant;
float descuento;
cant=punt_aero->cantAsientos;

    printf("-------------------descuentos------------------- \n");

    for (int i = 0; i < cant; i++)
    {   
        
        if (punt_aero->pasajero.costo > 5800)
        {
            printf("[%d] ---descuento--- \n",i);
            descuento = punt_aero->pasajero.costo*0.9;
            printf("sin descuento = $%f \n", punt_aero->pasajero.costo);
            printf("con descuento = $%f \n", descuento);

        }else
        {
            printf("[%d] no \n",i); 
        }
        
        punt_aero++;
    }
    

}

