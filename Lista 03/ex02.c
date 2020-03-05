#include <stdlib.h>
#include <stdio.h>

/*Escreva  um  programa  em  C para  ler  2  valores  (se  o  segundo  valor  informado  for  ZERO apresentará a seguinte mensagem "Valor  inválido" 
e deverá  ler um  novo valor até que ele seja um valor válido) e imprimir o resultado da divisão do primeiro pelo segundo.*/

int main() {
    int x1,x2;
    float divisao;
    
    printf("Informe o primeiro valor: ");
    scanf("%d",&x1);
    while (x2 == 0){
        printf("Informe o segundo valor: ");
        scanf("%d",&x2);
        if(x2 == 0){
            printf("Valor inválido, informe um valor diferente de 0\n");
        }
        
    }
    divisao = x1/x2;
    printf("Resultado da divisão entre o primeiro e o segundo valor informado: %.2f", divisao);
        
system("pause");
return 0;
}