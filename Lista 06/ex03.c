#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba valores para duas variáveis, ordenando os valores em
ordem crescente, utilizando uma função. */

int ordenar(int v1, int v2);

int main(){
	int a, b;
	
	printf ("Digite um valor para a: ");
	scanf ("%d",&a);
	printf ("Digite um valor para b: ");
	scanf ("%d",&b);
	ordenar(a, b);
	
system("pause");	
return 0;	
}

int ordenar(int v1, int v2){
	
	if (v1>v2){
		printf("Valores ordenados em ordem crescente\n");
		printf("-> %d\n", v2);
		printf("-> %d\n", v1);		
	}
	else if (v1<v2){
		printf("Valores ordenados em ordem crescente\n");
		printf("-> %d\n", v1);
		printf("-> %d\n", v2);
	}
	else{
		printf("Os valores %d e %d sao iguais\n",v1, v2);
	}
	
	return(v1, v2);	
}
