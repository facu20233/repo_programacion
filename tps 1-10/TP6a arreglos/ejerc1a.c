#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 20  //otra forma

int main(){
    

    int arreNumero [30];
    int num;
    int sumaPa=0;
    int cantImp=0;
    srand(time(NULL));

// 20 numeros
    for(int i = 0; i<20; i++){
        num = rand() % 401;           // 0 a 400
        arreNumero[i]= num;          // 0 > num
        printf("%d\n", arreNumero[i]);
    }  

// pares
    for(int j = 0; j<20; j=j+2){
        
        sumaPa += arreNumero[j];
    } 
    printf("%d\n", sumaPa);

// impares
    for(int k = 1; k<20; k=k+2){
        if (arreNumero[k]%2==0)
        {
            cantImp++;
        }
        
    } 
    printf("%d\n", cantImp);



    return 0;
}








