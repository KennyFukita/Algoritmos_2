#include <stdio.h>
#include <stdlib.h>

/*Armazenar 15 números inteiros em um vetor NUM e imprimir os números fornecidos dizendo se
eles são par ou impar.*/

int main(){
	int num[15], x;
	
	for(x=1; x<=15; x++){
		printf("Informe o %d valor do vetor: ", x);
		scanf("%d",&num[x]);
	}
	
	for(x=1; x<=15; x++){
		if(num[x]%2==0){
			printf("O %d valor informado foi '%d' e ele eh par\n", x, num[x]);
		}
		else{
			printf("O %d valor informado foi '%d' e ele eh impar\n", x, num[x]);
		}
	}

system("pause");	
return 0;	
}
