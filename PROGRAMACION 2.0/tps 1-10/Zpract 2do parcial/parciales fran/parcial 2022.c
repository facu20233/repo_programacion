#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
float calcular(char *punt_frase);
int main(){
	int longitud;
	float porcentaje;
	char frase[30];
    char *punt_frase=frase;
	printf("Ingrese una oracion:\n");
	gets(frase);
	
	longitud=strlen(frase);
	printf("cantidad de caracteres %d\n",longitud);
    puts(frase);
	
    porcentaje=calcular(punt_frase);
	
		return 0;
}

float calcular(char *punt_frase){
	float porcentaje;
	int termina_on=0,palabras=0,posicion=0;
	while(*punt_frase!='\0'){ //calculo la cantidad de palabras terminadas en on
       if(*punt_frase=='o'){
       	punt_frase++;
       	posicion++;
       	if(*punt_frase=='n'){
       		punt_frase++;
       		posicion++;
       		if((*punt_frase=='.') || (*punt_frase==' ' || *punt_frase=='\0')){
              termina_on++;
			   }
		   }
	   }
    punt_frase++;
    posicion++;
	}
	printf("Palabras terminadas en 'on' :%d\n",termina_on);
	
     punt_frase-=posicion;//vuelvo el puntero al comienzo;
	printf("a ver , primera letra %c\n",*punt_frase);
	while(*punt_frase!='\0'){ //calculo la cantidad de palabras en total
		if(*punt_frase!=' '){
			punt_frase++;
			if(*punt_frase==' ' || *punt_frase=='.' || *punt_frase=='\0' ){
				punt_frase++;
				palabras++;
			}
		}
		
	}

	printf("Total de palabras: %d",palabras);
	porcentaje=(termina_on*100)/palabras;
	printf("porcentaje de palabras terminadas en on, sobre el total : %.2f ",porcentaje);
	return porcentaje;
}
