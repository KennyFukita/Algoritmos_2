#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Defina um registro para armazenar os seguintes dados de clientes de um banco:
nome do cliente, código da agência, data de nascimento (formato dd/mm/aaaa),
saldo atual e situação (cliente ‘V’IP ou ‘N’ORMAL). */

int main(){
	typedef struct dados{
        char nome[50], datanasc[10], situ[1];
        float saldo;
        int cod;
    };
    struct dados clientes;
    
	
	printf("Nome: ");
	fflush(stdin);
	gets(clientes.nome);
	printf("Codigo da agencia: ");
	scanf("%d",&clientes.cod);
	printf("Data de nascimento(dd/mm/aaaa): ");
	scanf("%s",&clientes.datanasc);
	printf("Saldo: ");
	scanf("%f",&clientes.saldo);
	printf("Situacao('V'- VIP // 'N'- NORMAL): ");
	scanf("%s",&clientes.situ);

system("pause");	
return 0;	
}
