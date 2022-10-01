#include <stdio.h>
#include <locale.h>
/*Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas.*/

int main(){
    setlocale(0, "Portuguese");

    int alunos,alunas;

    printf("Digite o numero de alunos e depois o numero de alunas: \n");
    scanf("%d %d",&alunos,&alunas);

    if(alunos>alunas){
        printf("Tem mais alunos, parece ser um curso de ciencia da computaçao");
    }else if(alunos==alunas){
        printf("E tudo igual");
    }else{
        printf("Tem mais alunas, o total de alunos nessa sala e %d",(alunas+alunos));
    }
}
