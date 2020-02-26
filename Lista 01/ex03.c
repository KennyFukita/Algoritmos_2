#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Elabore um Algoritmo para converter uma temperatura em graus Celsius para Fahrenheit (ºF=32
+ 1.8ºC). */

int main (){
	float graus_c, nova_temp;
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &graus_c);

	nova_temp = (graus_c*1.8)+32;
	printf("A temperatura em Fahrenheit eh: %.2f \n",nova_temp);
	
system("pause");	
return 0;	
}
