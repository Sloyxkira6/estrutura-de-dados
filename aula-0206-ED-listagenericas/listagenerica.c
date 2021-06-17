#include <stdio.h>
#include <stdlib.h>


typedef struct listagen
{
    void* info;
    struct listagen* prox;

} ListaGen;

ListaGen* lgen_cria()
{
    return NULL;
}
//vai verificar se a lista é vazia
int lgen_vazia(ListaGen* L)
{
    return L==NULL;
}

ListaGen* lgen_insere(ListaGen* L, void* p)
{
    ListaGen* novo=(ListaGen*)malloc(sizeof(ListaGen)) ;
	novo->info = p;
	novo->prox = L;
	printf("criado estrutura generica");
	return novo ;
    
}

void lgen_imprime(ListaGen* L, void(*imp)(void*))//parametro
{
    
    ListaGen* p;
    printf("\n\n6.impressao de lista generica\n");
    for(p=L; p!=NULL; p=L->prox)
    {
        imp(L->info);
    }
    
}



void* lgen_busca(ListaGen* L, int (*comp)(void*, void*), void* chave)//l, compara, &matricula
//&matricula -> apenas a matricula da estrutura
{
    ListaGen* p;
    for(p=L; p!=NULL; p=p->prox)
    {
        if(comp(p->info, chave))
        {
            return p->info;
        }
    }
    return NULL;
}



ListaGen* lgen_exclui(ListaGen* L, int(*comp)(void*, void*), void*chave)
{
    ListaGen* p ;
    ListaGen* ant=NULL ;

    for(p=L; p!=NULL; ant=p, p=p->prox)
    {
        if (comp(p->info, chave))
        {
            break;
        }
    }
    if(p==NULL)
    {
        return L;
    }
    if(ant==NULL)
    {
        L=p->prox;
    }
    else
    {
        ant->prox=p->prox;
    }

	
	
    free(p->info);
    free(p);
    
    printf("excluido no da lista");
    return L;

}
