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
    cliente cliente1 = {"velasquez","lucas",44352431,24,5,2001,1234,150};
    cliente cliente2 = {"portal","gissel",40352431,01,12,1999,5678,200};
    cliente cliente3 = {"guary","efrain",50352431,15,9,2003,91011,300};
    //faltran 2 clientes, pero funciona..
    cliente clientes[4] = {cliente1,cliente2,cliente3};

    int opcion = 0, codigo;
    float monto;
    


    while (opcion != 3)
    {
        for (int i = 0; i < 3; i++)
        {
            
            printf("Cliente %d: %s %s cod: %d saldo: %f",i,clientes[i].apellido,clientes[i].nombre,clientes[i].datos.codigo,clientes[i].datos.saldo);
            printf("\n");   
        }
        

        printf("\n01.Aumentar el saldo deudor\n");
        printf("02.Disminuir el saldo deudor\n");
        printf("03.Salir\n");
        scanf("%d", &opcion);

        if (opcion == 1 || opcion == 2)
        {
            printf("Ingrese el codigo: ");
            scanf("%d",&codigo);

            printf("Ingrese el monto: ");
            scanf("%f",&monto);


            for (int i = 0; i < 4; i++)
            {
                if (opcion == 1) //aumenta el saldo
                {
                    if (codigo == clientes[i].datos.codigo )
                    {
                        clientes[i].datos.saldo += monto;        
                    }    
                }
                
                if (opcion == 2) // disminuye el saldo
                {
                    
                    if (codigo == clientes[i].datos.codigo)
                    {
                        clientes[i].datos.saldo -= monto;

                        if (clientes[i].datos.saldo <= 0) 
                        {
                            printf("Cuenta saldada, no tiene deuda\n");   

                        } else //muestra lo que le queda en la deuda
                        {
                            printf("Actualizado %f",clientes[i].datos.saldo); 
                            printf("\n");
                        }
                         
                    }
                
                }
                
                    
            }
            

        }   
        
    }
    
    return 0;
}

//termiando.. 
