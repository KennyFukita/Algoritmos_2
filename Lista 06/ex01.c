#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba valores para duas variáveis e troque os valores entre
elas, utilizando uma função. */

int trocaValor (int v1, int v2);

int main () {
	int a, b;
	
	printf ("Digite um valor para a: ");
	scanf ("%d",&a);
	printf ("Digite um valor para b: ");
	scanf ("%d",&b);
	trocaValor(a, b);
	
system("pause");	
return 0;
}

int trocaValor (int v1, int v2){
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
	printf("Valor de A: %d \n", v1);
	printf("Valor de B: %d \n", v2);
	return(v1,v2);
}
