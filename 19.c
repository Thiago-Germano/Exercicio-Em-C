#include <stdio.h>
#define TamanhoArry 5
int main(){
     int num[TamanhoArry];
     int maxi,menos;

     for (int i = 0; i<TamanhoArry; ++i){
        printf("digite um numero na posiçao %d: ",i);
        scanf("%d",&num[i]);
        fflush(stdin);
        printf("\n\n");
/*-----------------------------------------------------------------*/
        if(i == 0){
            menos =num[0];
            maxi = num[0];
/*-----------------------------------------------------------------*/
        }else if( maxi < num[i]){
            maxi=  num[i];
        }
        if(menos > num[i]){
            menos = num[i];

        }
     }

     printf("O maior elemento e %d\n",maxi);
     printf("A menor elemento e %d",menos);

}
