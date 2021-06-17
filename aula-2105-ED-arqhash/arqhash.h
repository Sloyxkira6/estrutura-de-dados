typedef struct aluno, Aluno;

static int hash(int mat);

void hsh_grava(FILE* fp, Aluno** tab);

Aluno** hsh_carrega(FILE* fp);

#include "arqhash.h"
