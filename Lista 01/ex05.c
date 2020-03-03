#include <stdio.h>
#include <stdlib.h>

/*Entrar com dois números e imprimir a média aritmética.*/

int main (){
	float media, x1, x2;
	
	printf("Informe o primeiro valor: ");
	scanf("%f",&x1);
	printf("Informe o segundo valor: ");
	scanf("%f",&x2);
	media = (x1+x2)/2;
	printf("Media dos dois valores informados: %f \n",media);

system("pause");
return 0;
}
