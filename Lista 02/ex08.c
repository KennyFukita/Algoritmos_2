#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa em C que pe�a tr�s n�meros ao utilizador, e que indique qual dos tr�s � o
maior.*/

int main(){
	int x, cont, maior_valor = 0;
	
	for (cont = 1; cont <= 3; cont++){
		printf("Informe o %d valor: ",cont);
		scanf("%d",&x);
		if(x > maior_valor){
			maior_valor = x;
		}
	}
	printf("Maior valor informado eh: %d\n",maior_valor);
	
system("pause");
return 0;
}
