/*Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar.*/
#include <stdio.h>

int main(){
    int num,num2,ini=1;
    char skip=' ';
    printf("digite um valor maximo: ");
    scanf("%d",&num);
    num2 = num;
    if(num%2!=0){
        for(int l = 0; l<((num/2.00)+0.5);l++){
            printf("\n");
            for(int i =0; i<=ini;i++){
                printf("  ");
            }
            for(int i =ini; i<=num2;i++){
                printf("%d ",i);
            }
            num2--;
            ini++;
        }
    }else{
    printf("valor invalido");
    }

}
