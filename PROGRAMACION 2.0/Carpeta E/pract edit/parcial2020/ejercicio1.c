#include <stdio.h>

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
    char ecografia;    
};


struct facturacion //principal
{
    char obraSo[20];
    int mesFact;
    int Nfactura;
    float importe;
    struct medicos medico;
    struct pacientes paciente;
};typedef struct facturacion facturacion;


void cargar(facturacion *pfactura, int cant);
void mostrar2(facturacion *pfactura, int cant);

//----

int main (){

    facturacion facturaciones[30], *pfactura=facturaciones;
    int cant;

    printf("ingrese cantidad de pacientes: ");
    scanf("%d", &cant);

    // funciones
    cargar(pfactura, cant);
    mostrar(pfactura, cant);
    mostrar2(pfactura, cant);


    return 0;
}

//------------------


void cargar(facturacion *pfactura, int cant){

    for (int i = 0; i < cant; i++)
    {
        printf("-------------datos paciente------------\n");
    
        // printf("ingrese obra social \n");
        // fflush(stdin);
        // gets(pfactura->obraSo);

        // printf("ingrese mes de fact \n");
        // fflush(stdin);
        // scanf("%d", &pfactura->mesFact);

        // printf("ingrese numerod de factura \n");
        // fflush(stdin);
        // scanf("%d",pfactura->Nfactura);

        // printf("importe en pesos \n"); 
        // fflush(stdin);
        // scanf("%f",pfactura->importe); // aqui se corta

        // // 

        // printf("ingrese nombre del medico \n");
        // fflush(stdin);
        // gets(pfactura->medico.nombre);

        // printf("ingrese apellido del medico \n");
        // fflush(stdin);
        // gets(pfactura->medico.apellido);

        // printf("ingrese matricula del medico \n");
        // fflush(stdin);
        // scanf("%d", pfactura->medico.matricula);

        // 

        printf("ingrese nombre del paciente \n");
        fflush(stdin);
        gets(pfactura->paciente.nombre);

        printf("ingrese apellido del paciente \n");
        fflush(stdin);
        gets(pfactura->paciente.apellido);

        // printf("ingrese dni del paciente \n");
        // fflush(stdin);
        // scanf("%d", pfactura->paciente.dni);

        printf("ingrese edad paciente \n");
        fflush(stdin);
        scanf("%d", &pfactura->paciente.edad);

        printf("ingrese tipo ecografica \n");
        fflush(stdin);
        scanf("%c", &pfactura->paciente.ecografia);

        pfactura++;

    }
    

}

// -----------------

void mostrar(facturacion *pfactura, int cant){

    puts("----------Pacientes coinciden-------------");

    for (int i = 0; i < cant; i++)
    {
        // if (pfactura->paciente.ecografia == 't' && pfactura->mesFact == 11 && pfactura->obraSo == "asunt")

        if (pfactura->paciente.ecografia == 't')
        {

            printf("# \n");
        
            // printf("la obra social es: ");
            // puts(pfactura->obraSo);

            // printf("mes de facturacion: %d", pfactura->mesFact);

            // printf("el importe es: %d", pfactura->importe);

            // printf("el nombre del medico es: ");
            // puts(pfactura->medico.nombre);

            // printf("el apellido del medico es: ");
            // puts(pfactura->medico.apellido);

            // printf("el numero matricula es: %d", pfactura->medico.matricula);

            // 

            // printf("nombre del paciente es: ");
            puts(pfactura->paciente.nombre);

            // printf("el apellido del paciente es: ");
            puts(pfactura->paciente.apellido);

            // printf("el dni del paciente es: %d", pfactura->paciente.dni);

            // printf("el dni del paciente es: %d", pfactura->paciente.edad);

            // printf("tipo ecografia del paciente es: %d", pfactura->paciente.ecografia);        
        }
        pfactura++; //desplazar puntero tmb
    }
}

//  -------------------------

void mostrar2(facturacion *pfactura, int cant){
int cantP=0;

    puts("---------------cantidad de pacientes-------------------");
    printf("cantidad de pacientes: %d", &cantP);

    for (int i = 0; i < cant; i++)
    {
        // if (pfactura->paciente.ecografia == 't' && pfactura->mesFact == 11 && pfactura->obraSo == "asunt")

        if (pfactura->paciente.edad > 60)
        {

            cantP++;
        
            // printf("la obra social es: ");
            // puts(pfactura->obraSo);

            // printf("mes de facturacion: %d", pfactura->mesFact);

            // printf("el importe es: %d", pfactura->importe);

            // printf("el nombre del medico es: ");
            // puts(pfactura->medico.nombre);

            // printf("el apellido del medico es: ");
            // puts(pfactura->medico.apellido);

            // printf("el numero matricula es: %d", pfactura->medico.matricula);

            // 

            // printf("nombre del paciente es: ");
            // puts(pfactura->paciente.nombre);

            // printf("el apellido del paciente es: ");
            // puts(pfactura->paciente.apellido);

            // printf("el dni del paciente es: %d", pfactura->paciente.dni);

            // printf("el dni del paciente es: %d", pfactura->paciente.edad);

            // printf("tipo ecografia del paciente es: %d", pfactura->paciente.ecografia);        
        }
        pfactura++; //desplazar puntero tmb
    }

    printf("cantidad de pacientes: %d", &cantP);
}
