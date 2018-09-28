#include <stdio.h>
#include <stdlib.h>
#include "arvore-binaria.h"

void inicializar(No* *raiz){
    *raiz = NULL;
}

No* adicionar (tipo_dado valor, No* raiz){
    //se a arvore estiver vazia
    if(raiz == NULL){
        No *novo_no = (No*) malloc(sizeof(No));
        novo_no->dado = valor;
        novo_no->esq = NULL;
        novo_no->dir = NULL;
        return novo_no;
    }

    if(compareTo(valor, raiz->valor) > 0){
        raiz->dir = adicionar(valor, raiz->dir);
    }else{
        raiz->esq = adicionar(valor, raiz->dir);
    }

    return raiz;
}
int altura(No* raiz){

}
void remover(tipo_dado valor, No* raiz){
}



