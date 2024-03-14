#include <stdio.h>

int main(void)
{
    int sistolica, diastolica, persona, contador_persona=0, edad, cat1=0, cat2=0, cat3=0, cat4=0, cat5=0, prom_edad1=0, prom_edad2=0, prom_edad3=0, prom_edad4=0, prom_edad5=0;

    int edad1=0, edad2=0, edad3=0, edad4=0, edad5=0, femenino=0, masculino=0;

    float  porc1=0, porc2=0, porc3=0, porc4=0, porc5=0; // variables que guadan los porcentajes

    char sexo;

    printf("digite cualquier numero distinto de cero para ingresar a una nueva persona:\n");
    printf("O ingrese cero para finalizar:\n");
    scanf("%d",&persona);
    
    while (persona!=0)
    {
        contador_persona+=1;
        printf("Ingrese la presion sistolica\n");
        scanf("%d",&sistolica);
        printf("Ingrese la presion Diastolica\n");
        scanf("%d",&diastolica);
        printf("Ingrese la edad\n");
        scanf("%d",&edad);
        fflush(stdin);
        printf("Ingrese el sexo (m= masculino y f=femenino)\n");
        scanf("%c",&sexo);
        
        if (sistolica<120 && diastolica < 80) //primer rango
        {
            cat1+=1;
            edad1+=edad;
        } else {
            if (sistolica>=120 && sistolica <= 129 && diastolica < 80) // segundo rango
            {
                 cat2+=1;
                 edad2+=edad;   
            } else {
                if ((sistolica>=130 && sistolica <= 139) || (diastolica >= 80 && diastolica <= 89)) // tercer rango
                {
                    cat3+=1;
                    edad3+=edad;
                    switch (sexo) // chequeo el sexo ingresado en este rango
                    {
                    case 'M':
                        masculino+=1;
                        break;
                    case 'm':
                        masculino+=1;
                        break;
                    case 'f':
                        femenino+=1;
                        break;
                    case 'F':
                        femenino+=1;
                        break;
                    }

                } else {
                    if (sistolica>=140 || diastolica >=90)// cuarto rango 
                    {
                        cat4+=1;
                        edad4+=edad;
                    } else {
                        if (sistolica>180 || diastolica >120) // quinto rango
                        {
                            cat5+=1;
                            edad5+=edad;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        printf("digite cualquier numero para ingresar a una nueva persona\n");
        scanf("%d",&persona);
    
    }

    // determino promedio de edades por cada categoria
    if (cat1!=0)
    {
       prom_edad1=edad1/cat1; 
    }
    if (cat2!=0)
    {
       prom_edad2=edad2/cat2; 
    }
    if (cat3!=0)
    {
       prom_edad3=edad3/cat3; 
    }
    if (cat4!=0)
    {
       prom_edad4=edad4/cat4; 
    }
    if (cat5!=0)
    {
       prom_edad5=edad5/cat5; 
    }
    //determinar porcentajes por cada categoria
    porc1=(cat1 * 100)/contador_persona;
    porc2=(cat2 * 100)/contador_persona;
    porc3=(cat3 * 100)/contador_persona;
    porc4=(cat4 * 100)/contador_persona;
    porc5=(cat5 * 100)/contador_persona;

    printf ("(categoria Normal)-- porcentaje= %.2f-- promedio de edad= %d\n",porc1,prom_edad1);
    printf ("(categoria Elevado)-- porcentaje= %.2f-- promedio de edad= %d\n",porc2,prom_edad2);
    printf ("(categoria Nivel1)-- porcentaje= %.2f-- promedio de edad= %d\n",porc3,prom_edad3);
    printf ("(categoria Nivel2)-- porcentaje= %.2f-- promedio de edad= %d\n",porc4,prom_edad4);
    printf ("(categoria Crisis)-- porcentaje= %.2f-- promedio de edad= %d\n",porc5,prom_edad5);
    
    //determino en base al sexo, si en el nivel 1 hay mas mujeres o varones con presion arterial 
    if ( masculino > femenino)
    {
        printf("la presion arterial de Nivel 1 es mas frecuente en varones\n");
    } else {
        if (femenino>masculino)
        {
            printf("la presion arterial de Nivel 1 es mas frecuente en mujeres\n");
        } else {
            if (femenino!=0 && masculino!=0)
            {
                printf("la presion arterial de Nivel 1, se registra por igual\n");
            }
            
            
        }
        
    }
    return 0;

}