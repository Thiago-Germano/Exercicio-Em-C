/*Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. */

#include <stdio.h>
#include <string.h>
#define TamanhoArry 10
int main(){
     int num[10];
     int maxi,menos;
     char nomevelho[10],nomenovo[10];
     char nome[10];

     for (int i = 0; i<4; ++i){
        printf("digite o nome: ");
        gets(nome);

        printf("digite a sua idade: ");
        scanf("%d",&num[i]);
        fflush(stdin);
        printf("\n\n");
/*-----------------------------------------------------------------*/
        if(i == 0){
            menos =num[0];
            maxi = num[0];
            strcpy (nomenovo, nome);
            strcpy (nomevelho, nome);
/*-----------------------------------------------------------------*/
        }else if( maxi < num[i]){
            maxi=  num[i];
            strcpy (nomevelho, nome);
        }
        if(menos > num[i]){
            menos = num[i];
            strcpy (nomenovo, nome);

        }
     }

     printf("O maior idade e %d o nome do individuo %s\n",maxi,nomevelho);
     printf("A menor idade e %d o nome do individuo  %s",menos,nomenovo);

}
