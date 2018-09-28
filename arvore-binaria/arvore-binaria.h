#ifndef bst_h
#define bst_h

typedef int tipo_dado;

typedef struct no{
    tipo_dado dado;
    struct no *esq, *dir;
}No;

//typedef no * arvore;

void inicializar(No* *raiz);
No* adicionar (tipo_dado valor, No* raiz;)
int altura(No* raiz);
void remover(tipo_dado valor, No* raiz);

#endif // bst_h
