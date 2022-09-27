/*Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("digie dois valores: ");
    scanf("%d %d",&num1,&num2);

    if (num1 < num2){
        for(int i = num1; i<num2;i++){
            printf("%d - ",i);
        }
        printf("%d",num2);
    }else if(num1 > num2) {
        for(int i = num1; i>num2;i--){
            printf("%d - ",i);
        }
        printf("%d",num2);
    }else{
        printf("valores iguais");
    }

    return 0;
}
