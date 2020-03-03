#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Entrar com os valores dos catetos de um triângulo retângulo e imprimir a hipotenusa.
Formula: hipotenusa = raiz(b2 + c2)*/

int main(){
	float hip, b2, c2;
	
	printf("Informe o valor do primeiro cateto: ");
	scanf("%f",&b2);
	printf("Informe o valor do segundo cateto: ");
	scanf("%f",&c2);
	hip = sqrt(b2+c2);
	printf("Valor da hipotenusa: %.2f\n",hip);
	
system("pause");
return 0;
}
