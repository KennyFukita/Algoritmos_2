#include <stdio.h>
#include <stdlib.h>

/*Criar um algoritmo que leia os elementos de uma matriz inteira 10 X 10 e escreva
os elementos da diagonal principal.*/

int main () {
	int tam = 10,mat[tam][tam], x, y, cont;
	
	
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
	
	printf("Valores da diagonal principal \n");
	for(x=1;x<=tam;x++){
		for(y=1;y<=tam;y++){
			if (x == y){
				printf("-> %d\n", mat[x][y]);
				cont = 0;
			}
		}
	}

system("pause");
return 0;
}
