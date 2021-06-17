#include <stdio.h>
#include <stdlib.h>

struct lista
{
	float info;
	struct lista* prox;
} ;
typedef struct lista Lista;

typedef struct fila
{
	Lista* ini;
	Lista* fim;
} fila, Fila;
typedef struct fila Fila;

Fila* fila_cria(void)
{
	Fila* f=(Fila*)malloc(sizeof(Fila)) ;
	f->ini=f->fim=NULL ;
	return f ;
	
}
int fila_vazia(Fila* f)
{
	return f->ini==NULL ;
}

void fila_insere(Fila* f, float valor)
{
	Lista* novo=(Lista*)malloc(sizeof(Lista));
	novo->info=valor;
	novo->prox=NULL;
	if(f->fim!=NULL)
	{
		f->fim->prox=novo;
	}
	else
	{
		f->ini=novo;
		
	}
	f->fim=novo;
}
void fila_imprime(Fila* f)
{
	Lista* q=f->ini;
	while(q!=NULL)
	{
		printf("%10.5f", q->info);
		q=q->prox ;
	}
}
float fila_retira(Fila* f)
{
	Lista* t;
	float v; //valor que ta retirando do front da fila
	
	if(fila_vazia(f))
	{
		printf("fila vazia...");
		
	}
	t=f->ini;
	v=t->info;
	f->ini=t->prox;
	
	if(fila_vazia(f)) //verifica se a fila ficou vazia
	{
		f->fim=NULL;	
	}
	free(t);
	return v;
}

void fila_libera(Fila* f)
{
	Lista* q=f->ini;
	while(q!=NULL)
	{
		Lista* t=q->prox;
		free(q) ;
		q=t;
	}
	free(f);
}
