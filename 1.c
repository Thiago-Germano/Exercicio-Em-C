/*Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros,
o produto doprimeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero,
a raiz quadradada soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulodo primeio n�*mro.
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

    printf("O m�dulodo primeiro n�mero  %.3lf\n",valor1<0 ?  valor1*-1:  valor1 );

}
