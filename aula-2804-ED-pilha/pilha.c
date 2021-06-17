#include <stdio.h>
#include <stdlib.h>

struct lista
{
	float info;
	struct lista* prox;
} ;
typedef struct lista Lista;

struct pilha
{
	Lista* prim;
} ;
typedef struct pilha Pilha;

//funções

Pilha* pilha_cria(void)
{
	Pilha* p=(Pilha*)malloc(sizeof(Pilha));
	p->prim=NULL ;
	
	return p;
	
}

int pilha_vazia(Pilha* p)
{

	return p->prim==NULL ;

}
void pilha_push(Pilha* p, float valor)
{
	Lista* novo=(Lista*)malloc(sizeof(Lista));
	novo->info=valor;
	novo->prox=p->prim;
	
	p->prim=novo;
}
float pilha_pop(Pilha* p)
{
	Lista* t;
	float v ;
	if(pilha_vazia(p))
	{
		printf("Pilha vazia...");
		exit(1);
	}
	else
	{
		t=p->prim;
		v=t->info;
		p->prim=t->prox;
		free(t);
		
	}
	return v ;
}
void pilha_imprime(Pilha* p)
{
	Lista* q=p->prim;
	while(q!=NULL)
	{
		printf("%10.2f\n", q->info) ;
		q=q->prox;
	}
	
}
void pilha_libera(Pilha* p)
{
	Lista* q=p->prim;
	while(q!=NULL)
	{
		Lista* t=q->prox;
		free(q);
		q=t ;
	}
	free(p) ;
}
