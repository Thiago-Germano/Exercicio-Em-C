/*Escreva um programa que leia um número na base decimal e em seguida imprima esse
mesmo número nas bases octal e hexadecimal. */
#include <stdio.h>

int main()
{
    int num;
    printf("digite um numero decimal: ");
    scanf("%d",&num);


    printf("octal: %o\nhexadecimal: %X",num,num);

    return 0;
}
