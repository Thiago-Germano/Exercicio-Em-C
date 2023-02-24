#include <stdio.h>
#include <math.h>

void main(){
	float base;
	float ex;
	printf("Digite a base desejada:");
	scanf("%f",&base);
	printf("Digite o expoente desejado:");
	scanf("%f",&ex);
	printf("resultado: %.2f",pow(base,ex));
}
