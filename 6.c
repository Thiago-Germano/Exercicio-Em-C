
#include <stdio.h>

int main()
{
    int preco, inflaciona;
    printf("digite o preço do preduto: ");
    scanf("%d",&preco);

    for(int i=0;i<1 && 100>preco;i++ ){
        inflaciona = preco+(preco*0.1);
    }
    for(int i=0;i<1 && 100<=preco;i++ ){
        inflaciona = preco+(preco*0.2);
    }
    printf("%d",inflaciona);
    return 0;
}
