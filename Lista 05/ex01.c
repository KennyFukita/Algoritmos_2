#include <stdlib.h>
#include <stdio.h>

/*Faça  um  programa  em  Cque  leia  valores  para  uma  matriz  3x3  de  valores  inteiros  e depois multiplique esta matriz por um valor inteiro x a ser fornecido pelo usuário*/

int main() {
    int matriz[3][3], x, y, valor;
    
    for (x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("Informe o %d valor da %d linha: ",y,x);
            scanf("%d",&matriz[x][y]);
        }
    }
    
    printf("Informe o valor inteiro a ser multiplicado: ");
    scanf("%d",&valor);
    
    for (x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("Antes: %d | Depois: %d \n", matriz[x][y],matriz[x][y]*valor);
        }
    }
    
    
system("pause");
return 0;
}