#include <stdio.h>
#include <stlib.h>



void arvbin_grava(Arv* a, FILE* arquivo)
{
	if(!arvbin_vazia(a))
	{
		arvbin_grava(a->esq, fp);
	}
	arvbin_grama(a->dir, fp);
	fprintf(saida, "%d\n", a->info);
}

Arv* arvbin_carrega(FILE* fp)
