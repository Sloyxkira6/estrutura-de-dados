


typedef struct aluno Aluno ;

static int hash(int mat);

Aluno** hash_cria(void);

Aluno** hash_vazia(Aluno** L);

Aluno* hsh_busca(Aluno** tab, int mat);

Aluno* hsh_insere(Aluno** tab, int mat);
				  
				  
#include "hash.c"
