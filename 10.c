#include <stdio.h>
#include	<locale.h>

int main(){
    setlocale(0, "Portuguese");
    int num;
    printf("digite um numero: ");
    scanf("%d",&num);

    if((num%2) == 0){
        printf("O valor e par. ");
        if(num>=15){
            printf("Alem disso, o valor é maior que 15");
        }else{
            printf("Alem disso, o valor e menor que 15");
        }
    }else{
        printf("O valor e impar. ");
        if(num<=50){
            printf("Alem disso, o valor é maior que 50");
        }else{
            printf("Alem disso, o valor é menor que 50");
        }
    }

}
