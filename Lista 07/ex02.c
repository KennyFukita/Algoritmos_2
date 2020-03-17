#include <stdio.h>
#include <stdlib.h>

/* Armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário sabendo que o reajuste foi de 8%. */

int main() {
	int x;
	float vet[20], vetdesc[20];
		
	for(x=1; x<=20; x++){
		printf("Informe o salario da %d pessoa: ", x);
		scanf("%f",&vet[x]);
	}
	
	for(x=1; x<=20; x++){
		vetdesc[x] = vet[x]*0.08;
		printf("Valor ajustado em 8 por cento: %.2f\n",vetdesc[x]);
	}

system("pause");
return 0;
}
