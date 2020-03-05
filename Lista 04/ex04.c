#include <stdio.h>
#include <stdlib.h>

/*Criar um vetor que armazena o preço de 5 produtos, atualizar o preço em 10%.*/

int main(){
	int x;
	float vet[5], vetdesc[5];
		
	for(x=1; x<=5; x++){
		printf("Informe o %d valor do vetor: ", x);
		scanf("%f",&vet[x]);
		printf("%f",&vet[x]);
	}
	
	for(x=1; x<=5; x++){
		vetdesc[x] = vet[x]*0.10;
		printf("Valor ajustado com 10 por cento de desconto: %f\n",vetdesc[x]);
	}

system("pause");	
return 0;	
}


