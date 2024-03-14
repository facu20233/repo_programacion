#include <stdio.h>

int buscar(char *cad);

// -----

int main(){

    char cadena[30], *p_cad;

    printf("ingrese una cadena: ");
    gets(cadena);

    p_cad = &cadena[0];

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

// primero buscar la letra 'n'
// ovalo

    while (*cad != '\0')
    {
        if (*cad == 'v')
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


