#include <stdio.h>
#include <math.h>
#define pi 3.14
 


void valorSenos();

int main()
{
    valorSenos();

    return 0;
}




void valorSenos()
{
    float rad, sen;

// arroja todos los resultados
    printf("x[grados] - x[radianes] - seno[x] \n");


    for (int i = 0; i <= 360; i+=30)
    {
        rad = (i * pi ) / 180;
        sen = sin(rad);
        printf("%d  %f  %f \n", i, rad, sen);
    }

}