#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C que armazene um total de 10 valores inteiros digitados pelo
usuário e, posteriormente, informe quantos dos números digitados são múltiplos de 7. */

int main() {
int vet[10], x;
	
	for(x=1; x<=10; x++){
		printf("Informe o %d do vetor: ",x);
		scanf("%d",&vet[x]);
	}
	
	printf("Os numeros informados que sao multiplos de 7:\n");
	for(x=1; x<=10; x++){
		if(vet[x]%7==0){
			printf("-> %d\n",vet[x]);
		}
	}

system("pause");
return 0;
}
