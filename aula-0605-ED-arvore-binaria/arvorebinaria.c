#include <stdio.h>
#include <stdlib.h>

typedef struct arv
{
	int info;
	struct arv* esq;
	struct arv* dir;
	
} Arv;

Arv* arvbin_cria_vazia(void)
{
	return NULL;	
}

int arvbin_vazia(Arv* a)
{
	
	return a==NULL;
}

Arv* arvbin_insere_ord(Arv* a, int valor)
{
	if(arvbin_vazia(a))
	{
		a=(Arv*)malloc(sizeof(Arv));
		
		a->info=valor ;
		a->dir=NULL ;
		a->esq=NULL ;
			
	}
	else
	{
		if(valor<a->info)
		{
			a->esq=arvbin_insere_ord(a->esq, valor);
			
		}
		else
		{
			a->dir=arvbin_insere_ord(a->dir, valor);
		}
	}
	return a;
}
Arv* arvbin_libera(Arv* a)
{
	if(!arvbin_vazia(a))
	{
		arvbin_libera(a->esq) ;
		arvbin_libera(a->dir) ;
		free(a);
	}
	return NULL;
}

int arvbin_pertence(Arv* a, int valor)
{
	if(arvbin_vazia(a))
	{
		return 0;
	}	
	else
	{
		return arvbin_pertence(a->esq, valor)||arvbin_pertence(a->dir, valor)||a->info==valor ;
	}
}

void arvbin_imprime_simetrico(Arv* a)
{
	if(!arvbin_vazia(a))
	{
		arvbin_imprime_simetrico(a->esq);
		printf("%d\n", a->info);
		arvbin_imprime_simetrico(a->dir);
	}
}
static int max2(int a, int b)
{
	return (a>b)?a:b ;
}

int arvbin_altura(Arv* a)
{
	if(a==NULL)
	{
		return -1; //por nossa definição, arvores vazias tem profundidade -1
	}
	else
	{
		return max2(1+arvbin_altura(a->esq), arvbin_altura(a->dir));
		
	}
}

//aula 28 dia 12.05.2021 

Arv* arvbin_busca(Arv* a, int valor)
{
	if(arvbin_vazia(a))
	{
		return NULL ;
		
	}
	else if(a->info>valor)
	{
		return arvbin_busca(a->esq, valor);
		
	}
	else if(a->info<valor)
	{
		return arvbin_busca(a->esq->dir, valor);
	}
	else
	{
		return a;
	}
		
}

Arv* arvbin_retira(Arv* r, int valor)
{
	if(r==NULL)
	{
		return NULL;
	}
	else if(r->info > valor)
	{
		r->esq=arvbin_retira(r->esq, valor);
	}
	else if(r->info < valor)
	{
		r->dir=arvbin_retira(r->dir, valor);
		
	}
	//achou o nó a ser retirado
	else 
	{

		if(r->esq==NULL && r->dir==NULL) //nó sem filhos
		{
			free(r);
			r=NULL;
		}
		else if(r->esq==NULL) //nó tem filho à direita
		{
			Arv* t=r;
			r=r->dir;
			free(t);
		}
		else if(r->dir==NULL) //nó tem filho à esquerda
		{
			Arv* t=r;
			r=r->esq;
			free(t);
		}
		else //nó tem dois filhos
		{
			Arv* f=r->esq ;
			while(f->dir!=NULL)
			{
				f=f->dir;
			}
			r->info=f->info; //troca as informações
			f->info=valor;
			r->esq=arvbin_retira(r->esq, valor);
		}
	}
	return r;
}






