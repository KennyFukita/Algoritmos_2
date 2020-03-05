#include <stdlib.h>
#include <stdio.h>

/*Escreva um programa em Cpara ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir  a  média  semestral. 
Faça  com  que  o  algoritmo  só  aceite  notas  válidas  (0  a  10).  Cada nota deve ser validada separadamente*/

int main() {
    float media, n1, n2;
    
    do{
        printf("Informe a primeira nota: ");
        scanf("%f",&n1);
        if(n1 < 0 || n1 > 10){
            printf("Nota invalida, informe uma nota entre 0 e 10...\n");
        }
    }while(n1 > 10 || n1 < 0);    
        
    do{
        printf("Informe a segunda nota: ");
        scanf("%f",&n2);
        if(n2 < 0 || n2 > 10){
            printf("Nota invalida, informe uma nota entre 0 e 10...\n");
        }
    }while(n2 > 10 || n2 < 0); 
        
    
    media = (n1+n2)/2;
    printf("Media: %.2f", media);
        
system("pause");
return 0;
}