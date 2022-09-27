/* Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127. */
#include <stdio.h>

int main()
{
    for(int i = 0; i <128;i++){
        printf("código decimal %d| código hexa %x| caractere %c\n",i,i,i);
    }
}
