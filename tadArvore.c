/*
Alunos:
Kauan Eiji Kataoka Eguchi
Henrique Hiroshi Maeda
*/

#include <stdio.h>
#include <stdlib.h>
#include "tadArvore.h"

ARVORE_BINARIA *criar_arvore(){

    ARVORE_BINARIA *arv;
    arv = (ARVORE_BINARIA *)malloc(sizeof(ARVORE_BINARIA));

    if (arv != NULL) {
        arv->raiz = NULL;
    }

    return arv;

}

NO *criar_no(int valor) {

    NO *novo = (NO *)malloc(sizeof(NO));
    if (novo != NULL) {

        novo->valor = valor;
        novo->filhodir = NULL;
        novo->filhoesq = NULL;

    }

    return novo;

}

NO *inserir_aux(NO *no, int valor) {

    if (no == NULL) {
        return criar_no(valor);
    }

    if (valor < no->valor) {
        no->filhoesq = inserir_aux(no->filhoesq, valor);
    } else if (valor > no->valor) {
        no->filhodir = inserir_aux(no->filhodir, valor);
    }

    return no;

}

void inserir(ARVORE_BINARIA *arvore, int valor) {

    if (arvore == NULL) {
        return;
    }

    arvore->raiz = inserir_aux(arvore->raiz, valor);

}



void posordem_aux(NO *raiz) {

    if (raiz != NULL) {

        posordem_aux(raiz->filhoesq);
        posordem_aux(raiz->filhodir);
        printf("[%d] ", raiz->valor);

    }
}

void posordem_free(NO *raiz){

    int valor_liberado;

    if (raiz != NULL){

        posordem_free(raiz->filhoesq);
        posordem_free(raiz->filhodir);

        valor_liberado = raiz->valor;

        free(raiz);
        printf("\n\nValor liberado da arvore: ");
        printf("[%d] ", valor_liberado);


    }
}

void posordem(ARVORE_BINARIA *arvore){
    posordem_aux(arvore->raiz);
    posordem_free(arvore->raiz);
}
