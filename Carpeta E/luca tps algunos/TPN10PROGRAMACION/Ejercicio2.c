#include <stdio.h>
#include <stdlib.h>


struct 
{
    int dia;
    int mes;
    int anio;

} typedef fechaNac ;

struct 
{
    int cbu;
    float saldo;

} typedef datos;




struct cliente 
{
    char apellido[20];
    char nombre[30];
    int dni;
    fechaNac fecha;
    char contrasenia[20];
    datos cuenta;

}typedef cliente;

void cargar(cliente *punt,int cant);


int main()
{

    //ver 2,3
    
    cliente *pclientes;

    int cant, menu1, numCliente, menu2=7, clienteTransferir, volver = 1;
    float montoN, retirar, transferir;

    printf("Ingrese la cantidad de de clientes: ");
    scanf("%d",&cant);

    pclientes = malloc(cant * sizeof(cliente)); //ver como cierra con el free, y como hago para cagarle un dato..
    
    cargar(pclientes,cant);


    while (menu2 == 7)
    {
        printf("====MENU PRINCIPAL====\n");
    
        printf("1-Mostrar Clientes\n");
        printf("2-Seleccionar Cliente para operar\n");
        printf("3-Salir\n");
        scanf("%d",&menu1);

        if (menu1 == 1)
        {
            printf("Mostrar");

        } else if (menu1 == 2)
        {
            
            printf("Ingrese el numero de cliente: ");
            scanf("%d",&numCliente);

            printf("========MENU DEL CLIENTE [%d]========\n",numCliente);
            printf("Ingrese una opcion: \n");

            printf("1-Cambiar Contrasenia\n");
            printf("2-Depositar dinero\n");
            printf("3-Retirar dinero\n");
            printf("4-Transferir dinero\n");
            printf("5-Consultar saldo\n");
            printf("6-Mostrar datos de la cuenta\n");
            printf("7-Volver\n");
            scanf("%d",&menu2);

            if (menu2 == 1)
            {
                printf("Ingrese una nueva contrasenia: ");
                fflush(stdin);
                gets(pclientes[numCliente].contrasenia); //si funciona
            }
            if (menu2 == 2)
            {
                printf("Ingrese el monto a depositar: ");
                scanf("%f",&montoN);
                pclientes[numCliente].cuenta.saldo += montoN; //si anda
            }
            if (menu2 == 3)
            {
                printf("Ingrese el dinero que decea retirar: ");
                scanf("%f",&retirar);

                if (retirar <= pclientes[numCliente].cuenta.saldo)
                {
                    pclientes[numCliente].cuenta.saldo -= retirar; //si anda

                } else
                {
                    printf("No cuenta con el saldo suficiente");
                }
            }
            if (menu2 == 4)
            {
                printf("Ingrese el monto a transferir: ");
                scanf("%f",&transferir);
                printf("Ingrese el numero del cliente al que decea transferir: ");
                scanf("%d",&clienteTransferir);
                
                if (transferir <= pclientes[numCliente].cuenta.saldo)
                {

                    pclientes[numCliente].cuenta.saldo -= transferir;
                    
                    pclientes[clienteTransferir].cuenta.saldo += transferir; 
                    

                } else
                {
                    printf("No cuenta con el saldo suficiente");
                }

            }
            if (menu2 == 5)
            {
                printf("Su saldo es: %f",pclientes[numCliente].cuenta.saldo);
            }
            if (menu2 == 6)
            {
                printf("Nombre del cliente: %s, CBU: %d",pclientes[numCliente].nombre,pclientes[numCliente].cuenta.cbu); // si funca
            }

                    
        } else
        {
            printf("Salir");
        }
        
    }
    


    return 0;
}



void cargar(cliente *punt,int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese el apellido: ");
        fflush(stdin);
        gets(punt->apellido);


        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(punt->nombre);

        printf("Ingrese el dni: ");
        scanf("%d",&punt->dni);

        printf("Ingrese fecha de nacimiento: ");
        scanf("%d %d %d",&punt->fecha.dia,&punt->fecha.mes,&punt->fecha.anio);

        printf("Ingrese la contrasenia: ");
        fflush(stdin);
        gets(punt->contrasenia);
        
        printf("Ingrese su cbu: ");
        scanf("%d",&punt->cuenta.cbu);

        printf("Ingrese su saldo: ");
        scanf("%f",&punt->cuenta.saldo);
        
        punt++;
        
    }   
    
}