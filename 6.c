/*Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?".*/
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
