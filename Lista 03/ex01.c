#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Faça um programa em C que leia palavras digitadas pelo usuário e que, para cada uma delas, imprima a frase "Você digitou a palavra: xxxx" (onde "xxxx" é a palavra digitada). O
programa deve  repetir  essas  operações  até  o  usuário  digitar  a  palavra  "fim".  O  programa  não  deve imprimir a frase de resposta quando a palavra digitada for "fim".*/

int main() {
    char word[30], word2[30]="fim";
    int ret;
    
    while (ret != 0){
        printf("Informe uma palavra: ");
        gets(word);
        ret = strcmp(word,word2);
        if(ret==0){
            break;
        }
        printf("Voce digitou a palavra: %s\n",word);
    }
    
system("pause");
return 0;
}
