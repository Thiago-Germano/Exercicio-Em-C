/*O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um n�mero n,
calcule seu quadrado usando a soma de �mpares ao inv�s de produto.*/


int main(){

    int num,resu=0;
    printf("digite um numero: ");
    scanf("%d",&num);


    printf("%d^2 = ",num);

    for(int i = 0,cal=num*num; cal>resu; i++){
        if( i%2 != 0 ){
            printf(" %d ",i);
            resu += i;

        }else if(resu != cal){
            printf("+");
        }

    }

    printf(" = %d",resu);

}


