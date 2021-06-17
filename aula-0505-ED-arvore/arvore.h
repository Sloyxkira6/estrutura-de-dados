//estrutura

typedef struct arv Arv ;

//funções

Arv* arv_criavazia(void);

Arv* arv_cria(char c, arv* sae, Arv* sad);

Arv* arv_libera(Arv* a);

int arv_vazia(Arv* a);

int arv_pertence(Arv* a, char c);

void arv_imprime(Arv* a);

#include "arvore.c"
