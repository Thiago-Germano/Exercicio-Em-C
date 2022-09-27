/*Faça um programa que solicite 2 números e informe: a soma dos números,
o produto doprimeiro número pelo quadrado do segundo, o quadrado do primeiro número,
a raiz quadradada soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulodo primeio nú*mro.
*/
#include <stdio.h>
#include <math.h>
int main(){
    double valor1,valor2,c;
    printf("digite dois numeros: ");
    scanf("%lf %lf",&valor1,&valor2);

    printf("A soma dos numeros  %.3lf\n",valor1+valor2);

    printf("o produto doprimeiro numero pelo quadrado do segundo %.3lf\n",valor1*(valor2*valor2));

    printf("o quadrado do primeiro numero %.3lf\n",(valor1*valor1));

    printf("a raiz quadradada soma dos quadrados %.3lf\n",valor1+valor2);
    c = sin(valor1)*cos(valor2)-sin(valor2)*cos(valor1);
    printf("o seno da diferenca do primeiro numero pelo segundo %lf\n",c);

    printf("O módulodo primeiro número  %.3lf\n",valor1<0 ?  valor1*-1:  valor1 );

}
