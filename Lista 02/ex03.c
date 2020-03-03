#include <stdio.h>
#include <stdlib.h>

/*Entrar com a razão de uma PA e o valor do 1º termo. Calcule e imprima o 10o termo.
Formula: decimotermo = primeirotermo + (posição desejada – 1) * razão*/

int main(){
	int razao, pvalor, decimovalor;
	
	printf("Informe o primeiro valor: ");
	scanf("%d",&pvalor);
	printf("Informe a razao da PA: ");
	scanf("%d",&razao);
	decimovalor = pvalor+(10-1)*razao;
	printf("Decimo valor da PA: %d\n",decimovalor);
	
system("pause");
return 0;
}
