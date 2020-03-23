#include <stdio.h>
#include <stdlib.h>

/* Num certo município, vários proprietários de imóveis estão com atraso com o
pagamento do IPTU. Faça um algoritmo para ler os dados do imóvel e imprimir o
valor do IPTU com a multa a ser paga, considerando os dados do imóvel: número
de cadastro, valor do imposto e quantidade de meses em atraso. A multa é de R$
10,00 por cada mês de atraso. */

int calcular_impostos (float impostos, int meses);

int main() {
	typedef struct dados{
        float valor_imposto, valor_final;
        int num_cadastro, qtd_meses;
    };
    struct dados impostos;	
	
	printf("Numero de cadastro: ");
	scanf("%d",&impostos.num_cadastro);
	printf("Valor do imposto: ");
	scanf("%f",&impostos.valor_imposto);
	printf("Quantidade de meses atrasados: ");
	scanf("%d",&impostos.qtd_meses);
	impostos.valor_final = calcular_impostos(impostos.valor_imposto, impostos.qtd_meses);
	printf("Valor a ser pago apos o ajuste da multa de 10 reais por mes: %.2f \n",impostos.valor_final);

system("pause");	
return 0;	
}

int calcular_impostos (float impostos, int meses){
	float valor_pagar;
	
	valor_pagar = impostos + (meses * 10);
	
	return(valor_pagar);
}
