#include <stdio.h>
#include <stdlib.h>

struct turnos{
    char dia[20];
    float horaI;
    float horaF;   
};

struct centroM
{
    char nomComplet[20];
    char especialidad[20];
    int numConsult;
    struct turnos *turno;
    char obraSoc[20];

}; typedef struct centroM centroM;

// -----------------------------------------------------

void cargar(centroM *punt, int cant);
void listar(centroM *punt, int cant);
void modificar(centroM *punt, int cant);

// -----------------------------------------------------
int main(){

    int cant_prof;
    centroM *punt_centro;

    printf("ingrese cantidad profesionales (ej: 1) \n");
    scanf("%d", &cant_prof);
    fflush(stdin);

    punt_centro = malloc(cant_prof*sizeof(centroM));

    // printf("hola mundo \n");

    // modulos
    cargar(punt_centro, cant_prof);
    listar(punt_centro, cant_prof);
    modificar(punt_centro, cant_prof);

    free(punt_centro);

    return 0;
}

// -----------------------------------------------------

void cargar(centroM *punt, int cant){


    for (int i = 0; i < cant; i++)
    {
        printf("----------------cargar datos[%d] -------------------\n", i);

        printf("nombre completo (ej: jj) \n");
        gets(punt->nomComplet);
        fflush(stdin);

        printf("especialidad (ej: d) \n");
        gets(punt->especialidad);
        fflush(stdin);

        printf("numero consultorio (ej:1) \n");
        scanf("%d", &punt->numConsult);
        fflush(stdin);

        punt->turno = malloc(3*sizeof(struct turnos));

        for (int j = 0; j < 1; j++) //modificar por 3
        {
            printf("dia semana (ej: m) \n");
            gets(punt->turno[j].dia);
            fflush(stdin);

            printf("hora inicial (ej: 11) \n");
            scanf("%f", &punt->turno[j].horaI);
            fflush(stdin);

            printf("hora final (ej: 12) \n");
            scanf("%f", &punt->turno[j].horaF);
            fflush(stdin);

        }
        
        printf("obra social (ej:si) \n");
        gets(punt->obraSoc);
        fflush(stdin);

        punt++;
    }
    
}

void listar(centroM *punt, int cant){

 char diaSem[20];
 char espec[20];
 char obraS[20];

printf("------------------listar ingrese datos---------------------\n");

printf("dia semana (ej: m) \n");
gets(diaSem);

printf("especialidad (ej: d) \n");
gets(espec);

printf("obra social (ej: si) \n");
gets(obraS);


    for (int i = 0; i < cant; i++)
    {

        for (int j = 0; j < 1; j++)
        {
            
            if (strcmp(punt->turno[j].dia, diaSem)==0  && strcmp(punt->especialidad, espec)==0 && strcmp(punt->obraSoc, obraS)==0)
            {
                printf("-------%s-------- \n", punt->nomComplet);
                printf("hora inicial: %.2f \n", punt->turno[j].horaI);
                printf("hora final: %.2f \n", punt->turno[j].horaF);
            }
            
        }
        
        punt++;
    }
    
}

void modificar(centroM *punt, int cant){

    char doc[20];
    char diaSem[20];
    int numConsult_new;
    float horaI_new;
    float horaF_new;



    printf("------------------modificar---------------------\n");
    // doc y dia

    printf("doctor? (ej: jj) \n");
    gets(doc);

    printf("dia (ej: m) \n");
    gets(diaSem);


    for (int i = 0; i < cant; i++)
    {

            for (int j = 0; j < 1; j++)
            {
                if (strcmp(punt->nomComplet, doc)==0 && strcmp(punt->turno[j].dia, diaSem)==0)
                {                    
                    
                    printf("ingrese nuevo consultorio (ej: 2) \n");
                    scanf("%d", &numConsult_new);

                    printf("hora inicial nueva (ej: 13) \n");
                    scanf("%f", &horaI_new);

                    printf("hora final nueva (ej: 14) \n");
                    scanf("%f", &horaF_new);
                
                    punt->numConsult = numConsult_new;
                    punt->turno[j].horaI = horaI_new;
                    punt->turno[j].horaF = horaF_new;

                    printf("......nuevo consultorio %d \n", punt->numConsult);

                    printf("......nuevo hora inicial %.2f \n", punt->turno[j].horaI);

                    printf("......nuevo hora final %.2f \n", punt->turno[j].horaF);
                }
                
                
            }
            
        

        punt++;
    }
    

}