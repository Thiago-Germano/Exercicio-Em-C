#include <stdio.h>

int main(){
    int num[10],soma=0,subtr=0;

    for(int i = 0; i<10;i++){
        printf("digite um numero: ");
        scanf("%d",&num[i]);


        if(i%2 == 0){
            soma += num[i];
        }else{
            subtr -= num[i];

        }
    }
    printf("A soma dos valores sao %d e a subtraçao e %d",soma,subtr);
}
