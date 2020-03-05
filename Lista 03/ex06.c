#include <stdio.h>
#include <stdlib.h>

/*Ler 10 valores, calcular e escrever a média aritmética destes valores.*/

int main(){
	int x, cont, total;
	float media;
	
	for(cont=1; cont<=10; cont++){
		printf("Informe o %d valor: ",cont);
		scanf("%d",&x);
		total = total + x;
	}
	
	media = total/10;
	printf("Media aritmetica dos 10 valores informados: %.2f\n",media);

system("pause");	
return 0;	
}
