#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarArreglo(int arreglo[], int tama, int num1, int num2);
void mostrarArreglo(int arreglo[], int tama);
void sumarycontarArreglo(int arreglo[], int tama);



int main(){
    
    int arreNumero[30]; //30 tamaño nomas
    int tama;
    int num1;
    int num2;
    int sumaPa;
    int cantImp;
    srand(time(NULL));

    printf("ingrese cant num: \n");
    scanf("%d", &tama);

    printf("ingrese primer num");
    scanf("%d", &num1);

    printf("ingrese segundo num");
    scanf("%d", &num2);

    cargarArreglo(arreNumero, tama, num1, num2);
    mostrarArreglo(arreNumero, tama);
    sumarycontarArreglo(arreNumero, tama);


    return 0;

}
    





void cargarArreglo(int arreglo[], int tama, int num1, int num2){
    int random, num;

    for (int i = 0; i < tama; i++)
    {
        num = num1 - num2;
        random = rand()%(num+1)+num1;
        arreglo[i] = random;
    }
    
}

void mostrarArreglo(int arreglo[], int tama){
    int random, num;

    for (int i = 0; i < tama; i++)
    {
        printf("%d \n", arreglo[i]);
    }
    
}


void sumarycontarArreglo(int arreglo[], int tama){
    int sumaPa = 0;
    int cantImp = 0;

    for (int j = 0; j < tama; j++)
    {
        sumaPa += arreglo[j];
    }
    printf("suma pares %d", sumaPa);
    

    for (int k = 1; k < tama; k=k+2)
    {
        if (arreglo[k]%2==0)
        {
            cantImp++;
        }
        
    }
    printf("cant impares %d\n", cantImp);
    

}