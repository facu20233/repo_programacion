#include <stdio.h>
#include <stdlib.h>


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
void rebajar(agencia *punt_agenc, int cant);


// --------

int main(){
    
    agencia agenciaArre[30], *punt_agenc=agenciaArre;
    int cant;


    printf("hola mundo \n");
    printf("ingrese stock para una marca y modelo: \n");
    scanf("%d", &cant);
    fflush(stdin);


    // funciones
    cargar(punt_agenc, cant);
    listar(punt_agenc, cant);
    rebajar(punt_agenc, cant);

    


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
    

        printf("modelo (ej: etios) \n");
        gets(punt_agenc->modelo);
        fflush(stdin);

        // printf("stock (ej: 5) \n"); //main?
        // scanf("%d", &punt_agenc->stock);
        

        printf("unidad (anio-km-precio) \n");
        scanf("%d %d %d", &punt_agenc->unidad.anio, &punt_agenc->unidad.km, &punt_agenc->unidad.precio );
        fflush(stdin);

        punt_agenc++;

    }
    

}

void listar(agencia *punt_agenc, int cant){

    printf("---------------------buscando-----------------------\n");

    for (int i = 0; i < cant; i++)
    {
        // comenta despues
        // printf("-----datos---\n");
        // puts(punt_agenc->marcaA);
        // puts(punt_agenc->modelo);
        // printf("anio %d km %d $%d \n", punt_agenc->unidad.anio, punt_agenc->unidad.km, punt_agenc->unidad.precio);

            
        if (strcmp(punt_agenc->marcaA,"to")==0 && strcmp(punt_agenc->modelo,"et")==0 && punt_agenc->unidad.km<65000) //anda
        {
            // printf("-------coincide[%d]-----\n", i);
            printf("[%d] anio %d km %d $%d \n", i, punt_agenc->unidad.anio, punt_agenc->unidad.km, punt_agenc->unidad.precio);

        
        }else{
            printf("[%d] no coincide\n", i);
        }


        punt_agenc++;        
        
    }
    
}

void rebajar(agencia *punt_agenc, int cant){
int rebaja;

    printf("---------------------rebaja-----------------------\n");

    for (int i = 0; i < cant; i++)
    {
        // comenta despues
        // printf("-----datos---\n");
        // puts(punt_agenc->marcaA);
        // puts(punt_agenc->modelo);
        // printf("anio %d km %d $%d \n", punt_agenc->unidad.anio, punt_agenc->unidad.km, punt_agenc->unidad.precio);

            
        if (strcmp(punt_agenc->marcaA,"re")==0 && strcmp(punt_agenc->modelo,"cl")==0 && punt_agenc->unidad.precio<=800000) //anda
        {
            printf("[%d]rebaja:\n", i);
            printf("precio :%d \n", punt_agenc->unidad.precio);
            rebaja = punt_agenc->unidad.precio*0.9;
            printf("con rebaja :%d \n", rebaja);
        
        }else{
            printf("[%d]no coincide\n", i);
        }


        punt_agenc++;        
        
    }
    
}




