#include <stdio.h>
#include <stdlib.h>

/* O cadastro em um provedor de Internet é feito com os seguintes dados: nome do
cliente, endereço eletrônico, plano de acesso (1 – ilimitado; 2 – 20 horas/mês; 3 –
10 horas/mês), valor da mensalidade e situação (A – Ativo ou I – Inativo). Monte
um registro para representar esta estrutura. */

int main() {
	typedef struct dados{
        char nome[50], endereco_eletronico[50], plano[1], situ[1];
        float mensalidade;
        
    };
    struct dados cliente;
	
	printf("Nome: ");
	fflush(stdin);
	gets(cliente.nome);
	printf("Endereco eletronico: ");
	fflush(stdin);
	gets(cliente.endereco_eletronico);	
	printf("Plano de acesso(1- Ilimitado | 2- 20 horas/mes | 3- 10 horas/mes): ");
	scanf("%s",&cliente.mensalidade);
	printf("Valor da mensalidade: ");
	scanf("%s",&cliente.mensalidade);
	printf("Situacao(A- Ativo/I- Inativo): ");
	scanf("%s",&cliente.situ);


system("pause");	
return 0;	
}
