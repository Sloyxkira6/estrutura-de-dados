#include <stdio.h>
#include "arqhash.h"

int main()
{
	FILE* fp=fopen("arquivo.txt", rt);
	Aluno** tab;
	
	if(saida==NULL)
	{
		perror("erro ao abrir arquivo:");
	}
	
	hsh_grava("arquivo.txt", tab);
	
	return 0;
}
