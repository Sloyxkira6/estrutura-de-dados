//estruturas

//estrtura com dado de numero float
typedef struct lista Lista ;

//estrutura para a pilha
typedef struct pilha Pilha ;

//funções

int pilha_vazia(Pilha* p);

void pilha_push(Pilha* p, float valor);

float pilha_pop(Pilha* p);

void pilha_imprime(Pilha* p);

void pilha_libera(Pilha* p);

#include "pilha.c"
