#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Entrar com valores para uma matriz A 4 X 4 e para uma matriz B 4 X 4. Gerar e
imprimir a matriz soma 4 X 4. */

int main () {
	int lin = 4, col = 4, mat[lin][col], mat2[lin][col], soma[lin][col], x, y, cont;
	
	
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			printf("Informe o valor da %d linha e %d coluna da matriz A: ", x, y);
			scanf("%d",&mat[x][y]);
			printf("Informe o valor da %d linha e %d coluna da matriz B: ", x, y);
			scanf("%d",&mat2[x][y]);
			printf("\n");
		}
	}
	
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			soma[x][y] = mat[x][y] + mat2[x][y];
		}
	}
	
	printf("Matriz contendo a soma de cada valor informado das duas matrizes \n");
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			printf("%-8d", soma[x][y]);
			cont = cont + 1;
			if (cont == col){
				printf("\n");
				cont = 0;
			}
		}
	}
	
system("pause");
return 0;
}
