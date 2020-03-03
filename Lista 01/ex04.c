#include <stdio.h>
#include <stdlib.h>

/*Ler dois números inteiros e imprimir a soma.*/

int main (){
	int x1, x2, soma;
	
	printf("Informe o primeiro valor: ");
	scanf("%d",&x1);
	printf("Informe o segundo valor: ");
	scanf("%d",&x2);
	soma = x1+x2;
	printf("Soma dos valores: %d \n",soma);

system("pause");
return 0;
}
