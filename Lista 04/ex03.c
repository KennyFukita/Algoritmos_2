#include <stdio.h>
#include <stdlib.h>

/*Armazenar 8 números em um vetor e apresentar os números que forem múltiplos de 6.*/

int main(){
	int vet[8], x;
	
	for(x=1; x<=8; x++){
		printf("Informe o %d do vetor: ",x);
		scanf("%d",&vet[x]);
	}
	
	printf("Os numeros informados que sao multiplos de 6:\n");
	for(x=1; x<=8; x++){
		if(vet[x]%6==0){
			printf("-> %d\n",vet[x]);
		}
	}

system("pause");	
return 0;	
}
