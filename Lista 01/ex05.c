#include <stdio.h>
#include <stdlib.h>

/*Entrar com dois n�meros e imprimir a m�dia aritm�tica.*/

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
