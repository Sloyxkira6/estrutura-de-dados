//estruturas

typedef struct lista Lista;

typedef struct fila Fila;

//funções

Fila* fila_cria(void);

int fila_vazia(Fila* f);

void fila_insere(Fila* f, float valor);

void fila_imprime(Fila* f);

float fila_retira(Fila* f);

void fila_libera(Fila* f);

#include "fila.c"
