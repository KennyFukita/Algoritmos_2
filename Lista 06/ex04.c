#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba valores para duas vari�veis, ordenando os valores em
ordem crescente, utilizando uma fun��o. */

int soma(int v1, int v2);

int main(){
	int a, b, result;
	
	printf ("Digite um valor para a: ");
	scanf ("%d",&a);
	printf ("Digite um valor para b: ");
	scanf ("%d",&b);
	result = somar(a, b);
	printf("Valor da soma entre A e B eh: %d\n", result);
	
system("pause");	
return 0;	
}

int somar(int v1, int v2){
	int soma;
	
	soma = v1 + v2;
	
	return(soma);	
}
