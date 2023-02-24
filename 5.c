#include <stdio.h>

void main(){
	int numbers[5];
	int max,men;
	for(int i =0;i<5;i++){
		printf("digite o valor que voce quer salvar na posicao %d:  ",i);
		scanf("%d",&numbers[i]);
		if (i ==0){
			max =numbers[0];
			men =numbers[0];
		}else{
			if(max < numbers[i]){
				max = numbers[i];
			}else{
				if(men > numbers[i]){
					men = numbers[i];
				}
			}

		}
}
printf("menor eh:%d\nmaior eh:%d",men,max);

}
