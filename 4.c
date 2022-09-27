
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
