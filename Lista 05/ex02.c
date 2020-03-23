#include <stdlib.h>
#include <stdio.h>

/* Faça  um  programa  em  C que  leia  o  nome  e  as  quatro  notas  bimestrais  para  um conjunto de 10 alunos. 
Depois de preenchida a estrutura o algoritmo deverá exibir uma listagem  dos  nomes  dos  alunos  seguidos  da  informação  aprovado  ou  reprovado. 
Considere que os alunos que obtiveram média inferior a 6,0 estão reprovados.*/

int main() {
    int x;
    typedef struct pessoa{
        char nome[20];
        float notas[3], media;
    };
    struct pessoa alunos[10];
    
    for (x=0; x<10; x++){
        printf("Informe o nome do %d aluno(a): ",x+1);
        fflush(stdin);
        gets(alunos[x].nome);
        printf("Informe a nota do 1 bimestre: ");
        scanf("%f",&alunos[x].notas[0]);
        printf("Informe a nota do 2 bimestre: ");
        scanf("%f",&alunos[x].notas[1]);
        printf("Informe a nota do 3 bimestre: ");
        scanf("%f",&alunos[x].notas[2]);
        printf("Informe a nota do 4 bimestre: ");
        scanf("%f",&alunos[x].notas[3]);
        printf("\n");
        alunos[x].media = (alunos[x].notas[0] + alunos[x].notas[1] + alunos[x].notas[2] + alunos[x].notas[3])/4;
    }
    
    for (x=0; x<10; x++){
        if(alunos[x].media < 6){
            printf("Aluno(a) %s foi reprovado com a media: %.2f\n",alunos[x].nome, alunos[x].media);
        }
        else{
            printf("Aluno(a) %s foi aprovado com a media: %.2f\n",alunos[x].nome, alunos[x].media);
        }
    }
    
system("pause");
return 0;
}
