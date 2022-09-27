/*Faça um programa que mostre todos os números pares existentes entre 1 e 50.*/


#include <stdio.h>



int main(){

    int num;
    for(int i = 1; i<= 49; i++){
        if (i%2 == 0){
            printf("%d-->",i);
        }
    }
    printf("50");
}
