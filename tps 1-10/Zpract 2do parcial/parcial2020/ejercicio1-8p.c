#include <stdio.h>
#include <stdlib.h>

struct medicos
{
    char apellido[30];
    char nombre[30];
    int matricula;
};

struct pacientes
{
    char apellido[30];
    char nombre[30];
    int dni;
    int edad;
    char tipoEco;
};

struct centroDiagnostico
{
    char obraSo[30];
    int mesFact;
    int numFact;
    float importe;
    struct medicos medico;
    struct pacientes paciente;
};typedef struct centroDiagnostico centroDiagnostico;


void cargar(centroDiagnostico *punt, int cant);
void listar(centroDiagnostico *punt, int cant);
int mostrarCantidad(centroDiagnostico *punt, int cant);

// ------

int main(){
    
    int cant;
    int cantPacientes;
    centroDiagnostico arreCentroDiagnostico[20], *punt=arreCentroDiagnostico;

    printf("hola mundo \n");   

    printf("ingrese cantidad \n");    
    scanf("%d", &cant);
    fflush(stdin);

    // funciones
    cargar(punt, cant);
    listar(punt, cant);
    cantPacientes = mostrarCantidad(punt, cant);
    printf("la cantidad de pacientes es: %d \n", cantPacientes);
    

    return 0;
}

// --------

void cargar(centroDiagnostico *punt, int cant){

    for (int i = 0; i < cant; i++)
    {
        printf("---------------cargar datos----------------- \n");


        printf("obra social (ej: asunt) \n");
        gets(punt->obraSo);
        fflush(stdin);

        printf("mes facturacion (ej: 11) \n");
        scanf("%d", &punt->mesFact);
        fflush(stdin);

        // printf("numero factura (ej: 6) \n");
        // scanf("%d", &punt->numFact);
        // fflush(stdin);

        // printf("importe pesos (ej: 1000) \n");
        // scanf("%f", &punt->importe);
        // fflush(stdin);

        // printf("nombre medico \n");
        // gets(punt->medico.nombre);
        // fflush(stdin);

        // printf("apellido medico \n");
        // gets(punt->medico.apellido);
        // fflush(stdin);

        // printf("matricula medico (ej: 345) \n");
        // scanf("%d", &punt->medico.matricula);
        // fflush(stdin);

        // printf("apellido paciente \n");
        // gets(punt->paciente.apellido);
        // fflush(stdin);

        // printf("nombre paciente \n");
        // gets(punt->paciente.nombre);
        // fflush(stdin);

        // printf("dni paciente \n");
        // scanf("%d", &punt->paciente.dni);
        // fflush(stdin);

        printf("edad paciente \n");
        scanf("%d", &punt->paciente.edad);
        fflush(stdin);

        printf("tipo ecografia paciente (g, a, r, t) \n");
        scanf("%c", &punt->paciente.tipoEco);
        fflush(stdin);

        punt++;
        
    }

}

void listar(centroDiagnostico *punt, int cant){

    printf("-----------------listar------------------\n");

    for (int i = 0; i < cant; i++)
    {
        if (punt->paciente.tipoEco == 't' && punt->mesFact == 11 && strcmp(punt->obraSo,"asunt")) //anda
        {
            printf("[%d] si \n", i);
        }else{
            printf("[%d] no \n", i);
        }
        punt++;
    }
    

}

int mostrarCantidad(centroDiagnostico *punt, int cant){
int cantidad=0;

    printf("-----------------cantidad------------------\n");

    for (int i = 0; i < cant; i++)
    {
        if (punt->paciente.edad>60 && punt->mesFact == 11)
        {
            cantidad++;
        }
        punt++;
    }
    
    return cantidad;
}