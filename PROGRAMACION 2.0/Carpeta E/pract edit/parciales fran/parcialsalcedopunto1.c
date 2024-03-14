#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

struct
{
    char dia[MAX];
    int diaMes;
}typedef fecha;

struct
{
    fecha fechas;
    float horaInicial;
    float horaFinal;
}typedef turno;



struct
{
    char nombre[MAX];
    char apellido[MAX];
    char especialidad[MAX];
    int numeroConsult;
    turno turnos[3];
}typedef datos;

void cargaDatos (datos *p, int cantEspecialistas);
void mostrarSegun (datos *p, int cantEspecialistas, char dia[MAX], char especialidad[MAX]);
void modificarConsulYhora (datos *p, int cantEspecialistas);

int main () {

    int cantEspecialistas;
    datos *pEspecialistas;

    printf("Ingrese la cantidad de especialistas a cargar: ");
    scanf("%d", &cantEspecialistas);

    pEspecialistas = malloc(cantEspecialistas*sizeof(datos));

    cargaDatos(pEspecialistas, cantEspecialistas);

    char dia[MAX], especialidad[MAX];

    printf("\nIngrese la especialidad a buscar: ");
    fflush(stdin);
    gets(especialidad);
    printf("Ingrese el dia de la semana a buscar: ");
    fflush(stdin);
    gets(dia);

    mostrarSegun(pEspecialistas, cantEspecialistas, dia, especialidad);

    printf("\n------------------------------------------------------------------\n");

    modificarConsulYhora(pEspecialistas, cantEspecialistas);


    return 0;
}

void cargaDatos (datos *p, int cantEspecialistas) {
    for (int i = 0; i < cantEspecialistas; i++)
    {
        printf("\n-----Carga de datos del especialista [%d]-----", i+1);
        printf("\nNombre: ");
        fflush(stdin);
        gets(p->nombre);
        printf("Apellido: ");
        fflush(stdin);
        gets(p->apellido);
        printf("Especialidad: ");
        fflush(stdin);
        gets(p->especialidad);
        printf("N° de consultorio: ");
        scanf("%d", &p->numeroConsult);
        printf("\n---Informacion sobre los turnos---\n");
        for (int i = 0; i < 3; i++)
        {
            printf("\n---Turno [%d]---", i+1);
            printf("\nDia: ");
            fflush(stdin);
            gets(p->turnos[i].fechas.dia);
            printf("Dia del mes: ");
            scanf("%d", &p->turnos[i].fechas.diaMes);
            printf("Horario de inicio: ");
            scanf("%f", &p->turnos[i].horaInicial);
            printf("Horario de fin: ");
            scanf("%f", &p->turnos[i].horaFinal);
        }
        p++;
    }
}

void mostrarSegun (datos *p, int cantEspecialistas, char dia[MAX], char especialidad[MAX]) {
    int longitud = strlen(dia);
    for (int i = 0; i < cantEspecialistas; i++)
    {
        if (strncmp(p->especialidad, dia, longitud) )
        {
            for (int i = 0; i < 3; i++)
            {
                if (strncmp(p->turnos[i].fechas.dia, dia, longitud) == 0)
                {
                    printf("\n---Medico %s que atiende los %s---", especialidad, dia);
                    printf("\nApellido: ");
                    puts(p->apellido);
                    printf("Nombre: ");
                    puts(p->nombre);
                    printf("N° de consultorio: %d", p->numeroConsult);
                }
            }
        }
        p++;
    }
}

void modificarConsulYhora (datos *p, int cantEspecialistas) {
    int numConsul;
    printf("\n\nQué numero de consultorio desea modificar? ");
    scanf("%d", &numConsul);
    for (int i = 0; i < cantEspecialistas; i++)
    {
        if (p->numeroConsult == numConsul)
        {
            int numNuevo;
                float horarioInicia, horarioFinal;
                printf("\nA qué numero llevará el consultorio %d el doctor %s? ", numConsul, p->apellido);
                scanf("%d", &numNuevo);
                
            for (int j = 0; j < 3; j++)
            {
                printf("\nDesde que hora los %s? ", p->turnos[j].fechas.dia);
                scanf("%f", &horarioInicia);
                printf("\nHasta que hora los %s? ", p->turnos[j].fechas.dia);
                scanf("%f", &horarioFinal);
                
                p->numeroConsult = numNuevo;
                p->turnos[j].horaInicial = horarioInicia;
                p->turnos[j].horaFinal = horarioFinal;

                printf("\nEl doctor %s ahora atiende en el consultorio %d los dias %s", p->apellido, numNuevo, p->turnos[j].fechas.dia);

                printf("\nEn el horario de %.2f a %.2f\n ", p->turnos[j].horaInicial, p->turnos[j].horaFinal);
            }
        }
        p++;
    }
}