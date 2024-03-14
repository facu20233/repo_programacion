#include <stdio.h>


struct fechaNac
{
    int dia;
    int mes;
    int anio;

};

struct datosCuenta
{
    int codigo;
    float saldo;

};



struct
{
    char apellido[30];
    char nombre[30];
    int dni;
    struct fechaNac fecha;
    struct datosCuenta datos;


} typedef cliente ;



int main()
{
    struct fechaNac fecha1 = {24,05,2001};
    cliente cliente1 = {"velasquez","lucas",44352431,24,05,2001,1234,150};
    cliente cliente2 = {"portal","gissel",40352431,22052001,1234,150};
    cliente cliente3 = {"guary","efrain",50352431,22052001,1234,150};
    

    printf("el apellido es: ");
    puts(cliente1.apellido);

    
    printf("el nombre es: ");
    puts(cliente1.nombre);

    printf("%d",cliente1.dni);

    printf("la fecha de nacimiento es: %d / %d / %d",cliente1.fecha.dia,cliente1.fecha.mes, cliente1.fecha.anio);

    printf("\ndatos1: %d",cliente1.datos.codigo);
    printf("\ndatos2: %f",cliente1.datos.saldo);
    


    return 0;
}
