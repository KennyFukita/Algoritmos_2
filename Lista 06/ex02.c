#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que calcule o fatorial de um n�mero lido, utilizando uma fun��o.*/

int fatorial(int v1);

int main () {
	int x, fat;
	
	printf("Informe um valor para ser calculado seu fatorial: ");
	scanf("%d",&x);
	fat = fatorial(x);
	printf("Fatorial de %d eh: %d\n", x, fat);
	getch();
	
	
system("pause");	
return 0;	
}

int fatorial(int v1){
	int resultado = 1, x = 1;
	
	for (x=1;x<=v1;x++){
		resultado = resultado * x;
	}
	return(resultado);	
}
