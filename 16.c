/*Dados um número natural n, exiba seu fatorial n!. */

#include <stdio.h>



int main(){

    int num,resu=1;
    printf("digite um numero: ");
    scanf("%d",&num);
    printf("%d! =",num);
    for(int i = num; i>1; i--){
        printf("%d*",i);
        resu *= i;


    }
    printf("1 = %d",resu);

}
