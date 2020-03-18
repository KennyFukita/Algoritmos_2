#include <stdio.h>
#include <stdlib.h>

/* Criar um algoritmo que armazene dados em uma matriz de ordem 5 e imprima
toda a matriz. */

int main () {
	int tam = 5,mat[tam][tam], x, y, cont;
	
	
	for(x=1;x<=tam;x++){
		for(y=1;y<=tam;y++){
			printf("Informe o valor da %d linha e %d coluna: ", x, y);
			scanf("%d",&mat[x][y]);
		}
	}
	
	printf("Matriz informada \n");
	for(x=1;x<=tam;x++){
		for(y=1;y<=tam;y++){
			printf("%-8d", mat[x][y]);
			cont = cont + 1;
			if (cont == tam){
				printf("\n");
				cont = 0;
			}
		}
	}
	
system("pause");
return 0;
}
