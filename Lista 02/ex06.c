#include <stdio.h>
#include <stdlib.h>

/*Dado 3 valores (X, Y, Z) que representam os lados de um triangulo, verifique se estes valores
formam um triangulo eq�il�tero, is�sceles ou escaleno.
Dica: o triangulo eq�il�tero tem os tr�s lados iguais, is�sceles dois lados iguais e escaleno os tr�s
lados diferentes.*/

int main(){
	int x, y, z;
	
	printf("Informe o valor de x: ");
	scanf("%d",&x);
	printf("Informe o valor de y: ");
	scanf("%d",&y);
	printf("Informe o valor de z: ");
	scanf("%d",&z);
	
	if(x == y && x == z && y == z){
		printf("O triangulo eh equilatero!\n");
	}
	else if(x != y && x != z && y != z){
		printf("O triangulo eh escaleno!\n");
	}
	else{
		printf("O triangulho eh isosceles\n");
	}
		
system("pause");
return 0;
}
