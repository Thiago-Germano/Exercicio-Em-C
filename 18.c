/*Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10.*/

#include <stdio.h>
#include <string.h>
#define TamanhoArry 2

int main(){
     int num,num2,soma,medias;
     int maxi,menos;
     char nomevelho[10],nomenovo[10];
     char nome[10];

     for (int i = 0; i<TamanhoArry; ++i){
        printf("digite o seu nome do aluno: ");
        gets(nome);

        printf("digite a sua primeira nota: ");
        scanf("%d",&num);

        printf("Digite a sua segunda nota: ");
        scanf("%d",&num2);

        soma = num2+num;
        medias = soma /2;

        fflush(stdin);
        printf("\n\n");
/*-----------------------------------------------------------------*/
        if(i == 0){
            menos =medias;
            maxi = medias;
            strcpy (nomenovo, nome);
            strcpy (nomevelho, nome);
/*-----------------------------------------------------------------*/
        }else if( maxi < medias){
            maxi=  medias;
            strcpy (nomevelho, nome);
        }else if(menos > medias){
            menos = medias;
            strcpy (nomenovo, nome);

        }
     }

     printf("O maior nota e %d o nome do(a) aluno(a) %s\n",maxi,nomevelho);
     printf("A menor nota e %d o nome do(a) aluno(a)  %s",menos,nomenovo);
}
