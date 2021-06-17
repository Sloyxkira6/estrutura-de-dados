struct lista dupla
{
 int info;
 struct lista dupla* prox;
 struct lista dupla* ant;
} ListaDupla;

ListaDupla* lstdupla_cria()
{
	return NULL ;
}
ListaDupla* lstdupla_vazia(ListaDupla* L)
{
	if(L==NULL)
	{
		return L;
	}
	else
	{
		return 0 ;
	}
}

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
void lstdupla_imprime(ListaDupla* L, valor)
{
	ListaDupla* p;
	for (p=L, ==valor, i++)
	{
		printf("info=%d\n", p->info) ;
	}
	
}


void lstdupla_libera(ListaDupla* L)
{
	
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
