#include <stdio.h>
#include <stdlib.h>

/* Criar um algoritmo que leia dois conjuntos de números inteiros, tendo cada um 20
elementos e apresente os elementos comuns aos conjuntos. */

int main() {
	int vet1[20], vet2[20], x, y;
	
	for(x=1;x<=5;x++){
		printf("Informe o %d valor do primeiro vetor: ",x);
		scanf("%d",&vet1[x]);
		printf("Informe o %d valor do segundo vetor: ",x);
		scanf("%d",&vet2[x]);
		printf("\n");
	}
	
	for(x=1;x<=20;x++){
		for(y=1;y<=20;y++){
			if(vet1[x] == vet2[y]){
				printf("O valor %d eh comum entre os dois vetores! \n", vet2[y]);
			}
		}
	}

system("pause");
return 0;
}
