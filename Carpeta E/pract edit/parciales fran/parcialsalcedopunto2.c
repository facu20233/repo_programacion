#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

float calcular(char *punt_frase);

int main() {
	float porcentaje;
	char frase[30];
    char *pFrase = frase;

	printf("Ingrese una oracion: ");
	gets(frase);
	
    porcentaje = calcular(pFrase);
	
	return 0;
}

float calcular(char *pFrase) {
	float porcentaje;
	int hiato = 0 , palabras = 0, posicion = 0;

	while(*pFrase!='\0') { //calculo la cantidad de palabras con hiato oe
        if(*pFrase == 'o'){
       	    pFrase++;
       	    posicion++;
            if(*pFrase == 'e'){
                hiato++;
		    }
	    }
        pFrase++;
        posicion++;
	}
	printf("\nPalabras con hiato 'oe': %d\n",hiato);
	
    pFrase -= posicion; //vuelvo el puntero al comienzo
	printf("\nPrueba primera letra: %c\n", *pFrase);

    int posicion2 = 0;
	
	while(*pFrase != '\0'){ //calculo la cantidad de palabras en total
		if(*pFrase != ' '){
			pFrase++;
            posicion2++;
			if(*pFrase == ' ' || *pFrase == '.' || *pFrase == '\0' ){
				pFrase++;
                posicion2++;
				palabras++;
			}
		}
	}

    pFrase -= posicion2; //vuelvo el puntero al comienzo
    printf("\nPrueba primera letra: %c\n", *pFrase);

    int cantMayor3 = 0;

    while (*pFrase != '\0') {
        if (isalpha(*pFrase))
        {
            pFrase++;
            if (isalpha(*pFrase))
            {
                pFrase++;
                if (isalpha(*pFrase))
                {
                    cantMayor3++;
                    do
                    {
                        pFrase++;
                    } while (*pFrase == ' ');
                }
            }
        }
        pFrase++;
    }
    
	printf("\nTotal de palabras: %d\n",palabras);
	porcentaje = (hiato*100) / palabras;
	printf("\nPorcentaje de con hiato oe, sobre el total : %.2f ",porcentaje);
    printf("\nLa cantidad de palabras con +3 letras es: %d", cantMayor3);
	return porcentaje;
}
