#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Entrar com valores para uma matriz 3 X 4. Gerar e imprimir uma matriz B que é o
triplo da matriz. */

int main () {
	int lin = 3, col = 4, mat[lin][col], mat2[lin][col], x, y, cont;
	
	
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			printf("Informe o valor da %d linha e %d coluna: ", x, y);
			scanf("%d",&mat[x][y]);
		}
	}
	
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			mat2[x][y] = pow(mat[x][y], 3);
		}
	}
	
	printf("Matriz informada \n");
	for(x=1;x<=lin;x++){
		for(y=1;y<=col;y++){
			printf("%-8d", mat2[x][y]);
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
