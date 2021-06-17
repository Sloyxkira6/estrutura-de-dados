//estrtura
typedef struct arv Arv;

//funções

//cria um nó vazia
Arv* arvbin_cria_vazia(void) ;

//cria uma arvore vazia
int arvbin_vazia(Arv* a);

//insere um valor para o no da arvore
Arv* arvbin_insere_ord(Arv* a, int valor);

//libera a memoria q a arvore esta consumindo
Arv* arvbin_libera(Arv* a) ;

//verifica se o elemento pertence a algum no da arvore
int arvbin_pertence(Arv* a, int valor);

//imprime a arvore em forma simetrica
void arvbin_imprime_simetrico(Arv* a);

static int max(int a, int b);

//saber a profundidade da arvore
int arvbin_altura(Arv* a);

//busca um elemento que esta na arvore
Arv* arvbin_busca(Arv* a, int valor);

//retira algum elemento que esta na arvore
Arv* arvbin_retira(Arv* r, int valor);

#include "arvorebinaria.c"
