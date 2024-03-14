#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct turnos
{   
    char diaSem[20];
    float horaInicial;
    float horaFinal;
    
};


struct centroMedico
{
    char nombreCompleto[20];
    char especialidad[20];
    int numeroConsultorio;
    struct turnos *turnos;
    int diaMes; 
}; typedef struct centroMedico centroMedico;

void cargar(centroMedico *punt, int cant);
void listar(centroMedico *punt, int cant, char dia_sem[], char especialidad[]);
void modificar(centroMedico *punt, int cant, int consult, float horaI);

// ---

int main(){

    int consult;
    float horaI;

    int cant;
    char dia_sem[20];
    char especialidad[20];
    centroMedico  *punt_especialistas;


    printf("ingrese cantidad de profesionales \n");
    scanf("%d", &cant);
    fflush(stdin);

    punt_especialistas = malloc(cant*sizeof(centroMedico));

    // cargar
    cargar(punt_especialistas, cant);

    // listar
    printf("---------buscar segun----------\n");
    printf("dia semana\n");
    gets(dia_sem);
    fflush(stdin);

    printf("especialidad\n");
    gets(especialidad);
    fflush(stdin);

    listar(punt_especialistas , cant, dia_sem, especialidad);

    // modificar
    printf("---------ingrese datos a modificar----------\n");
    printf("num consultorio \n");
    scanf("%d", &consult);
    fflush(stdin);

    printf("hora atencion \n");
    scanf("%f", &horaI);
    fflush(stdin);

    modificar(punt_especialistas , cant, consult, horaI);
    free(punt_especialistas);

    return 0;
}

// ------

void cargar(centroMedico *punt, int cant){


    for (int i = 0; i < cant; i++)
    {
        printf("-------------cargas datos[%d] ------------- \n", i);

        printf("nombre completo\n");
        gets(punt->nombreCompleto);
        fflush(stdin);

        printf("especialidad \n");
        gets(punt->especialidad);
        fflush(stdin);

        printf("consultorio \n");
        scanf("%d", &punt->numeroConsultorio);
        fflush(stdin);


        punt->turnos = malloc(3 * sizeof(struct turnos));

        for (int j = 0; j < 3; j++)
        {
            printf("-----turno [%d] --- \n", j);

            printf("dia semana \n");
            gets(punt->turnos[j].diaSem);
            fflush(stdin);

            printf("hora inicial \n");
            scanf("%f", &punt->turnos[j].horaInicial);
            fflush(stdin);

            printf("hora final \n");
            scanf("%f", &punt->turnos[j].horaFinal);
            fflush(stdin);

        }  
            
        punt++;
    }
    
}

void listar(centroMedico *punt, int cant, char dia_sem[], char especialidad[]){

    printf("--------------------listar----------------------- \n"); 

    for (int i = 0; i < cant; i++)
    {
        
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(punt->turnos[i].diaSem, dia_sem)==0 && strcmp(punt->especialidad, especialidad)==0)
            {
                printf("----------doctores disponibles------------ \n"); 
            }
            // else{
            //     printf("no \n"); 
            // }
            
        }
           
        punt++;
    }

    
}

void modificar(centroMedico *punt, int cant, int consult, float horaI){

int nuevoConsult;
float horaI_nue, horaF_nue;

    printf("------------------modificar-------------------- \n"); 

    for (int i = 0; i < cant; i++)
    {
        // nombre especialista y dia

        // if (punt->numeroConsultorio == consult)
        // {
        //     printf("asignar numero consultorio  nuevo \n");
        //     scanf("%d", &nuevoConsult);
        // }

        for (int j = 0; j < cant; j++)
        {

            printf("desde que hora los: ");
            scanf("%f", &horaI_nue);

            printf("hasta que hora los:");
            scanf("%f", &horaF_nue);

            punt->turnos[j].horaInicial = horaI_nue;
            punt->turnos[j].horaFinal = horaF_nue;

            printf("el doctor %s ahora atiende em el consultorio %d los dias %s \n", punt->nombreCompleto, consult, punt->turnos[j].diaSem);

            printf("en el horario de %.f a %f", punt->turnos[j].horaFinal, punt->turnos[j].horaFinal);
        }

        punt++;
    }
    
}