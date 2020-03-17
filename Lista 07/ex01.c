#include <stdio.h>
#include <stdlib.h>


/* Armazenar 10 números em um vetor NUMERO e imprimir uma listagem
numerada. */

int main() {
	int x, vet[10];
	
	for(x=1;x<=10;x++){
		printf("Informe o %d valor do vetor: ",x);
		scanf("%d",&vet[x]);
	}
	
	for(x=1;x<=10;x++){
		printf("%d valor: %d\n",x, vet[x]);	
	}
	
system("pause");
return 0;
}
