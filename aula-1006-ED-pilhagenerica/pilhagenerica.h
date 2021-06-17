//estruturas

typedef struct listagen ListaGen ;

typedef struct pilha PilhaGen ;

//funções

PilhaGen* pilhaGen_cria(void);

int pilhaGen_vazia(PilhaGen* p);

void pilhaGen_push(PilhaGen* p, void* (*ler_registro)(void)) ;

void pilha_imprime(PilhaGen* p, void(*imp)(void*));

void* pilhaGen_pop(PilhaGen* p);

#include "pilhagenerica.c"