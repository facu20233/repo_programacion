#include <stdio.h>


struct unidades
{
    int anio;
    int km;
    int precio; 
};

struct agencia //estructura principal
{
    int codigo;
    char marcaA[20];
    int modelo[20];
    int stock;
    struct unidades unidad;
    
};typedef struct agencia agencia;


void cargar(agencia *punt_agenc, int cant);
void listar(agencia *punt_agenc, int cant);



// --------


int main(){
    
    agencia agenciaArre[30], *punt_agenc=agenciaArre;
    int cant;


    printf("hola mundo \n");
    printf("ingrese cantidad: \n");
    scanf("%d", &cant);

    // funciones
    cargar(punt_agenc, cant);
    listar(punt_agenc, cant);


    return 0;
}

// ----------

void cargar(agencia *punt_agenc, int cant){

    for (int i = 0; i < cant; i++)
    {

        printf("-------------------datos auto----------------------\n");

        // printf("codigo (ej: 324234) \n");
        // scanf("%d", &punt_agenc->codigo); //se va
        fflush(stdin);

        printf("marca (ej: toyota) \n");
        gets(punt_agenc->marcaA);
    

        // printf("modelo (ej: etios) \n");
        // gets(punt_agenc->modelo);
        // fflush(stdin);

        // printf("stock (ej: 5) \n"); //main?
        // scanf("%d", &punt_agenc->stock);
        

        // printf("unidad (anio-km-precio) \n");
        // scanf("%d %d %d", &punt_agenc->unidad.anio, &punt_agenc->unidad.km, &punt_agenc->unidad.precio );
        // fflush(stdin);

    }
    

}

void listar(agencia *punt_agenc, int cant){

    printf("-------------------listado----------------------\n");

    for (int i = 0; i < cant; i++)
    {
        // && punt_agenc->unidad.km<65000
        // && punt_agenc->modelo=="etios"

        if (punt_agenc->marcaA=="to")
        {
            printf("-----disponible---\n");
        
            // printf("unidad disponible: anio %d km %d $ %d \n", punt_agenc->unidad.anio,punt_agenc->unidad.km, punt_agenc->unidad.precio );
            
        }else{
            printf("-----no disponible---\n");
        }

        punt_agenc++;
        
    }
    

}




