#include <stdio.h>
#include	<locale.h>


int main(){
    setlocale(0, "Portuguese");

    float nota1, nota2, nota3, media_exercicios, media_geral;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite sua m�dia das notas de exerc�cios: ");
    scanf("%f", &media_exercicios);

    media_geral = (nota1 + nota2*2 + nota3*3 + media_exercicios) / 7;

    if(media_geral >= 9){
        printf("Sua m�dia � %.2f e o seu conceito � A",media_geral);
    }
    else if(media_geral >= 7.5 && media_geral < 9){
        printf("Sua m�dia � %.2f e o seu conceito � B",media_geral);
    }
    else if(media_geral >= 6 && media_geral < 7.5){
        printf("Sua m�dia � %.2f e o seu conceito � C",media_geral);
    }
    else if(media_geral >= 4 && media_geral < 6){
        printf("Sua m�dia � %.2f e o seu conceito � D",media_geral);
    }
    else if(media_geral < 4){
        printf("Sua m�dia � %.2f e o seu conceito � E",media_geral);
    }
    else{
        printf("ERRO!! Sua m�dia est� maior do que o limite, tente novamente!");
    }
}
