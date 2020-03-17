#include <stdio.h>
#include <stdlib.h>

/* Ler um vetor v de 10 elementos e obter um vetor w cujos componentes são os
quadrados dos respectivos componentes de v. */

int main() {
	int v[10], w[10], x;
	
	for(x=1;x<=10;x++){
		printf("Informe o %d valor do vetor V: ",x);
		scanf("%d",&v[x]);
		w[x] = v[x]*v[x];
	}
	
	for(x=1;x<=10;x++){	
		printf("%d do vetor W: %d \n",x ,w[x]);			
	}

system("pause");
return 0;
}
