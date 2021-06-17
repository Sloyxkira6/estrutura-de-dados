#include <stdio.h>
#include <stdlib.h>

typedef struct listagen
{
    void* info;
    struct listagen* prox;

} ListaGen;

typedef struct pilha
{
    ListaGen* prim;

} PilhaGen ;



PilhaGen* pilhaGen_cria(void)
{
    PilhaGen* p=(PilhaGen*)malloc(sizeof(PilhaGen));
    p->prim=NULL;

    return p;
}
int pilhaGen_vazia(PilhaGen* p)
{
    return p->prim == NULL;

}

void pilhaGen_push(PilhaGen* p, void* (*ler_registro)(void))
//vai adicionar um novo no a lista
{
    ListaGen* elemento=(ListaGen*)malloc(sizeof(ListaGen));
    elemento->info=ler_registro(); //ler_registro é a função que vai pegar a informacoes da lista
    elemento->prox=p->prim;
    p->prim=elemento;
}

void pilha_imprime(PilhaGen* p, void(*imp)(void*))
{
	ListaGen* q=p->prim;
	while(q!=NULL)
	{
        imp(q->info);
		q=q->prox;
	}
	
}

void* pilhaGen_pop(PilhaGen* p)
//vai excluir um no da estrutura
{
    ListaGen* t;
    void* v;
    if(pilhaGen_vazia(p))
    {
        printf("pilha vazia...");
        exit(1);
    }
    else
    {
        t=p->prim;
        v=t->info;
        p->prim=t->prox;
        free(t);
    }
    printf("\n\npop na estrutura");
    return v;
}