/*Implemente um programa que solicita as notas das duas provas feitas por cada um dos alunos de uma turma 
(as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas.
O programa deve parar imediatamente após ter sido digitado o valor 50 paraa nota da primeira prova.*/


#include <stdio.h>

int main(){
    float nota1,nota2,media;
    int i=0;


    while(1){

        printf("\ndigite a primeira nota do aluno %d :",i);
        scanf("%f",&nota1);
        if(nota1==50.00){
            break;
        }

        printf("\ndigite a segunda nota do aluno %d :",i);
        scanf("%f",&nota2);

        if ((0<=nota1<=10) && (0<=nota2<=10)){
            media = (nota1+nota2)/2.00;
        }

        printf("\nA media do aluno%d e %.2f",i,media);
        i++;
    }
}

