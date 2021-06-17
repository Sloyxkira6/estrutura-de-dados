

typedef struct lista Lista;


Lista* lst_cria();

Lista* lst_vazia(Lista* L);

Lista* Lst_insere(Lista* L, int i);

void lst_imprime(Lista* L);

Lista* lst_busca(Lista* L, int i);

Lista* lst_retira(Lista* L, int valor);

void lst_libera(Lista* L);

Lista* lst_insere_ordenado(Lista* L, int valor) ;

int lst_igual(Lista* L1, Lista* L2);

//funções em recursão

/*Lista* lst_imprime_rec(Lista* L);

Lista* lst_libera_rec(Lista* L);

Lista* lst_retira_rec(Lista* L, int valor);

Lista* lst_igual_rec(Lista* L1, Lista* L2);*/

#include "lista.c"

