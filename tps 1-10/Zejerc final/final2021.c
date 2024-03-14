#include <stdio.h>

void miFuncion(int *p);

main()
{
    int arre[5] = {10, 20, 30, 40, 50};
    miFuncion(arre);
    return 0;
}

void miFuncion(int *p)
{
    int i, suma = 0;
    for (i = 3; i < 5; i++)
        suma = suma + (*(p + i));
    printf("suma = % d", suma);
}