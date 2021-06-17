#include <stdio.h>
#include <stdlib.h>


typedef struct arv
{
	char info;
	struct arv* esq;
	struct arv* dir;
	
} arv, Arv;



Arv* arv_criavazia(void)
{
	return NULL;	
	
}

arv* arv_cria(char c, arv* sae, Arv* sad)
{
	Arv* no=(Arv*)malloc(sizeof(Arv));
	
	no->info=c;
	no->esq=sae;
	no->dir=sad;
	
	return no;
	
}

void arv_imprime(Arv* a)
{
	if(!arv_vazia(a))
	{
		printf("%c\n", a->info);
		arv_imprime(a->esq);
		arv_imprime(a->dir);
	}
}

Arv* arv_libera(Arv* a)
{
	if(!arv_vazia(a))
	{
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
	}
	return NULL;
}

int arv_vazia(Arv* a)
{
	return NULL ;
}

int arv_pertence(Arv* a, char c)
{
	if(arv_vazia(a))
	{
		return 0;
	}	
	else
	{
		return arv_pertence(a->esq, c)||arv_pertence(a->dir, c)||a->info==c ;
	}
}



