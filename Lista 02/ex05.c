#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que leia 5 valores e determine o menor deles.*/

int main(){
	int menor_valor=999999999, cont=0, x=0;
	
	for (cont = 1; cont <=5; cont++){
		printf("Informe o %d valor: ",cont);
		scanf("%d",&x);
		
		if(x < menor_valor){
			menor_valor = x;
		}
	}
	
	printf("Menor valor informado: %d\n", menor_valor);
	
system("pause");
return 0;
}
