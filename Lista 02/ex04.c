#include <stdio.h>
#include <stdlib.h>

/* Entrar com a raz�o de uma PG e o valor do 1� termo. Calcular e imprimir o 5o termo.
Formula: quintotermo = primeirotermo * raz�o (quintaposicao � 1)*/

int main(){
	int quintovalor, pvalor, razao;
	
	printf("Informe o primeiro valor: ");
	scanf("%d",&pvalor);
	printf("Informe a razao da PG: ");
	scanf("%d",&razao);
	quintovalor = pvalor*pow(razao,5-1);
	printf("Quinto valor da PG: %d\n",quintovalor);
	
system("pause");
return 0;
}
