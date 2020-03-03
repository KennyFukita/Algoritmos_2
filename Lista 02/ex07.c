#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C para ler 2 valores (considere que não serão informados valores
iguais) e escrever o maior deles. */

int main(){
	int x1, x2;
	
	printf("Informe o primeiro valor: ");
	scanf("%d",&x1);
	printf("Informe o segundo valor: ");
	scanf("%d",&x2);
	
	if(x1>x2){
		printf("Maior valor informado eh: %d\n",x1);
	}
	else{
		printf("Maior valor informado eh: %d\n",x2);
	}
	
	
system("pause");
return 0;
}
