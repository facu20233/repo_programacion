#include<stdio.h>

int main(){
    float a, b, c;
    
    printf("ingrese lado a:");
    scanf("%f", &a);
    printf("ingrese lado b:");
    scanf("%f", &b);
    printf("ingrese lado c:");
    scanf("%f", &c);

    if((a==b) && (a==c)){
        printf("equilatero");
    }else{
        if((a==b)||(a==c)){
            printf("isoceles");
        }else{
            printf("escaleno");
        }     
    }
    return 0;
}











