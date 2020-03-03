#include <stdio.h>
#include <stdlib.h>

/*Criar um programa em C que calcule e imprima a área de um losango.
Formula: (diagonal maior * diagonal menor) dividido por 2*/

int main (){
	float area, dmaior, dmenor;
	
	printf("Informe o valor da diagonal maior: ");
	scanf("%f",&dmaior);
	printf("Informe o valor da diagonal menor: ");
	scanf("%f",&dmenor);
	area = (dmaior * dmenor)/2;
	printf("Area do losango: %.2f\n",area);

system("pause");	
return 0;
}
