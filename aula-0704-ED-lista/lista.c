#include <stdio.h>
#include <stdlib.h>

struct lista
{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;


/*->vai ser o struct elemento* Head=NULL
o primeiro elemento vai ter o endere�o NULL
a fun��o a baixo vai criar a primeira regi�o de
memoria com o endere�o NULL*/
Lista* lst_cria(void) 
{
	return NULL; 
}

Lista* lst_vazia(Lista* L)
{
	if(L==NULL)
	{
		return L;
	}
	else
	{
		return 0;
	}

}
Lista* lst_insere(Lista* L, int i)
{
	/*vai fazer o pedido ao sistema operacional para que
	ele possa reservar um espa�o de memoria*/
	Lista* novo=(Lista*)malloc(sizeof(Lista)) ;
	novo->info = i;
	novo->prox = L;
	
	/*ele vai retornar novo que � o endere�o para um novo elemeneto
	da lista, e l vai receber o endere�o para o novo elemento*/ 
	return novo ;
}

void lst_imprime(Lista* L)
{
	Lista* p;
	for(p=L; p!=NULL; p=p->prox)
	{
		printf("info=%d\n", p->info) ;
		
	}
}

Lista* lst_busca(Lista* L, int i)
{
	Lista* p;
	
	for(p=L; p!=NULL; p=p->prox)
	{
		if(p->info==i)
		{
			printf("vai retornar o endereco de l");
			return p;
		}
	}
	printf("vai ser retornado NULL");
	return NULL;
}


Lista* lst_retira(Lista* L, int valor)
{
	Lista*p=L ;
	Lista*ant=NULL;
	
	while(p->info!=valor && p!=NULL)
	{
		ant=p;
		p=p->prox;
	}
	if(p==NULL)
	{
		L=p->prox ;
	}
	else
	{
		ant->prox=p->prox;
	}
	
	free(p);
	return L;
	
}

void lst_libera(Lista* L)
{
	Lista* p=L;
	
	while(p!=NULL)
	{
		Lista* t=p->prox;
		free(p);
		p=t;
	}
}

Lista* lst_insere_ordenado(Lista* L, int valor)
{
	Lista* novo=(Lista*)malloc(sizeof(Lista)) ;
	novo->info=valor;
	
	Lista* ant=NULL;
	Lista* p=L;
	
	while(p!=NULL && p->info<valor)
	{
		ant=p;
		p=p->prox;
	}
	
	if(ant == NULL)
	{
		novo->prox=L;
		L=novo;
	}
	else
	{
		novo->prox=ant->prox;
		ant->prox=novo;
	}
	
	return L;
}

//compara listas

int lst_igual(Lista* L1, Lista* L2)
{
	Lista* p1;
	Lista* p2;
	
	for(p1=L1, p2=L2; p1!=NULL && p2!=NULL; p1=p1->prox, p2=p2->prox)
	{
		if(p1->info != p2->info)
		{
			return 0;
		}
	}
	
	return p1 == p2;
}

//fun��es recursivas

/*Lista* lst_imprime_rec(Lista* L)
{
	if(!lst_vazia(L))
	{
		return 0;
	}
	else
	{
		printf("%d->",L->prox) ;
		lst_imprime_rec(L->prox);
	}
}
                              

Lista* lst_libera_rec(Lista* L)
{
	if(!lst_vazia(L))
	{
		lst_imprime_rec(L->prox);
		free(L);
	}
}

Lista* lst_retira_rec(Lista* L, int valor)
{
	if(!lst_vazia(L))
	{
		if(L->info == valor)
		{
			Lista* t=L;
			L=L->prox;
			free(t);
		}
		else
		{
			L->prox = lst_retira_rec(L->prox, valor);
		}
		
	}
	
	return L;

}

Lista* lst_igual_rec(Lista* L1, Lista* L2)
{
	if(L1==NULL && L2==NULL)
	{
		return 1;
	}
	else if(L1==NULL || L2==NULL)
	{
		return 0;
	}
	else
	{
		return (L1->info == L2->info) && lst_igual_rec(L1->prox,L2->prox) ;
	}
	
}*/

//lista duplamente encadiada
/*struc lista dupla
{
 int info;
 struct lista dupla* prox;
 struct lista dupla* ant;
} ListaDupla;

int lcirc_imprime(Lista* L)
{
	Lista* p=L
	if(p)
		do
		{
			printf("%d\n", p->info);
			p=p->prox;
			
				
		}
		while(p != L);
}
ListaDupla* lstdupla_insere(listaDupla* L, int valor)
{
	ListaDupla* novo=(ListaDupla*)malloc(sizeof(ListaDupla));
	novo->info+valor;
	
	if(!lstdupla-vazia(L))
	{
		novo->ant=L->ant;
		novo->prox=L;
		L->ant=novo;
		novo->ant->prox=novo;
	}
	else
	{
		novo->ant=novo;
		novo->prox=novo;
	}
	return novo;
}
ListaDupla* lstdupla_retira(ListaDupla* L, int 3)
{
	ListaDupla* p=L;
	if(!lstdupla_vazia(L))
		do{
			if(p->info==valor)
			{
				p->prox->ant=p->ant;
				p->ant->prox=p->prox;
				if(p==L)
				{
					L=p->prox;
					
				}
				free(p);
				break;
			}
			else
			{
				p=p->prox;
			}
		
		}
		while
			{
				p=!L;
			}
	return L;
}
*/
