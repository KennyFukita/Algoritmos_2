#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa em C que armazene um total de 10 valores inteiros digitados pelo
usu�rio e, posteriormente, informe quantos dos n�meros digitados s�o m�ltiplos de 7. */

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
