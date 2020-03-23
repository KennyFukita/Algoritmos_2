#include <stdio.h>
#include <stdlib.h>

/* A f�brica de tecidos Bicho-da-Seda armazena as seguintes informa��es sobre cada
tecido:
- c�digo num�rico
- descri��o do tecido
- pre�o do metro
- quantidade em estoque (em metros)
Fa�a um algoritmo que leia um lote de 30 tecidos, e depois imprima:
a) Um relat�rio contendo as informa��es de cada tecido.
b) Um relat�rio dos tecidos com estoque inferior a 50 metros.
c) Um relat�rio dos tecidos com pre�o inferior a R$ 0,60 o metro */

int main() {
	typedef struct dados{
        char descricao[50];
        float preco;
        int cod, qtd_estoque;
    };
    struct dados tecidos[30];
	int x;
	
	for(x=1;x<=30;x++){
		printf("~ Tecido %d\n",x);
		printf("Codigo numerico: ");
		scanf("%d",&tecidos[x].cod);
		fflush(stdin);
		printf("Descricao: ");
		gets(tecidos[x].descricao);
		printf("Preco do metro: ");
		scanf("%f",&tecidos[x].preco);
		printf("Quantidade em estoque(em metros): ");
		scanf("%d",&tecidos[x].qtd_estoque);
		printf("\n");		
	}
	
	printf("----  Relatorio das informacoes de todos tecidos \n");
	for(x=1;x<=30;x++){
		printf("~ Tecido %d\n",x);
		printf("Codigo numerico: %d\n",tecidos[x].cod);
		printf("Descricao: %s\n",tecidos[x].descricao);
		printf("Preco do metro: %.2f\n",tecidos[x].preco);
		printf("Quantidade em estoque(em metros): %d\n",tecidos[x].qtd_estoque);
		printf("\n");		
	}
	
	printf("----  Relatorio dos tecidos com estoque inferior a 50 metros \n");
	for(x=1;x<=30;x++){
		if (tecidos[x].qtd_estoque < 50){
			printf("Codigo numerico: %d\n",tecidos[x].cod);
			printf("Descricao: %s\n",tecidos[x].descricao);
			printf("Preco do metro: %.2f\n",tecidos[x].preco);
			printf("Quantidade em estoque(em metros): %d\n",tecidos[x].qtd_estoque);
			printf("\n");
		}
	}
	
	printf("---- Relatorio dos tecidos com pre�o inferior a R$ 0,60 o metro \n");
	for(x=1;x<=30;x++){
		if (tecidos[x].preco < 0.60){
			printf("Codigo numerico: %d\n",tecidos[x].cod);
			printf("Descricao: %s\n",tecidos[x].descricao);
			printf("Preco do metro: %.2f\n",tecidos[x].preco);
			printf("Quantidade em estoque(em metros): %d\n",tecidos[x].qtd_estoque);
			printf("\n");
		}	
	}
	
system("pause");	
return 0;	
}
