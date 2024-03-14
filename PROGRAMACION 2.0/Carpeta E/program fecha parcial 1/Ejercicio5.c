#include <stdio.h>

int main(void){
    char categoria, subastaAnterior, veraz;
    int numeroSubasta, inscriptosSubasta1 =0, inscriptosSubasta2 = 0, inscriptosSubasta3 = 0, inscriptosTotales = 0;

    //Ingresa los datos por primera vez
    printf("Ingrese categoria del monotributo: ");
    scanf("%c", &categoria);

    getchar();
    printf("\nIngrese numero de subasta a la que participara: ");
    scanf("%d", &numeroSubasta);

    getchar();
    printf("\n¿Se inscribio en alguna subasta anterior y no presento oferta? SI(s)-NO(n)");
    scanf("%c", &subastaAnterior);

    getchar();
    printf("\n¿Registra deuda en el veraz? SI(s)-NO(n)");
    scanf("%c", &veraz);

    while (subastaAnterior == 'n' && veraz == 'n')
    {
        if (numeroSubasta == 1)
        {
            switch (categoria)
            {
            case 'd':
                inscriptosSubasta1++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'f':
                inscriptosSubasta1++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'g':
                inscriptosSubasta1++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
            
            default:
                printf("No puede inscribirse");
                break;
            }
        }

        if (numeroSubasta == 2)
        {
            switch (categoria)
            {
            case 'b':
                inscriptosSubasta2++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'c':
                inscriptosSubasta2++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'd':
                inscriptosSubasta2++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
            
            default:
                printf("No puede inscribirse");
                break;
            }
        }
        
        if (numeroSubasta == 3)
        {
            switch (categoria)
            {
            case 'a':
                inscriptosSubasta3++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'b':
                inscriptosSubasta3++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
                
            case 'c':
                inscriptosSubasta3++;
                inscriptosTotales++;
                printf("Puede inscribirse");
                break;
            
            default:
                printf("No puede inscribirse");
                break;
            }
        }

    //Vuelve a ingresar los datos para la siguiente iteracion
    getchar();
    printf("\nIngrese categoria del monotributo. O ingrese . (punto) para ver totales y finalizar: ");
    scanf("%c", &categoria);

    if (categoria == '.')
    {
    //Muestra los totales luego de ingresar cada persona
    printf("\nLa cantidad de inscriptos en la subasta 1 es: %d", inscriptosSubasta1);
    printf("\nLa cantidad de inscriptos en la subasta 2 es: %d", inscriptosSubasta2);
    printf("\nLa cantidad de inscriptos en la subasta 3 es: %d", inscriptosSubasta3);

    printf("\nLa cantidad total de inscriptos es: %d", inscriptosTotales);
    break;
    }
    

    getchar();
    printf("\nIngrese numero de subasta a la que participara: ");
    scanf("%d", &numeroSubasta);

    getchar();
    printf("\n¿Se inscribio en alguna subasta anterior y no presento oferta? SI(s)-NO(n)");
    scanf("%c", &subastaAnterior);

    getchar();
    printf("\n¿Registra deuda en el veraz? SI(s)-NO(n)");
    scanf("%c", &veraz);
    }
   
    

}