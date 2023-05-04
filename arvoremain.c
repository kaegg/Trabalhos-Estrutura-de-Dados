/*
Alunos:
Kauan Eiji Kataoka Eguchi 128854
Henrique Hiroshi Maeda 131594
*/

#include <stdio.h>
#include <stdlib.h>
#include"tadArvore.c"
#define MAX 500

int main(){

    ARVORE_BINARIA *arvore = criar_arvore();

    int valores_digitados = 0;
    printf("Quantos valores voce quer inserir na arvore? ");
    scanf("%d", &valores_digitados);

    int i = 0;
    int guarda_valores[valores_digitados];
    while(i < valores_digitados){

        printf("Digite um valor: ");
        scanf("%d", &guarda_valores[i]);
        i++;

    }

    for(i=0; i < valores_digitados;i++){
        inserir(arvore, guarda_valores[i]);
    }

    int j;
    printf("\nValores digitados: \n");
    while(j < valores_digitados){

        printf("[%d] ", guarda_valores[j]);
        j++;

    }

    printf("\n\nArvore em pos ordem: \n");
    posordem(arvore);
    printf("\n\nArvore em pos ordem: \n");
    posordem(arvore);
    return 0;

}
