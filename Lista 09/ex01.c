#include <stdio.h>
#include <stdlib.h>

/* Um vendedor de autom�veis armazena os seguintes dados de um ve�culo:
fabricante, modelo, ano, placa, cor, tipo de combust�vel (A � �lcool e G �
gasolina), pre�o e valor do IPVA. Escreva a declara��o de um registro para estes
dados. */

int main(){
    typedef struct dados{
        char fabricante[20], modelo[20], placa[7], cor[20], tipo[1];
        float preco, valor;
        int ano;
    };
    struct dados veiculo;
	
	printf("Fabricante: ");
	fflush(stdin);
    gets(veiculo.fabricante);
    printf("Modelo: ");
    fflush(stdin);
    gets(veiculo.modelo);
    printf("Ano: ");
    scanf("%d",&veiculo.ano);
    printf("Placa: ");
    fflush(stdin);
    gets(veiculo.placa);
    printf("Cor: ");
    fflush(stdin);
    gets(veiculo.cor);
    printf("Tipo de combustivel(A-alcool//G-gasolina): ");
    scanf("%s",&veiculo.tipo);
	printf("Preco IPVA: ");
    scanf("%f",&veiculo.preco);
    printf("Valor total IPVA: ");
    scanf("%f",&veiculo.valor);

system("pause");	
return 0;	
}
