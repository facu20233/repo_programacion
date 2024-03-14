#include <stdio.h>

int main()

{

    int num1 = 109, num2 = 45, resul;

    resul = (num1 > num2) ? num1 : num2;

    if (num1 > num2) {
        resul = num1;
    } else {
        resul = num2;
    }

    printf("resul= %d", resul);

    return 0;
}

