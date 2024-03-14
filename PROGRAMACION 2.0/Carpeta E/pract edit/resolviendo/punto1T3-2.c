#include <stdio.h>
#include <stdlib.h>

struct turnos
{
    char dia[20];
    float horaI;
    float horaF;
};



struct centroM
{
    char nombreCompleto[20];
    char especialidad[20];
    int numConsult;
    struct turnos *turnos;
    char obraSocial[20];
}; typedef struct centroM centroM;

// -----------------------------------------

void cargar(centroM *punt_centro, int cant_espec);
void listar (centroM *punt, int cant);
void modificar(centroM *punt, int cant);

// -----------------------------------------


int main(){

    int cant_espec;
    centroM *punt_centro;

    printf("ingrese cantidad de especialistas \n");
    scanf("%d", &cant_espec);
    fflush(stdin);

    punt_centro = malloc(cant_espec*sizeof(centroM));
    
    // printf("hola mundo \n");

    // modulos
    cargar(punt_centro, cant_espec);
    listar (punt_centro, cant_espec);
    modificar(punt_centro, cant_espec);

    free(punt_centro);



    return 0;
}

// -------------------------------------------------

void cargar(centroM *punt, int cant){

    for (int i = 0; i < cant; i++)
    {
        printf("----------cargar datos----------------\n");

        printf("nombre completo (ej:jj) \n");
        gets(punt->nombreCompleto);
        fflush(stdin);

        printf("especialidad (ej: d)\n"); 
        gets(punt->especialidad);
        fflush(stdin);

        printf("numero consultorio (ej: 1)\n");
        scanf("%d", &punt->numConsult);
        fflush(stdin);

        punt->turnos = malloc(3*sizeof(struct turnos));   

        for (int j = 0; j < 1; j++) // cambiar por 3
        {
            printf("------Turno[%d] ------- \n", j);

            printf("dia semana (ej: m) \n");
            gets(punt->turnos[j].dia);
            fflush(stdin);

            printf("hora inicial(ej: 11) \n");
            scanf("%f", &punt->turnos[j].horaI);
            fflush(stdin);

            printf("hora final (ej: 12)\n");
            scanf("%.2f", &punt->turnos[j].horaF);
            fflush(stdin);
        }

        printf("obra social (ej: si)\n");
        gets(punt->obraSocial);
        fflush(stdin);

        punt++;
    }
    
}

void listar (centroM *punt, int cant){

    char diaSem[20];
    char especialidad[20];
    char obraSoc[20];

    printf("--------------------Buscar--------------------\n");

    printf("ingrese dia de la semana (ej: m) \n");
    gets(diaSem);

    printf("ingrese especialidad (ej:d) \n");
    gets(especialidad);

    printf("ingrese obra social (ej:si) \n");
    gets(obraSoc);

    for (int i = 0; i < cant; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            
            if (strcmp(punt->turnos[i].dia, diaSem)==0 && strcmp(punt->especialidad, especialidad)==0 && strcmp(punt->obraSocial,obraSoc)==0)
            {
                printf("----%s----- \n", punt->nombreCompleto);
                printf("hora inicial %.2f \n", punt->turnos[i].horaI);
                printf("hora final %.2f \n", punt->turnos[i].horaF);
                
            }
        }


        punt++;
    }

}

void modificar(centroM *punt, int cant){
    char nomEspec[20];
    char diaSem[20];
    int nue_consult;
    float nue_horaI;
    float nue_horaF;



    printf("-------------------------modificar-------------------------\n");

    printf("ingrese nombre doctor (ej: jj)\n");
    gets(nomEspec);

    printf("ingrese dia semana (ej: m)\n");
    gets(diaSem);

    for (int i = 0; i < cant; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            if (strcmp(punt->turnos[j].dia, diaSem)==0 && strcmp(punt->nombreCompleto,nomEspec)==0)
            {
                printf("ingrese nuevo consultorio (ej: 2) \n");
                scanf("%d", &punt->numConsult);

            
                printf("desde que hora (ej: 13) \n");
                scanf("%f", &nue_horaI);

                printf("hasta que hora (ej: 14) \n");
                scanf("%f", &nue_horaF);
        

                punt->turnos[j].horaI = nue_horaI;
                punt->turnos[j].horaF = nue_horaF;

                printf("-------nuevo consultorio------- %d \n", punt->numConsult);
                printf("desde %.2f \n", punt->turnos[j].horaI);
                printf("hasta %.2f \n", punt->turnos[j].horaF);
            }



        }

        punt++;
    }
    

}



    