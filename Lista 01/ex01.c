#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo que calcule o di�metro, a �rea e a circunfer�ncia de um c�rculo, sabendo
que o �nico dado dispon�vel � o seu raio.
Di�metro = 2 * Raio
�rea = PI * Raio^2
Circunfer�ncia= 2 * PI * Raio
*/

int main (){
	float raio, diametro, area, circun;
	
	printf("Informe o valor do raio do circulo: ");
	scanf("%f",&raio);
	
	diametro = 2*raio;
	area = 3.1416 * (pow(raio,2));
	circun = 2*3.1416*raio;
	
	printf("O valor do diametro do circulo eh: %.2f\n", diametro);
	printf("O valor da area do circulo eh: %.2f \n", area);
	printf("O valor da circunferencia do circulo eh: %.2f\n", circun);
	
system("pause");	
return 0;	
}
