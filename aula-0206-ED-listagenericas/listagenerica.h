//estruturas
typedef struct listagen ListaGen;


//funcoes

ListaGen* lgen_cria();

int lgen_vazia(ListaGen* L);

ListaGen* lgen_insere(ListaGen* L, void* p);

void lgen_imprime(ListaGen* L, void(*imp)(void*));

//faz busca apartir da lista generica, usando a função 'compara' 
//
void* lgen_busca(ListaGen* L, int (*comp)(void*, void*), void* chave);

ListaGen* lgen_exclui(ListaGen* L, int(*comp)(void*, void*), void*chave);



#include "listagenerica.c"
