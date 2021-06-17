#include <stdio.h>
#include "hash.h"
#define h 6
int main()
{
	
	int matricula=0;
	Aluno** tab[h] ;

	for(int i=0; i<6; i++)
	{
		tab[i] = hash_cria();
		hash_vazia(tab[i]);
		
		printf("digite o numero da matricula: ");
		scanf("%d", &matricula);
		
		tab[i] = hsh_insere(tab[i], matricula);
	}
	return 0;
}
