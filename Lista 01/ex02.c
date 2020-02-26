#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever o
valor do novo salário */

int main (){
	float salario, reajuste, novo_salario;
	
	printf("Informe o salario: ");
	scanf("%f",&salario);
	printf("Informe o valor do reajuste do salario: ");
	scanf("%f",&reajuste);
	novo_salario = salario*reajuste;
	printf("Valor do novo salario: %.2f", novo_salario);

system("pause");	
return 0;
}
