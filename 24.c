#include <stdio.h>

int main(){
    int valor,total,cred,totalcred;
    printf("digite o numero que voce quer sacar : ");
    scanf("%d",&valor);
    total = valor;
    cred = 100;
    totalcred = 0;

    while (1){
        if (total >= cred){
            total-= cred;
            totalcred += 1;
        }else{
            printf("o total de celulas foi de %d de r$ %d\n",totalcred,cred);
            if(cred ==100){
                cred = 50;
            }else if (cred == 50){
                cred = 20;
            }else if (cred == 20) {
                cred = 10;

            }else if (cred ==10){
                cred = 5;
            }else if(cred == 5){
                cred =1;
            }
            totalcred = 0;
            if (total == 0){
                break;
            }
        }
    }
}
