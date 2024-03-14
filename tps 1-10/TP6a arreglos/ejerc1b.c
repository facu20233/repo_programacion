#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define TAMA 20  //otra forma

void cargarArreglo(int arreglo[], int tama, int num1, int num2);
void mostrarArreglo(int arreglo[], int tama);
void sumarycontarArreglo(int arreglo[], int tama);


int main(){

    int arreNumero [40];
    int tama; 
    int num1;
    int num2;
    int sumaPa=0;
    int cantImp=0;
    srand(time(NULL));

    printf("Ingrese cantidad numeros (max 20): \n");
    scanf("%d", &tama);

    printf("Ingrese primer numero: \n");
    scanf("%d", &num1);

    printf("Ingrese ultimo numero: \n");
    scanf("%d", &num2);

    cargarArreglo(arreNumero,tama,num1,num2);
    mostrarArreglo(arreNumero,tama);
    sumarycontarArreglo(arreNumero,tama);
    

    return 0;
}

void cargarArreglo(int arreglo[], int tama, int num1, int num2){
    int random,num;

    for(int i = 0; i<tama; i++){
        num = num2 - num1;
        random = rand()%(num+1)+num1;
        arreglo[i]= random;
        
    }  

}

void mostrarArreglo(int arreglo[], int tama){
    int random,num;

    for(int i = 0; i<tama; i++){
        printf("%d\n", arreglo[i]);
    } 


}

void sumarycontarArreglo(int arreglo[], int tama){
int sumaPa=0;
int cantImp=0;

    for(int j = 0; j<tama; j=j+2){
        sumaPa += arreglo[j];

    } 
    printf("%d\n", sumaPa);

    for(int k = 1; k<tama; k=k+2){
        if (arreglo[k]%2==0)
        {
            cantImp++;
        }
        
    } 
    printf("%d\n", cantImp);

}








