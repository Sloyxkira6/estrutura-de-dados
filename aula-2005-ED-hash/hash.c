#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
	int matricula;
	char nome[100];
	char turma[20];
	char email[100];
} Aluno ;

static int hash(int mat)
{
	return mat%7;
}
Aluno** hash_cria(void) 
{
	return NULL; 
}
Aluno** hash_vazia(Aluno** L)
{
	if(L==NULL)
	{
		return L;
	}
	else
	{
		return 0;
	}

}

Aluno* hsh_busca(Aluno** tab, int mat)
{
	int h=0;
	while(tab[hash(mat)]!=NULL)
	{
		
		if(tab[h]->matricula==mat)
		{
			return tab[h];
		}
	h++;
	mat++;
	}
	return NULL ;
}
Aluno* hsh_insere(Aluno** tab, int mat)
{
	
	char nome[100];
	char turma[20];
	char email[100];

		printf("digite o nome: ");
		scanf("%s", nome);

		printf("digite a turma: ");
		scanf("%s", turma);

		printf("digite o e-mail: ");
		scanf("%s", email);
	
	int h=0;
	while(tab[h=hash(mat)]!=NULL)
	{
		h++;
		mat++;
	}
	tab[h]=(Aluno*)malloc(sizeof(Aluno));
	tab[h]->matricula=mat;
	strcpy(tab[h]->nome, nome);
	strcpy(tab[h]->turma, turma);
	strcpy(tab[h]->email, email);
	
	return tab[h];
}

