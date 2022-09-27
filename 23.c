#include <stdio.h>
int main(){
    int num[6],soma=0,subtr=0;

    for(int i = 0; i<6;i++){
        printf("digite um numero: ");
        scanf("%d",&num[i]);
        }


    printf("[");
    for(int i = 5; i>0;i--){
        printf("%d,",num[i]);
    }
    printf("%d]",num[0]);

}
