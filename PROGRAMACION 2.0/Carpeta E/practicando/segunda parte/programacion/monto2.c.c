#include <stdio.h>
#define IVA 0.21
int main(void)
{
float monto, precio; precio=325.50; //declaro variables.
monto= precio + (IVA * precio); //calculo monto a pagar
printf ("Monto a pagar= %f\n",monto); //muestro en pantalla
return 0;
}
