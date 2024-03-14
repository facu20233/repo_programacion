#include <stdio.h>

struct persona
{
    char ape[100];
    char nom[100];
};


int main(){

    struct persona PACIENTE1;

    struct persona PACIENTE3;

    puts("Paciente Numero 1");

    puts("Ingrese el apellido del paciente");
    gets(PACIENTE1.ape);
    puts("Ingrese el nombre del paciente");
    gets(PACIENTE1.nom);

    PACIENTE3 = PACIENTE1;

    puts("El nombre del Paciente 1 es:");
    puts(PACIENTE1.nom);

    puts("El nombre del Paciente 3 es:");
    puts(PACIENTE3.nom);

    return 0;
}