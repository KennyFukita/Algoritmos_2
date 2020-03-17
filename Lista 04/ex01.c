#include <stdio.h>
#include <stdlib.h>

/*Criar um programa em c que armazene números em dois vetores inteiros de cinco elementos cada.
Gere e imprima o vetor soma (soma dos dois vetores).*/


int main(){
	int vet1[5], vet2[5], x, soma=0;
	
	for(x=1; x<=5; x++){
		printf("Informe o %d valor do primeiro vetor: ", x);
		scanf("%d",&vet1[x]);
		printf("Informe o %d valor do segundo vetor: ", x);
		scanf("%d",&vet2[x]);
	}
	
	for(x=1; x<=5; x++){
		soma = soma + (vet1[x] + vet2[x]);
	}
	
	printf("A soma dos dois vetores eh: %d\n",soma);


system("pause");	
return 0;	
}
