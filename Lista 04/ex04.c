#include <stdio.h>
#include <stdlib.h>

/*Criar um vetor que armazena o preço de 5 produtos, atualizar o preço em 10%.*/

int main(){
	int x;
	float vet[5], vetdesc[5];
		
	for(x=0; x<5; x++){
		printf("Informe o %d valor do vetor: ", x+1);
		scanf("%f",&vet[x]);
	}
	
	for(x=0; x<5; x++){
		vetdesc[x] = vet[x]*1.10;
		printf("Valor ajustado aumentado em 10 por cento: %.2f\n",vetdesc[x]);
	}

system("pause");	
return 0;	
}


