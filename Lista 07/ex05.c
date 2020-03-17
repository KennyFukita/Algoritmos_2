#include <stdio.h>
#include <stdlib.h>

/* Criar um algoritmo que leia um conjunto de 30 valores inteiros, armazene-os em
um vetor e escreva-os ao contrário da ordem de leitura */

int main() {
	int vet1[30], vet2[30], x;
	
	for(x=1;x<=30;x++){
		printf("Informe o %d valor do vetor: ",x);
		scanf("%d",&vet1[x]);
		
	}
	
	for(x=1;x<=30;x++){
		vet2[x] = vet1[6-x];
	}
	
	for(x=1;x<=30;x++){
		printf("%d valor do segundo vetor: %d \n", x, vet2[x]);
		
	}

system("pause");
return 0;
}
