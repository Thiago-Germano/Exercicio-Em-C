#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[255];
	int largura;
	int compr;


}comodo;
int main(){
	char resposta[4];
	int i=0;
	int areaTotal;
	comodo com;

	while(1){
		printf("Quer continuar?  ");
		scanf("%s",&resposta);


		if (resposta == "NAO"){
			break;
		}
		printf("_=+=_comodo %d_=+=_\n",i);
		fflush(stdin);
		printf("Qual eh comodo? ");
		scanf("%s",&com.nome);
		fflush(stdin);

		printf("Qual eh a largura?[m] ");
		scanf("%d",&com.largura);
		fflush(stdin);

		printf("Qual eh o comprimento? [m]");
		scanf("%d",&com.compr);

		areaTotal+= com.largura + com.compr;
		
		printf("Area total eh %d",areaTotal);
	}

}
