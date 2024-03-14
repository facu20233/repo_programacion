#include <stdio.h>

void main(){
    char oracion;
    int contador;
    printf("Escriba la oracion: ");
    scanf("%c",&oracion);
    while (oracion!='.')
    {
        switch (oracion)
        {
        case 'a':
            contador++;
            break;
        case 'e':
            contador++;
            break;
        case 'o':
            contador++;
            break;
        case 'A':
            contador++;
            break;
        case 'E':
            contador++;
            break;
        case 'O':
            contador++;
            break;
        default:
            printf("No hay vocales abiertas en tu oracion.");
            break;
        }
        scanf("%c",&oracion);
    }
    printf("La cantidad de vocales abiertas en tu oracion es: %d",contador);
}