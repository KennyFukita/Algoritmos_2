#include <stdio.h>
#include <stdlib.h>

/* Numa viação, uma passagem de ônibus inclui os seguintes campos: número,
código do local de partida, código do local de chegada, poltrona, tipo de assento (J
– janela e C – corredor). Faça a definição do registro relativo a esta passagem */

int main() {
	typedef struct passagem{
		int cod_partida, cod_chegada, poltrona;
		char tipo[1];
	};
	struct passagem onibus;
	
	printf("Codigo do local de partida: ");
	scanf("%d",&onibus.cod_partida);
	printf("Codigo do local de chegada: ");
	scanf("%d",&onibus.cod_chegada);
	printf("Numero da poltrona: ");
	scanf("%d",&onibus.poltrona);
	printf("Tipo do assento(J-Janela/C-Corredor): ");
	scanf("%s",&onibus.tipo);

system("pause");	
return 0;	
}
