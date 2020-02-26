#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo que calcule o diâmetro, a área e a circunferência de um círculo, sabendo
que o único dado disponível é o seu raio.
Diâmetro = 2 * Raio
Área = PI * Raio^2
Circunferência= 2 * PI * Raio
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
