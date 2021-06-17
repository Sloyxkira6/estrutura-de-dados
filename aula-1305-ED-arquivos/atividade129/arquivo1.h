
//estrtura
typedef struct arv Arv;

//funcoes

// arvbin_cria_vazia: vai criar um ponteiro que aponta para null
//no caso o primeiro no da arvore
Arv* arvbin_cria_vazia();

//vai verificar se o ponteiro realmente ta apontando para null
int arvbin_vazia(Arv* a);
//vai criar os nós de forma ordenada
Arv* arvbin_insere_ord(Arv* a, FILE* fp);

//vai colocar os dados nos nó criados
Arv* arvbin_carrega(FILE* fp);

#include "arquivo1.c"