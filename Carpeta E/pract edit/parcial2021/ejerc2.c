#include <stdio.h>

int buscar(char *cad);

// -----

int main(){

    char cadena[30];
    char *p_cad;

    printf("ingrese una cadena: ");
    gets(cadena);

    p_cad = &cadena[0]; //posicion inicial

    // buscar(p_cad);

    if (buscar(p_cad)>0){
       printf("hay errores"); 
    }else{
        printf("correcto"); 
    }
    
    

    return 0;
}

// -----------

int buscar(char *cad){
int cant=0;

    while (*cad != '\0')
    {
        if (*cad == 'v') //hacer para n
        {
            cad--;
            if (*cad != 'n')
            {
                cant++;
                cad++;
            }else{
                cad++;
            }
            
        }

        cad++;
    }

    return cant;
}

// void buscar(char *cad){     
//     while (*cad != '\0')
//     {
//         if (*cad == 'v')
//         {
//             cad--;
//             if (*cad != 'n')
//             {
//                 printf("error");
//                 cad++;
//             }else{
//                 cad++;
//             }
            
//         }

//         cad++;
//     }
// }


