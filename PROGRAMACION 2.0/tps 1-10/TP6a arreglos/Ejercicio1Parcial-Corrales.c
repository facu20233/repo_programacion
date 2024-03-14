/*   Corrales, Camila
	Primer Parcial
	5/10/22
	Este programa muestra por pantalla 10 numeros ingresados y determina si son multiplos de 7 */
	
	#include <stdio.h>
	#include <math.h>
	#include <conio.h>
	
	int main()
	{
		int N=0, i=1;										/*declaracion de variables*/
		for (i=1 ; i<=10 ; i++) 							/*for que sirve para contar los 10 numeros*/
		{
		if (i==1)
		{
			printf("\nIngrese un numero entre 21 y 87:\n");
		}else{
			printf("\nIngrese otro numero:\n");
		}
		do 												/*pide ingresar N hasta que pertenezca al intervalo*/
		{
			scanf("%d", &N);
			if ((N<21) || (N>87))
			{
			printf ("\nIngrese un numero del intervalo [21,87] para continuar\n");
			}
		}
		while ((N<21) || (N>87));
		if (N%7==0)										/*determina si N es multiplo de 7*/
		{
			printf ("\n%d es multiplo de 7\n", &N);		/*imprime por pantalla que N es multiplo de 7*/
		}else{
			printf ("\n%d\n", &N);						/*imprime N por pantalla*/
			}
		}
	getchar();
	return(0);											/*fin del algoritmo*/
	}
